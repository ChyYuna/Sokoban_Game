#include "case.h"


#ifndef CASE_MARQUEE_H
#define CASE_MARQUEE_H

/**
 * @brief Case Marquée
 */
class Case_Marquee: public Case
{
private:
public:
    /**
     * @brief Constructeur
     *
     * @param m_type = 2
     */
    Case_Marquee(int m_type=2);
    /**
     * @brief afficher_case
     * @param p: Painter
     * @param i: Abscisse
     * @param j: ordonnées
     * @param deco: skin
     */
    void afficher_case(QPainter *p, int i, int j, int deco);

};

#endif // CASE_MARQUEE_H
