/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Instructor.h
 * Author: ESCINF
 *
 * Created on 4 de octubre de 2019, 9:02
 */

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Persona.h"
class Instructor : public Persona {
private:

public:
    Instructor();
    ~Instructor();
    std::string toString();
    

};

#endif /* INSTRUCTOR_H */

