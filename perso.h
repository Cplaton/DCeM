/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   perso.h
 * Author: clement
 *
 * Created on 4 mars 2016, 09:30
 */

#ifndef PERSO_H
#define PERSO_H

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <tuple>
#include <vector>
#include <algorithm>

namespace perso{
    
    //Classes de personnage (peut être étendu en classe C++)
    typedef enum _Classe{
        tank,
        mage,
        voleur,
        marchand,
        equilibre,
        mage_de_combat,
        assassin
    }Classe; 

    //Races de personnage (peut être étendu en classe C++)
    typedef enum _Race{
        amphibien,
        babare,
        ork,
        capuchon,
        chien,
        gobelin,
        olf,
        kochaque,
        lapin,
        lapin_rouge,
        oiseau,
        saurien
    }Race;    
        
    //seuil de difficulté
    typedef enum _Difficulte{
        hyper_facile = 5,
        facile = 10,
        normal = 15,
        coton = 20,
        complexe = 25,
        difficile = 30,
        epique = 35
    }Difficulte;
        
    //compétences du personnage en nombre de D6
    typedef enum _Talent{
        pas_doue = 1,
        notions = 2,
        ok = 3,
        habile = 4,
        bon = 5,
        fortiche = 6,
        hyper_baleze = 7
    }Talent;
    
    inline bool compare_competences_proba (std::tuple<int *,int *,std::string> i, std::tuple<int *,int *,std::string> j) { return (*std::get<1>(i)>*std::get<1>(j)); }
    
    class Perso{

    public:

        std::string nom;
        std::string surnom;
        
        Race race;
        Classe classe;

        Perso(Race race, Classe classe, std::string nom, std::string surnom);  
        ~Perso();
        
        void print_cara();
        void level_up(uint nb_niveau);
        
        int jet_initiative();
        int jet_bagarre();
        int jet_adresse();
        int jet_instinct();
        int jet_volonte();
        int jet_baratin();
        int jet_seduction();


        void SetMagie(int magie) {
            this->magie = magie;
        }

        int GetMagie() const {
            return magie;
        }

        void SetSante(int sante) {
            this->sante = sante;
        }

        int GetSante() const {
            return sante;
        }

        int GetArmure() const {
            return armure;
        }

        int GetMagie_max() const {
            return magie_max;
        }

        int GetSante_max() const {
            return sante_max;
        }

        int GetBaratin() const {
            return baratin;
        }

        int GetSeduction() const {
            return seduction;
        }

        int GetVolonte() const {
            return volonte;
        }

        int GetInstinct() const {
            return instinct;
        }

        int GetAdresse() const {
            return adresse;
        }

        int GetBagarre() const {
            return bagarre;
        }

        int GetVigueur() const {
            return vigueur;
        }
        
        int GetNiveau() const {
            return niveau;
        }

    private:
        int    vigueur;
        int    bagarre;
        int    adresse;
        int    instinct;
        int    volonte;
        int    seduction;
        int    baratin;
        int    sante_max;
        int    magie_max;
        int    armure;
        int     sante;
        int     magie;
        int     niveau;

        int    proba_vigueur;
        int    proba_bagarre;
        int    proba_adresse;
        int    proba_instinct;
        int    proba_volonte;
        int    proba_seduction;
        int    proba_baratin;
        
        

    };
}


    #endif /* PERSO_H */

