#include "bibliotheque.h"
#include "lecteur.h"
#include <iostream>

using namespace std;
#include "date.h"
#include<string>
#include "livre.h"
#include "Generetor_id.h"
#include <vector>
#include "auteur.h"
#include <random>
#include "lecteur.h"

int main()
{
    const int nombreAuteurs = 5;
    const int nombreLivresParAuteur = 3;
    const int nombreLecteurs = 3;
    generator_id generate_code;

    std::vector<auteur> auteurs;
    std::vector<livre> livres;
    std::vector<Lecteur>lecteurs;

    for (int i = 0; i < nombreAuteurs; ++i) {
            std::string codeUniqueAuteur = generate_code.generateID();
            date dateAuteur(1, 1, 1955);
            auteur auteur(codeUniqueAuteur, "NomAuteur" + std::to_string(i), "PrenomAuteur" + std::to_string(i), dateAuteur);
            auteurs.push_back(auteur);
            for (int j = 0; j < nombreLivresParAuteur; ++j) {
                        Langue langue =anglais;
                        std::string codeUniqueLivre = generate_code.generateID();
                        std::vector<std::string> emprunts;

                        livre livre("TitreLivre" + std::to_string(i * nombreLivresParAuteur + j), auteur, langue, "GenreLivre" + std::to_string(j), dateAuteur, codeUniqueLivre, emprunts);
                        livres.push_back(livre);
                    }
    }
    for (int i = 0; i < nombreLecteurs; ++i) {
        string code = generate_code.generateID();
        Lecteur lecteur(code,"Nom"+to_string(i),"Prenom"+to_string(i));
        lecteurs.push_back(lecteur);
    }
    // Affichage des auteurs
        for (const auto& auteur : auteurs) {
            std::cout << "Auteur : " << auteur << std::endl;
        }

        // Affichage des livres
        for (const auto& livre : livres) {
            std::cout << "Livre : " << livre << std::endl;
        }
        for (const auto& lecteur : lecteurs) {
               std::cout << "Lecteur : " << lecteur << std::endl;
           }
    bibliotheque bibliotheque;




    return 0;
}
