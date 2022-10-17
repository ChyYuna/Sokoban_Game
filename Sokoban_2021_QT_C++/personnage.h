#include "coordonnees.h"
#include <string>
#include <QPainter>


#ifndef PERSONNAGE_H
#define PERSONNAGE_H

/**
 * @brief Gère le personnage dans le jeu
 *
 */
class Personnage: public Coordonnees
{
public:
    /**
     * @brief Constructeur
     *
     * @param x
     * @param y
     */
    Personnage(int x, int y);
    /**
     * @brief Constructeur
     *
     * @param m_pos
     */
    Personnage(Coordonnees m_pos);
    /**
     * @brief
     *
     * @return Position du personnage sur le plateau
     */
    Coordonnees getPosition();
    /**
     * @brief Affiche le personnage sur le plateau
     *
     * @param p
     * @param perso : skin du personnage
     */
    void afficher_perso(QPainter *p, int perso=0);

};

#endif // PERSONNAGE_H
