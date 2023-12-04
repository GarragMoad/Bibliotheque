#include "bibliotheque.h"
#include <algorithm>
bibliotheque::bibliotheque()
{

}
vector<livre> bibliotheque:: getLivres(){
    return this->livres;
}
vector<Lecteur> bibliotheque::getlecteurs(){
    return this->lecteurs;
}
vector<auteur> bibliotheque::getauteurs(){
    return this->auteurs;
}

void bibliotheque:: ajoutAuteur(const auteur& a){
    this->auteurs.push_back(a);
}
void bibliotheque:: ajoutLecteur(const Lecteur& a){
    this->lecteurs.push_back(a);
}
void bibliotheque:: ajoutLivre(const livre& l){
    this->livres.push_back(l);
}

void bibliotheque:: emprunter(Lecteur lecteur , livre livre){

    if(livre.getisAvalaible()){
        livre.setisAvailable(false);
        lecteur.emprunterLivre(livre.getisbn());
    }
    else{
        cout<<"livre indisponivle pour le moment" << endl;
    }
}

void bibliotheque:: restituer(Lecteur lecteur , livre livre){
    auto it =find(lecteur.getListeLivresEmpruntes().begin(),lecteur.getListeLivresEmpruntes().end(),livre.getisbn());
    if(it != lecteur.getListeLivresEmpruntes().end() && livre.getisAvalaible()==false){
        livre.setisAvailable(true);
    }
    else{
        cout << "vous n'avez pas emprunter ce livre" << endl;
    }

}
