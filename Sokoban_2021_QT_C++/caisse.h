#include "coordonnees.h"
#include <QPainter>

#ifndef CAISSE_H
#define CAISSE_H

/**
 * @brief S'occupe des caisses dans le jeu
 */
class Caisse: public Coordonnees
{
private:
    bool EtatCaisse; /**< TODO: describe */
    int type; /**< TODO: describe */
public:
    /**
     * @brief Constructeur
     *
     * @param x : abs de la caisse
     * @param y : ord de la caisse
     * @param Etat : marquée ou pas
     * @param m_type : 4
     */
    Caisse(int x=0, int y=0,  bool Etat=false,int m_type=4);
    /**
     * @brief
     * @return renvoie l'état de la caisse: marquée ou pas
     */
    bool getEtat();
    /**
     * @brief
     * @return renvoie la position de la caisse sur le plateau
     */
    Coordonnees getPosition();
    /**
     * @brief l'état de la caisse
     */
    void ChangementCouleur();
    /**
     * @brief affiche les caisses sur le plateau
     * @param p
     * @param deco: skin choisi
     */
    void afficher_caisse(QPainter *p, int deco);

};

#endif // CAISSE_H
