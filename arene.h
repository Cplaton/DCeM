/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arene.h
 * Author: clement
 *
 * Created on 8 mars 2016, 11:28
 */

#ifndef ARENE_H
#define ARENE_H



namespace arene{

    typedef enum _Distance{
            contact = 0.5,
            tres_proche = 2.0,
            proche = 5.0,
            a_portee_de_jet = 50.0,
            a_portee_arc_magie = 200.0,
            en_vue = 500.0,
        }Distance;
        
    class Obstacle {
        
    public:
        
        float position_x;
        float position_y;
        float position_z;
            
    };
    
    class Arene {
        
        float width;
        float lenght;
        float height;
            
    };
}
#endif /* ARENE_H */

