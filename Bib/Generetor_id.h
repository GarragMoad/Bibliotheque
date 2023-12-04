#ifndef GENERETOR_ID_H
#define GENERETOR_ID_H

#include <chrono>
#include "entete.h">
class generator_id{
public:
    static std::string generateID() {
        // Utilisation d'un compteur statique
        static int counter = 0;

        // Ajouter une composante de timestamp pour plus d'unicité
        auto timestamp = std::chrono::high_resolution_clock::now().time_since_epoch().count();

        // Combiner le compteur et le timestamp pour obtenir un identifiant unique
        int uniqueID = static_cast<int>(timestamp) + counter++;

        return std::to_string(uniqueID);
    }
};

#endif // GENERETOR_ID_H
