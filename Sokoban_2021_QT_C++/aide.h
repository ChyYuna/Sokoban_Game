#ifndef AIDE_H
#define AIDE_H

#include <QMainWindow>

namespace Ui {
class Aide;
}
/**
 * @brief Cette classe s'occupe d'afficher l'aide dans le jeu
 *
 */
class Aide : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur
     *
     * @param parent
     */
    explicit Aide(QWidget *parent = nullptr);
    /**
     * @brief affiche les éléments graphiques
     *
     * @param e
     */
    void paintEvent(QPaintEvent* e);
    /**
     * @brief Destructeur
     *
     */
    ~Aide();

private:
    Ui::Aide *ui; /**< TODO: describe */
};

#endif // AIDE_H
