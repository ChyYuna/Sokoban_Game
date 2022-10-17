#include <string>
using namespace std;

#ifndef COORDONNEES_H
#define COORDONNEES_H
/**
 * @brief Permet de créer des coordonnées pour les différents éléments du jeu
 */
class Coordonnees
{
private:
    int x; /** abscisse */
    int y; /** ordonnee */
public:
    /**
     * @brief Constructeur
     *
     * @param m_x : abs
     * @param m_y : ord
     */
    Coordonnees(int m_x, int m_y);
    /**
     * @brief Constructeur de recopie
     *
     * @param coord
     * @param d : direction
     */
    Coordonnees(const Coordonnees& coord, string d);
    /**
     * @brief setX : mutateur
     * @param m : nouvelle valeur
     */
    void setX(int m);
    /**
     * @brief setY : mutateur
     * @param m : nouvelle valeur
     */
    void setY(int m);
    /**
     * @brief getX : accesseur
     * @return x
     */
    int getX() const;
    /**
     * @brief getY: accesseur
     * @return y
     */
    int getY() const;
    /**
     * @brief operator =
     * @param coord
     * @return renvoie une copie de coordonnées
     */
    Coordonnees& operator=(const Coordonnees coord);
};

#endif // COORDONNEES_H
