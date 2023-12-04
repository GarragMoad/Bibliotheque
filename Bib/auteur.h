#ifndef AUTEUR_H
#define AUTEUR_H
#include "entete.h">

class auteur
{
public:
    auteur();
    auteur(string identifient, string nom, string prenom, date d)
        : identifient(identifient), nom(nom), prenom(prenom),date_naissance(d) {};
    // Getters
        std::string getIdentifiant() const;
        std::string getNom() const;
        std::string getPrenom() const;
        date getDateNaissance() const;

        // Setters
        void setIdentifiant(const std::string& identifiant);
        void setNom(const std::string& nom);
        void setPrenom(const std::string& prenom);
        void setDateNaissance(const date& d);

        // Surcharge de l'opérateur <<
        friend std::ostream& operator<<(std::ostream& os, const auteur& auteur);

        auteur& operator=(const auteur& autreAuteur);


private:
    string identifient;
    string nom;
    string prenom;
    date date_naissance;
};

#endif // AUTEUR_H
