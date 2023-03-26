//
// Created by Господин on 26.03.2023.
//

#ifndef STUDY_SEA_H
#define STUDY_SEA_H


#include "Ocean.h"
#include <iostream>

class Sea : public Ocean {
protected:
    Ocean *oceanParent;

public:
    Sea();

    Sea(std::string _name);

    Sea(std::string _name, Ocean *_oceanParent);

    Sea(std::string _name, int _depth, int _size);

    Sea(std::string _name, int _depth, int _size, Ocean *_oceanParent);

    friend std::ostream &operator<<(std::ostream &stream, Sea obj);

    void setParent(Ocean *_oceanParent);

    Ocean *getParent();

    std::string getType();
};


#endif //STUDY_SEA_H
