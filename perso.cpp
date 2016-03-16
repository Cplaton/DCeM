/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "D.h"
#include "perso.h"

using namespace std;
using namespace perso;

Perso::Perso(Race race, Classe classe, string nom, string surnom){
    
    int points_cara = D6()+D6()+D6();
    int cara_repartition;
    
    this->nom = nom;
    this->surnom = surnom;
    this->race = race;
    this->classe = classe;
    
    
    switch(race){
        case amphibien:
            this->vigueur=3;
            this->bagarre=2;
            this->adresse=0;
            this->instinct=3;
            this->seduction=0;
            this->baratin=0;
            this->volonte=2;
            break;

        case babare:
            this->vigueur=5;
            this->bagarre=2;
            this->adresse=-1;
            this->instinct=0;
            this->seduction=1;
            this->baratin=1;
            this->volonte=2;
            break;
            
        case capuchon:
            this->vigueur=2;
            this->bagarre=1;
            this->adresse=1;
            this->instinct=0;
            this->seduction=1;
            this->baratin=2;
            this->volonte=3;
            break;
            
        case chien:
            this->vigueur=2;
            this->bagarre=2;
            this->adresse=2;
            this->instinct=2;
            this->seduction=0;
            this->baratin=2;
            this->volonte=0;
            break;
    
        case gobelin:
            this->vigueur=1;
            this->bagarre=3;
            this->adresse=1;
            this->instinct=3;
            this->seduction=0;
            this->baratin=1;
            this->volonte=1;
            break;
        
        case olf:
            this->vigueur=1;
            this->bagarre=3;
            this->adresse=1;
            this->instinct=3;
            this->seduction=0;
            this->baratin=1;
            this->volonte=1;
            break;
    
        case kochaque:
            this->vigueur=2;
            this->bagarre=1;
            this->adresse=2;
            this->instinct=2;
            this->seduction=1;
            this->baratin=0;
            this->volonte=2;
            break;
            
        case lapin:
            this->vigueur=0;
            this->bagarre=0;
            this->adresse=2;
            this->instinct=2;
            this->seduction=2;
            this->baratin=3;
            this->volonte=1;
            break;
            
        case lapin_rouge:
            this->vigueur=1;
            this->bagarre=1;
            this->adresse=2;
            this->instinct=2;
            this->seduction=0;
            this->baratin=2;
            this->volonte=2;
            break;
            
        case oiseau:
            this->vigueur=2;
            this->bagarre=2;
            this->adresse=1;
            this->instinct=0;
            this->seduction=2;
            this->baratin=1;
            this->volonte=2;
            break;
    
        case saurien:
            this->vigueur=3;
            this->bagarre=2;
            this->adresse=1;
            this->instinct=0;
            this->seduction=2;
            this->baratin=-1;
            this->volonte=3;
            break;
            
        case ork:
            this->vigueur=3;
            this->bagarre=3;
            this->adresse=1;
            this->instinct=0;
            this->seduction=0;
            this->baratin=0;
            this->volonte=3;
            break;
            
        default:
            this->vigueur=2;
            this->bagarre=2;
            this->adresse=1;
            this->instinct=2;
            this->seduction=1;
            this->baratin=1;
            this->volonte=1;
            break;
    }
    
    switch(classe){
        
        case tank:
            this->proba_vigueur=45;
            this->proba_bagarre=45;
            this->proba_adresse=2;
            this->proba_instinct=2;
            this->proba_volonte=2;
            this->proba_seduction=2;
            this->proba_baratin=2;
            break;
        
        case mage:
            this->proba_vigueur=2;
            this->proba_bagarre=2;
            this->proba_adresse=2;
            this->proba_instinct=20;
            this->proba_volonte=45;
            this->proba_seduction=25;
            this->proba_baratin=2;
            break;
            
        case voleur:
            this->proba_vigueur=2;
            this->proba_bagarre=4;
            this->proba_adresse=26;
            this->proba_instinct=26;
            this->proba_volonte=2;
            this->proba_seduction=20;
            this->proba_baratin=20;
            break;
            
        case marchand:
            this->proba_vigueur=2;
            this->proba_bagarre=2;
            this->proba_adresse=2;
            this->proba_instinct=9;
            this->proba_volonte=5;
            this->proba_seduction=40;
            this->proba_baratin=40;
            break;
           
        case mage_de_combat:
            this->proba_vigueur=30;
            this->proba_bagarre=30;
            this->proba_adresse=2;
            this->proba_instinct=3;
            this->proba_volonte=30;
            this->proba_seduction=3;
            this->proba_baratin=2;
            break;
            
        case assassin:
            this->proba_vigueur=10;
            this->proba_bagarre=15;
            this->proba_adresse=35;
            this->proba_instinct=35;
            this->proba_volonte=2;
            this->proba_seduction=2;
            this->proba_baratin=1;
            break;
            
        case equilibre:
            this->proba_vigueur=25;
            this->proba_bagarre=20;
            this->proba_adresse=11;
            this->proba_instinct=11;
            this->proba_volonte=11;
            this->proba_seduction=11;
            this->proba_baratin=11;
            break;          
    }
    
    typedef tuple<int *,int *,string> pair;
    vector <pair> my_competences;
    
    my_competences.push_back(pair(&this->adresse,&this->proba_adresse,"adresse"));
    my_competences.push_back(pair(&this->bagarre,&this->proba_bagarre,"bagarre"));
    my_competences.push_back(pair(&this->baratin,&this->proba_baratin,"baratin"));
    my_competences.push_back(pair(&this->instinct,&this->proba_instinct,"instinct"));
    my_competences.push_back(pair(&this->seduction,&this->proba_seduction,"seduction"));
    my_competences.push_back(pair(&this->vigueur,&this->proba_vigueur,"vigueur"));
    my_competences.push_back(pair(&this->volonte,&this->proba_volonte,"volonte"));
    
    int palier_1=this->proba_vigueur,
            palier_2=palier_1+this->proba_bagarre,
            palier_3=palier_2+this->proba_adresse,
            palier_4=palier_3+this->proba_instinct,
            palier_5=palier_4+this->seduction,
            palier_6=palier_5+this->proba_volonte;
    
    
    bool not_enought_point=false;
    while(points_cara>0){
            cara_repartition=D100();
            not_enought_point=false;
            if(cara_repartition<=palier_1){
                if(points_cara>=(int)(this->vigueur/6)+1){
                    points_cara-=(int)(this->vigueur/6)+1;
                    this->vigueur++;
                }else{
                    not_enought_point=true;
                }
            }else if(cara_repartition>palier_1 && cara_repartition<=palier_2){
                if(points_cara>=(int)(this->bagarre/6)+1){
                    points_cara-=(int)(this->bagarre/6)+1;
                    this->bagarre++;
                }else{
                    not_enought_point=true;
                }
            }else if(cara_repartition>palier_2 && cara_repartition<=palier_3){
                if(points_cara>=(int)(this->adresse/6)+1){
                    points_cara-=(int)(this->adresse/6)+1;
                    this->adresse++;
                }else{
                    not_enought_point=true;
                }
            }else if(cara_repartition>palier_3 && cara_repartition<=palier_4){
                if(points_cara>=(int)(this->instinct/6)+1){
                    points_cara-=(int)(this->instinct/6)+1;
                    this->instinct++;
                }else{
                    not_enought_point=true;
                }
            }else if(cara_repartition>palier_4 && cara_repartition<=palier_5){
                if(points_cara>=(int)(this->seduction/6)+1){
                    points_cara-=(int)(this->seduction/6)+1;
                    this->seduction++;
                }else{
                    not_enought_point=true;
                }
            }else if(cara_repartition>palier_5 && cara_repartition<=palier_6){
                if(points_cara>=(int)(this->volonte/6)+1){
                    points_cara-=(int)(this->volonte/6)+1;
                    this->volonte++;
                }else{
                    not_enought_point=true;
                }
            }else if(cara_repartition>palier_6 && cara_repartition<=100){
                if(points_cara>=(int)(this->baratin/6)+1){
                    points_cara-=(int)(this->baratin/6)+1;
                    this->baratin++;
                }else{
                    not_enought_point=true;
                }
            }       
            if(not_enought_point){
                
                sort(my_competences.begin(),my_competences.end(),compare_competences_proba);
                
                for(auto &i : my_competences){
                    
                    if(((int)(*get<0>(i)-1)/5)+1<=points_cara){
                        *get<0>(i)=*get<0>(i)+1;
                        points_cara-=(int)(*get<0>(i)/6)+1;
                        not_enought_point=false;
                        break;
                    }
                }
                (not_enought_point)?points_cara=0:points_cara;     
            }
            
    }
    
    this->sante_max=this->sante=10+3*this->vigueur;
    this->magie_max=this->magie=this->volonte+this->seduction;
    this->niveau=1;
}

void Perso::print_cara(){
    cout << "**********************************************\n";
    cout << "* Personnage : " << this->nom << " dit '" << this->surnom <<"' de niveau " << this->niveau << endl;
    cout << "*\n";
    cout << "* Vigueur : " << this->vigueur << "\t" << "Volonté : " << this->volonte << endl;
    cout << "* Bagarre : " << this->bagarre << "\t" << "Seduction : " << this->seduction << endl;
    cout << "* Adresse : " << this->adresse << "\t" << "Baratin : " << this->baratin << endl;
    cout << "* Instinct : " << this->instinct << endl;
    cout << "*\n";
    cout << "* PV : " << this->sante_max << "\t" << "PM : " << this->magie_max << endl;
     cout << "*\n";
    cout << "**********************************************\n\n";
}

void Perso::level_up(uint nb_niveau){
    
    int points_cara ;
    int cara_repartition;
    
    for (int i=0; i<nb_niveau; i++){
        points_cara = D6();
        switch(this->classe){

            case tank:
                this->proba_vigueur=45;
                this->proba_bagarre=45;
                this->proba_adresse=2;
                this->proba_instinct=2;
                this->proba_volonte=2;
                this->proba_seduction=2;
                this->proba_baratin=2;
                break;

            case mage:
                this->proba_vigueur=2;
                this->proba_bagarre=2;
                this->proba_adresse=2;
                this->proba_instinct=20;
                this->proba_volonte=45;
                this->proba_seduction=25;
                this->proba_baratin=2;
                break;

            case voleur:
                this->proba_vigueur=2;
                this->proba_bagarre=4;
                this->proba_adresse=26;
                this->proba_instinct=26;
                this->proba_volonte=2;
                this->proba_seduction=20;
                this->proba_baratin=20;
                break;

            case marchand:
                this->proba_vigueur=2;
                this->proba_bagarre=2;
                this->proba_adresse=2;
                this->proba_instinct=9;
                this->proba_volonte=5;
                this->proba_seduction=40;
                this->proba_baratin=40;
                break;

            case mage_de_combat:
                this->proba_vigueur=30;
                this->proba_bagarre=30;
                this->proba_adresse=2;
                this->proba_instinct=3;
                this->proba_volonte=30;
                this->proba_seduction=3;
                this->proba_baratin=2;
                break;

            case assassin:
                this->proba_vigueur=10;
                this->proba_bagarre=15;
                this->proba_adresse=35;
                this->proba_instinct=35;
                this->proba_volonte=2;
                this->proba_seduction=2;
                this->proba_baratin=1;
                break;

            case equilibre:
                this->proba_vigueur=25;
                this->proba_bagarre=20;
                this->proba_adresse=11;
                this->proba_instinct=11;
                this->proba_volonte=11;
                this->proba_seduction=11;
                this->proba_baratin=11;
                break;          
        }

        int palier_1=this->proba_vigueur,
                palier_2=palier_1+this->proba_bagarre,
                palier_3=palier_2+this->proba_adresse,
                palier_4=palier_3+this->proba_instinct,
                palier_5=palier_4+this->seduction,
                palier_6=palier_5+this->proba_volonte;

        typedef tuple<int *,int *,string> pair;
        vector <pair> my_competences;

        my_competences.push_back(pair(&this->adresse,&this->proba_adresse,"adresse"));
        my_competences.push_back(pair(&this->bagarre,&this->proba_bagarre,"bagarre"));
        my_competences.push_back(pair(&this->baratin,&this->proba_baratin,"baratin"));
        my_competences.push_back(pair(&this->instinct,&this->proba_instinct,"instinct"));
        my_competences.push_back(pair(&this->seduction,&this->proba_seduction,"seduction"));
        my_competences.push_back(pair(&this->vigueur,&this->proba_vigueur,"vigueur"));
        my_competences.push_back(pair(&this->volonte,&this->proba_volonte,"volonte"));


        bool not_enought_point=false;
        while(points_cara>0){
                cara_repartition=D100();
                not_enought_point=false;
                if(cara_repartition<=palier_1){
                    if(points_cara>=(int)(this->vigueur/6)+1){
                        points_cara-=(int)(this->vigueur/6)+1;
                        this->vigueur++;
                    }else{
                        not_enought_point=true;
                    }
                }else if(cara_repartition>palier_1 && cara_repartition<=palier_2){
                    if(points_cara>=(int)(this->bagarre/6)+1){
                        points_cara-=(int)(this->bagarre/6)+1;
                        this->bagarre++;
                    }else{
                        not_enought_point=true;
                    }
                }else if(cara_repartition>palier_2 && cara_repartition<=palier_3){
                    if(points_cara>=(int)(this->adresse/6)+1){
                        points_cara-=(int)(this->adresse/6)+1;
                        this->adresse++;
                    }else{
                        not_enought_point=true;
                    }
                }else if(cara_repartition>palier_3 && cara_repartition<=palier_4){
                    if(points_cara>=(int)(this->instinct/6)+1){
                        points_cara-=(int)(this->instinct/6)+1;
                        this->instinct++;
                    }else{
                        not_enought_point=true;
                    }
                }else if(cara_repartition>palier_4 && cara_repartition<=palier_5){
                    if(points_cara>=(int)(this->seduction/6)+1){
                        points_cara-=(int)(this->seduction/6)+1;
                        this->seduction++;
                    }else{
                        not_enought_point=true;
                    }
                }else if(cara_repartition>palier_5 && cara_repartition<=palier_6){
                    if(points_cara>=(int)(this->volonte/6)+1){
                        points_cara-=(int)(this->volonte/6)+1;
                        this->volonte++;
                    }else{
                        not_enought_point=true;
                    }
                }else if(cara_repartition>palier_6 && cara_repartition<=100){
                    if(points_cara>=(int)(this->baratin/6)+1){
                        points_cara-=(int)(this->baratin/6)+1;
                        this->baratin++;
                    }else{
                        not_enought_point=true;
                    }
                }       
                if(not_enought_point){

                    sort(my_competences.begin(),my_competences.end(),compare_competences_proba);

                    for(auto &i : my_competences){

                        if(((int)(*get<0>(i)-1)/5)+1<=points_cara){
                            *get<0>(i)=*get<0>(i)+1;
                            points_cara-=(int)(*get<0>(i)/6)+1;
                            not_enought_point=false;
                            break;
                        }
                    }
                    (not_enought_point)?points_cara=0:points_cara;     
                }

        }
        this->sante_max=this->sante=10+3*this->vigueur;
        this->magie_max=this->magie=this->volonte+this->seduction;
    }
    this->niveau+=nb_niveau;
}