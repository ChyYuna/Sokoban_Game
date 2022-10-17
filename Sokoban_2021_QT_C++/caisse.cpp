#include "caisse.h"

Caisse:: Caisse(int x, int y, bool Etat, int m_type): Coordonnees(x,y)
{
    EtatCaisse = Etat;
    type = m_type;
}


bool Caisse::getEtat(){
    return EtatCaisse;
}


void Caisse::ChangementCouleur(){
    // changer la photo de la caisse
    EtatCaisse = !EtatCaisse;
}


void Caisse:: afficher_caisse(QPainter *p, int deco){
    if (EtatCaisse==true)
        p->drawPixmap(getY()*50,getX()*50+30,50,50, QPixmap(":/images/data/PNG/caisse - marquee"+QString::number(deco)+".png"));
    else
        p->drawPixmap(getY()*50,getX()*50+30,50,50, QPixmap(":/images/data/PNG/caisse"+QString::number(deco)+".png"));

}
