TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        auteur.cpp \
        bibliotheque.cpp \
        date.cpp \
        emprunt.cpp \
        lecteur.cpp \
        livre.cpp \
        main.cpp

HEADERS += \
    Generetor_id.h \
    auteur.h \
    bibliotheque.h \
    date.h \
    emprunt.h \
    entete.h \
    lecteur.h \
    livre.h
