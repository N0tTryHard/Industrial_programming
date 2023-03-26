//
// Created by Господин on 26.03.2023.
//

#ifndef STUDY_OCEAN_H
#define STUDY_OCEAN_H


#include <iostream>

class Ocean {
protected:
    std::string name;
    int depth, size;

public:
    Ocean();

    Ocean(std::string _name);

    Ocean(std::string _name, int _depth, int _size);

    friend std::ostream &operator<<(std::ostream &stream, Ocean obj);

    std::string getName();

    std::string getType();
};


#endif //STUDY_OCEAN_H
