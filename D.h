/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   D.h
 * Author: clement
 *
 * Created on 4 mars 2016, 09:26
 */

#ifndef D_H
#define D_H

#include <cstdlib>
#include <iostream>
#include <ctime>

inline int get_time(void) {
    int in;
    #ifndef CLOCK_REALTIME
        struct timeval tv = {0};
        gettimeofday(&tv, NULL);
        in = (int) tv.tv_usec * 1000;
    #else
        struct timespec ts = {0};
        clock_gettime(CLOCK_REALTIME, &ts);
        in = (int) ts.tv_nsec;
    #endif
        return in;
}

int D4(){
    std::srand(get_time());
    return std::rand() % 4 + 1;
}

int D6(){
    std::srand(get_time());
    return std::rand() % 6 + 1;
}

int D8(){
    std::srand(get_time());
    return std::rand() % 8 + 1;
}

int D10(){
    std::srand(get_time());
    return std::rand() % 10 + 1;
}

int D12(){
    std::srand(get_time());
    return std::rand() % 12 + 1;
}

int D20(){
    std::srand(get_time());
    return std::rand() % 20 + 1;
}

int D100(){
    std::srand(get_time());
    return std::rand() % 100 + 1;
}

#endif /* D_H */

