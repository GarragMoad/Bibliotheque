#include "auteur.h"

auteur::auteur()
{

}
// Implémentation des getters
std::string auteur::getIdentifiant() const {
    return identifient;
}

std::string auteur::getNom() const {
    return nom;
}

std::string auteur::getPrenom() const {
    return prenom;
}

date auteur::getDateNaissance() const {
    return date_naissance;
}

// Implémentation des setters
void auteur::setIdentifiant(const std::string& identifiant) {
    this->identifient = identifiant;
}

void auteur::setNom(const std::string& nom) {
    this->nom = nom;
}

void auteur::setPrenom(const std::string& prenom) {
    this->prenom = prenom;
}

void auteur::setDateNaissance(const date& d) {
    this->date_naissance = d;
}

// Surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream& os, const auteur& auteur) {
    os << "Identifiant: " << auteur.identifient << std::endl;
    os << "Nom: " << auteur.nom << std::endl;
    os << "Prénom: " << auteur.prenom << std::endl;
    os << "Date de naissance: " <<auteur.date_naissance.toString() << std::endl;

    return os;
}
auteur& auteur::operator=(const auteur& autreAuteur) {
    if (this != &autreAuteur) {
        identifient = autreAuteur.identifient;
        nom = autreAuteur.nom;
        prenom = autreAuteur.prenom;
        date_naissance = autreAuteur.date_naissance;
    }
    return *this;
}

