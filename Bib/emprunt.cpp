#include "emprunt.h"

Emprunt::Emprunt()
{

}
// Getters
std::string Emprunt::getISBN() const {
    return isbn;
}

std::string Emprunt::getLecteurIdentifiant() const {
    return lecteur_identifiant;
}

date Emprunt::getDateEmprunt() const {
    return date_emprunt;
}

// Setters
void Emprunt::setISBN(const std::string& isbn) {
    this->isbn = isbn;
}

void Emprunt::setLecteurIdentifiant(const std::string& lecteurIdentifiant) {
    this->lecteur_identifiant = lecteurIdentifiant;
}

void Emprunt::setDateEmprunt(const date& dateEmprunt) {
    this->date_emprunt = dateEmprunt;
}

// Surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream& os, const Emprunt& emprunt) {
    os << "ISBN: " << emprunt.isbn << std::endl;
    os << "Identifiant du lecteur: " << emprunt.lecteur_identifiant << std::endl;
    os << "Date d'emprunt: " << emprunt.date_emprunt.toString() << std::endl;

    return os;
}
