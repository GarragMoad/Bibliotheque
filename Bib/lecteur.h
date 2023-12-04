#ifndef LECTEUR_H
#define LECTEUR_H

#include"entete.h"

class Lecteur
{
public:
    Lecteur();
    Lecteur(const std::string identifiant, const std::string nom, const std::string prenom): identifiant(identifiant), nom(nom), prenom(prenom){};

    // Getters
    std::string getIdentifiant() const;
    std::string getNom() const;
    std::string getPrenom() const;
    std::vector<std::string> getListeLivresEmpruntes() const;

    // Setters
    void setIdentifiant(const std::string& identifiant);
    void setNom(const std::string& nom);
    void setPrenom(const std::string& prenom);

    // Ajouter un livre à la liste des livres empruntés
    void emprunterLivre(const std::string& isbn);

    // Surcharge de l'opérateur <<
    friend std::ostream& operator<<(std::ostream& os, const Lecteur& lecteur);

private:
    std::string identifiant;
    std::string nom;
    std::string prenom;
    std::vector<std::string> listeLivresEmpruntes;
};

#endif // LECTEUR_H
