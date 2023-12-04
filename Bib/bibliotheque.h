#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
#include"entete.h"
#include "livre.h"
#include "lecteur.h"
class bibliotheque
{
public:
    bibliotheque();
    bibliotheque(vector<livre> livres,vector<Lecteur>lecteurs, vector<auteur> auteurs)
        :livres(livres),lecteurs(lecteurs),auteurs(auteurs){};
    vector<livre> getLivres();
    vector<Lecteur> getlecteurs();
    vector<auteur> getauteurs();
    void ajoutAuteur(const auteur &auteur);
    void ajoutLivre(const livre &livre);
    void ajoutLecteur(const Lecteur& lecteur);
    void emprunter(Lecteur lecteur, livre livre);
    void restituer(Lecteur lecteur, livre livre);

private:
    vector<livre> livres;
    vector <Lecteur> lecteurs;
    vector <auteur> auteurs;
};

#endif // BIBLIOTHEQUE_H
