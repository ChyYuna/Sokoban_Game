#include <QPainter>

#ifndef CASE_H
#define CASE_H

/**
 * @brief Gère les différentes types de cases du plateau
 */
class Case
{
    int type;
public:
    /**
     * @brief Constructeur
     *
     * @param m_type
     */
    Case(int m_type);
    /**
     * @brief Destructeur
     *
     */
    virtual ~Case() {};
    /**
     * @brief getType
     * @return type de la case: Vide, Mur, Marquée
     */
    int getType();
    /**
     * @brief afficher_case
     * @param p : Painter
     * @param i : abs
     * @param j : ord
     * @param deco : skin choisi
     */
    virtual void afficher_case(QPainter *p, int i, int j, int deco) =0;


};

#endif // CASE_H
