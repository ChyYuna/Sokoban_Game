#include "personnage.h"
#include <iostream>
using namespace std;

Personnage::Personnage(int x, int y): Coordonnees(x,y)
{
}

Personnage::Personnage(Coordonnees m_pos): Coordonnees(m_pos.getX(),m_pos.getY())
{

}

Coordonnees Personnage:: getPosition(){
    return Coordonnees(this->getX(), this->getY());
}


void Personnage:: afficher_perso(QPainter *p, int perso){
    p->drawPixmap(getY()*50,getX()*50+30,50,50, QPixmap(":/images/data/PNG/playerFace" + QString::number(perso) + ".png"));
}
