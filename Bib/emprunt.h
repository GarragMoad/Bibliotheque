#ifndef EMPRUNT_H
#define EMPRUNT_H

#include"entete.h""
class Emprunt
{
public:
    Emprunt();
    Emprunt(const std::string& isbn, const std::string& lecteurIdentifiant, const date& dateEmprunt);

       // Getters
       std::string getISBN() const;
       std::string getLecteurIdentifiant() const;
       date getDateEmprunt() const;

       // Setters
       void setISBN(const std::string& isbn);
       void setLecteurIdentifiant(const std::string& lecteurIdentifiant);
       void setDateEmprunt(const date& dateEmprunt);

       // Surcharge de l'opérateur <<
       friend std::ostream& operator<<(std::ostream& os, const Emprunt& emprunt);
private:
       std::string isbn;
       std::string lecteur_identifiant;
       date date_emprunt;

};

#endif // EMPRUNT_H
