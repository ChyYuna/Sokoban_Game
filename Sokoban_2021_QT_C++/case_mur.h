#include "case.h"

#ifndef CASE_MUR_H
#define CASE_MUR_H

/**
 * @brief Case Mur
 */
class Case_Mur: public Case
{
private:
    ;
public:
    /**
     * @brief Constructeur
     *
     * @param type = 3
     */
    Case_Mur(int type=3);
    /**
     * @brief afficher_case
     * @param p: Painter
     * @param i: Abscisse
     * @param j: ordonnées
     * @param deco: skin
     */
    void afficher_case(QPainter *p, int i, int j, int deco);

};

#endif // CASE_MUR_H
