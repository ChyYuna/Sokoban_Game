#include "case_mur.h"

Case_Mur::Case_Mur(int m_type): Case(m_type)
{
}

void Case_Mur::afficher_case(QPainter *p, int i, int j, int deco)
{

    p->drawPixmap(j*50,i*50+30,50,50, QPixmap(":/images/data/PNG/wall"+QString::number(deco)+".png"));
}
