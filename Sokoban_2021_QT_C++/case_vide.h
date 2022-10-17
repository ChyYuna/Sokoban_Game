#include "case.h"

#ifndef CASE_VIDE_H
#define CASE_VIDE_H

/**
 * @brief Case Vide
 */

class Case_Vide : public Case
{
private:
public:
    /**
     * @brief Constructeur
     *
     * @param type
     */
    Case_Vide(int type=1);
    /**
     * @brief afficher_case
     * @param p: Painter
     * @param i: Abscisse
     * @param j: ordonnées
     * @param deco: skin
     */
    void afficher_case(QPainter *p, int i, int j, int deco);

};

#endif // CASE_VIDE_H
