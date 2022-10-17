#include <QMainWindow>
#include <QFileDialog>
#include <QKeyEvent>
#include <QMessageBox>
#include "plateau.h"

#ifndef MAINWINDOW_H
#define MAINWINDOW_H


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
/**
 * @brief Gère le jeu et l'IHM
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur
     *
     * @param parent
     */
    MainWindow(QWidget *parent = nullptr);
    /**
     * @brief Destructeur
     *
     */
    ~MainWindow();
    /**
     * @brief affiche les éléments graphiques
     *
     * @param e
     */
    void paintEvent(QPaintEvent* e);
    /**
     * @brief Gere les déplacements par le clavier dans le jeu
     *
     * @param event
     */
    void keyPressEvent ( QKeyEvent * event);
    /**
     * @brief gère les différents niveaux
     * @param niveau
     */
    void gestionPlateau(int niveau);
    /**
     * @brief change le niveau actuel
     * @param niv
     */
    void setNiveau(int niv);
    /**
     * @brief renvoie le niveau actuel
     * @return niveau
     */
    int getNiveau();
    /**
     * @brief setDeco : modifie la déco du jeu
     * @param val : skin choisi
     */
    void setDeco(int val);
    /**
     * @brief setPerso : modifie le skin du perso
     * @param val : skin choisi
     */
    void setPerso(int val);
private:
    Ui::MainWindow *ui;
    int niveau =1; /**< TODO: describe */
    Plateau *pl; /**< TODO: describe */
    int perso; /**< TODO: describe */
    int deco; /**< TODO: describe */

private slots:
    /**
     * @brief on_actionNouvelle_Partie_triggered
     */
    void on_actionNouvelle_Partie_triggered();
    /**
     * @brief on_actionRecommencer_triggered
     */
    void on_actionRecommencer_triggered();

};
#endif // MAINWINDOW_H
