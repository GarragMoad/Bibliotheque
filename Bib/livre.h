#ifndef LIVRE_H
#define LIVRE_H

#include "Auteur.h"
#include "date.h"
#include <vector>
#include <iostream>
#include "entete.h">

enum Langue {
    anglais,
    francais,
    arabe
};


class livre
{
public:
    livre();
    livre(
           const std::string& titre,
           const auteur& auteur,
           Langue langue,
           const std::string& genre,
           const date& date_pub,
           const std::string& isbn,
           const std::vector<std::string>& listEmprunts
       ) : titre(titre),
           auteur(auteur),
           langue(langue),
           genre(genre),
           date_pub(date_pub),
           isbn(isbn),
           listemprunts(listEmprunts) {}

    //getters
    string getTitre() const;
    auteur getAuteur() const;
    Langue getLangue() const;
    string getGenre() const;
    date getDate_pub() const;
    string getisbn() const;
    vector<string> getListEmprunts() const;
    bool getisAvalaible(){return this->isAvalaible;}


    //setters
    void setTitre(const std::string& titre);
    void setAuteur(const class auteur& auteur);
    void setLangue(Langue langue);
    void setGenre(const std::string& genre);
    void setDate_pub(const date& date_pub);
    void setIsbn(const std::string& isbn);
    void setListEmprunts(const std::vector<std::string>& listEmprunts);
    void setisAvailable(bool etat){this->isAvalaible=etat;}
    friend std::ostream& operator<<(std::ostream& os, const livre& livre);



private:
    string titre;
    auteur auteur;
    Langue langue;
    string genre;
    date date_pub;
    string isbn;
    vector<string> listemprunts;
     bool isAvalaible=true;


};


#endif // LIVRE_H
