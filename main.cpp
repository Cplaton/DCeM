/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: clement
 *
 * Created on 4 mars 2016, 09:22
 */


#include "perso.h"

using namespace std;
using namespace perso;

/*
 * 
 */
int main(int argc, char** argv) {
   
    Perso* equipe[5];
    equipe[0]=new Perso(amphibien,tank,"jerk","le fonsdé des mers");
    equipe[1]=new Perso(oiseau,mage,"Nico","le vieux");
    equipe[2]=new Perso(amphibien,equilibre,"Olivier","le borgne");
    equipe[3]=new Perso(ork,marchand,"Gruck","le lapin");
    equipe[4]=new Perso(lapin,equilibre,"Gui","l'autre gars");
    
    for(int i=0; i<5; i++){
        equipe[i]->level_up(5);
    }
    
    for(int i=0;i<5;i++){
        equipe[i]->print_cara();
    }
    return 0;
}

