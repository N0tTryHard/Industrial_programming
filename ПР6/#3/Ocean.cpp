//
// Created by Господин on 26.03.2023.
//

#include "Ocean.h"
#include <iostream>

Ocean::Ocean() {
    name = "*none*";
    depth = size = 0;
}

Ocean::Ocean(std::string _name) {
    name = _name;
    depth = size = 0;
}

Ocean::Ocean(std::string _name, int _depth, int _size) {
    name = _name;
    depth = _depth;
    size = _size;
}


std::ostream &operator<<(std::ostream &stream, Ocean obj) {
    stream << "Тип водоема: " << obj.getType() << '\n';
    stream << "Название: " << obj.name << '\n';
    stream << "Глубина (м): " << obj.depth << "\n";
    stream << "Размер (кв км): " << obj.size << "\n";
    return stream;
}


std::string Ocean::getName() {
    return name;
}

std::string Ocean::getType() {
    return "Ocean";
}
