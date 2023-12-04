#include "lecteur.h"

Lecteur::Lecteur()
{

}
// Getters
std::string Lecteur::getIdentifiant() const {
    return identifiant;
}

std::string Lecteur::getNom() const {
    return nom;
}

std::string Lecteur::getPrenom() const {
    return prenom;
}

std::vector<std::string> Lecteur::getListeLivresEmpruntes() const {
    return listeLivresEmpruntes;
}

// Setters
void Lecteur::setIdentifiant(const std::string& identifiant) {
    this->identifiant = identifiant;
}

void Lecteur::setNom(const std::string& nom) {
    this->nom = nom;
}

void Lecteur::setPrenom(const std::string& prenom) {
    this->prenom = prenom;
}

void Lecteur::emprunterLivre(const std::string& isbn) {
    listeLivresEmpruntes.push_back(isbn);
}

// Surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream& os, const Lecteur& lecteur) {
    os << "Identifiant: " << lecteur.identifiant << std::endl;
    os << "Nom: " << lecteur.nom << std::endl;
    os << "Prénom: " << lecteur.prenom << std::endl;

    os << "Livres empruntés: ";
    for (const auto& isbn : lecteur.listeLivresEmpruntes) {
        os << isbn << ", ";
    }
    os << std::endl;

    return os;
}
