#ifndef MENU_H
#define MENU_H

#include <mainwindow.h>
#include <QMainWindow>
#include <QFileDialog>
#include <QKeyEvent>
#include "mainwindow.h"
#include "aide.h"
#include "option.h"

namespace Ui {
class Menu;
}
/**
 * @brief Menu du jeu
 */
class Menu : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur
     *
     * @param parent
     */
    explicit Menu(QWidget *parent = nullptr);
    /**
     * @brief Destructeur
     *
     */
    ~Menu();
    /**
     * @brief affiche les éléments graphiques
     *
     * @param e
     */
    void paintEvent(QPaintEvent* e);

private slots:
    /**
     * @brief Bouton jouer
     *
     */
    void on_Jouer_clicked();

    /**
     * @brief Bouton Quitter
     *
     */
    void on_Quitter_clicked();

    /**
     * @brief Bouton Option
     *
     */
    void on_pushButton_clicked();

private:
    Ui::Menu *ui; /**< TODO: describe */
    MainWindow mainwindow; /**< TODO: describe */
    Aide aide; /**< TODO: describe */
    Option option; /**< TODO: describe */
};

#endif // MENU_H
