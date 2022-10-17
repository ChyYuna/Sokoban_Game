#include "case.h"
#include "case_marquee.h"
#include "case_mur.h"
#include "case_vide.h"
#include "caisse.h"
#include "personnage.h"
#include <iostream>
#include <string>

#include <fstream>
#include <QPainter>
#include <QFile>
#include <vector>

#ifndef PLATEAU_H
#define PLATEAU_H

using namespace std;

/**
 * @brief Plateau du jeu
 */
class Plateau: public Coordonnees
{
private:
    int nbCaisse; /** nombre de caisses */
    int largeur; /**< TODO: describe */
    int longueur; /**< TODO: describe */
    vector<vector <Case*>> GrillePlateau; /** Plateau du jeu*/
    vector<Caisse*> ListeCaisse; /**< TODO: describe */
    Personnage *PersoSurPlateau; /**< TODO: describe */
public:
    /**
     * @brief Constructeur
     *
     * @param file : Fichier d'importation du niveau
     * @param x
     * @param y
     */
    Plateau(string file, int x=1, int y=1);
    /**
     * @brief Destructeur
     *
     */
    ~Plateau();
    /**
     * @brief  Déplace ou non le personnage sur la grille
     * @param coordP : coordonnées du perso
     * @param d : direction
     */
    void deplacerPerso(Coordonnees coordP, string d);
    /**
     * @brief Déplace ou non la caisse sur la grille
     * @param coordC : coordonnées de la caisse
     * @param d : direction
     * @return : possible ou pas
     */
    bool deplacerCaisse(Coordonnees coordC, string d);
    /**
     * @brief
     * @return l'instance Personnage
     */
    Personnage *getPersonnage();
    /**
     * @brief
     * @return longueur
     */
    int getLongueur();
    /**
     * @brief
     * @return largeur
     */
    int getLargeur();
    /**
     * @brief vérifie si pour la coordonnées donnée, il existe une caisse
     * @param coord
     * @param d direction
     * @return True/False
     */
    bool existeDansListeCaisse(Coordonnees coord, string d);
    /**
     * @brief
     * @param coord
     * @param d direction
     * @return Case_Mur ou Case_Vide ou Case_Marquée ou Caisse
     */
    int verifierPosition(Coordonnees coord, string d);
    /**
     * @brief met à jour les coordonnées du personnage
     * @param coordP
     * @param d direction
     */
    void updateCoordonneesP(Coordonnees coordP,string d);
    /**
     * @brief updateCoordonneesC
     * @param coordP coordonnées caisse
     * @param d direction
     */
    void updateCoordonneesC(Coordonnees coordC,string d);
    /**
     * @brief getCaisse
     * @param coord
     * @return la caisse de coordonnées coord
     */
    Caisse *getCaisse(Coordonnees coord);
    /**
     * @brief afficher_Plateau
     * @param p Painter
     * @param perso skin choisi
     * @param deco décor choisi
     */
    void afficher_Plateau(QPainter *p, int perso=0, int deco=0);
    /**
     * @brief getNbCaisse accesseur
     * @return nombre de caisses
     */
    int getNbCaisse();
    /**
     * @brief getListeCaisse
     * @return ListeCaisse
     */
    vector<Caisse*> getListeCaisse();
    /**
     * @brief
     * @return True / False
     */
    bool Niveau_terminee();

};

#endif // PLATEAU_H
