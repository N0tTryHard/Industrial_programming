//
// Created by Господин on 26.03.2023.
//

#include "Sea.h"
#include <iostream>

Sea::Sea() {
    oceanParent = nullptr;
}

Sea::Sea(std::string _name) : Ocean(_name) {
    oceanParent = nullptr;
}

Sea::Sea(std::string _name, Ocean *_oceanParent) : Ocean(_name) {
    oceanParent = _oceanParent;
}

Sea::Sea(std::string _name, int _depth, int _size) : Ocean(_name, _depth, _size) {
    oceanParent = nullptr;
}

Sea::Sea(std::string _name, int _depth, int _size, Ocean *_oceanParent) : Ocean(_name, _depth, _size) {
    oceanParent = _oceanParent;
}


std::ostream &operator<<(std::ostream &stream, Sea obj) {
    stream << "Тип водоема: " << obj.getType() << '\n';
    stream << "Название: " << obj.name << '\n';
    std::string oceanParentName = (obj.oceanParent ? obj.oceanParent->getName() : "Внутреннее море");
    stream << "В каком океане находится: " << oceanParentName << '\n';
    stream << "Глубина (м): " << obj.depth << "\n";
    stream << "Размер (кв км): " << obj.size << "\n";
    return stream;
}


void Sea::setParent(Ocean *_oceanParent) {
    oceanParent = _oceanParent;
}


Ocean *Sea::getParent() {
    return oceanParent;
}

std::string Sea::getType() {
    return "Sea";
}
