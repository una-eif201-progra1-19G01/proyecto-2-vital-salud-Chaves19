/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Medicion.h
 * Author: achaq
 *
 * Created on October 24, 2019, 7:46 PM
 */

#ifndef MEDICION_H
#define MEDICION_H

class Medicion{
private:
    float peso;
    float masaMuscular;
    float grasaCorporal;
public:
    Medicion();
    Medicion(const Medicion& orig);
    virtual ~Medicion();
    void Medicion::setGrasaCorporal(float);
    float getGrasaCorporal();
    void setMasaMuscular(float);
    float getMasaMuscular();
    void setPeso(float);
    float getPeso();
};

#endif /* MEDICION_H */

