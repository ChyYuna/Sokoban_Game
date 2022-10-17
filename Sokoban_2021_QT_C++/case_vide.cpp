#include "case_vide.h"

Case_Vide::Case_Vide(int m_type) : Case(m_type)
{
}


void Case_Vide::afficher_case(QPainter *p, int i, int j, int deco)
{

    p->drawPixmap(j*50,i*50+30,50,50, QPixmap(":/images/data/PNG/ground"+QString::number(deco)+".png"));

}
