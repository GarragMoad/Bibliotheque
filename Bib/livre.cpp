#include "livre.h"
// Implémentation des getters
std::string livre::getTitre() const { return titre; }
auteur livre::getAuteur() const { return auteur; }
Langue livre::getLangue() const { return langue; }
std::string livre::getGenre() const { return genre; }
date livre::getDate_pub() const { return date_pub; }
std::string livre::getisbn() const { return isbn; }
std::vector<std::string> livre::getListEmprunts() const { return listemprunts; }

// Implémentation des setters
void livre::setTitre(const std::string& newTitre) { titre = newTitre; }
void livre::setAuteur(const class auteur& newAuteur) { auteur = newAuteur; }
void livre::setLangue(Langue newLangue) { langue = newLangue; }
void livre::setGenre(const std::string& newGenre) { genre = newGenre; }
void livre::setDate_pub(const date& newDate_pub) { date_pub = newDate_pub; }
void livre::setIsbn(const std::string& newIsbn) { isbn = newIsbn; }
void livre::setListEmprunts(const std::vector<std::string>& newListEmprunts) { listemprunts = newListEmprunts; }


std::ostream& operator<<(std::ostream& os, const livre& livre) {
    os <<  std::endl << "Titre: " << livre.titre << std::endl;
    os << "Auteur: " << livre.auteur;
    os << "Langue: " << livre.langue << std::endl;
    os << "Genre: " << livre.genre << std::endl;
    os << "Date de publication : " << livre.date_pub.toString() << std::endl;
    os << "ISBN: " << livre.isbn << std::endl;

    os << "Liste des emprunts: ";
    for (const auto& emprunt : livre.listemprunts) {
        os << emprunt << ", ";
    }
    os << std::endl;

    return os;
}
