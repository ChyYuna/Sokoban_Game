#ifndef OPTION_H
#define OPTION_H

#include <string>
#include <QDialog>

using namespace std;
namespace Ui {
class Option;
}
/**
 * @brief Gère les options du jeu
 */
class Option : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur
     *
     * @param parent
     */
    explicit Option(QWidget *parent = nullptr);
    /**
     * @brief Destructeur
     *
     */
    ~Option();

    /**
     * @brief skin du personnage choisi
     *
     * @return int
     */
    int getPerso();
    /**
     * @brief skin du decor choisi
     *
     * @return int
     */
    int getDeco();

private slots:
    /**
     * @brief Confirme les choix effectués
     *
     */
    void on_buttonBox_accepted();

private:
    Ui::Option *ui; /**< TODO: describe */
    int perso=0; /**< TODO: describe */
    int deco=0; /**< TODO: describe */
};

#endif // OPTION_H
