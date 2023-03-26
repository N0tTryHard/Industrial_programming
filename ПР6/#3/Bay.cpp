//
// Created by Господин on 26.03.2023.
//

#include "Bay.h"
#include <iostream>

Bay::Bay() {
    seaParent = nullptr;
}

Bay::Bay(std::string _name) : Sea(_name) {
    seaParent = nullptr;
}

Bay::Bay(std::string _name, Sea *_seaParent) : Sea(_name) {
    seaParent = _seaParent;
}

Bay::Bay(std::string _name, int _depth, int _size) : Sea(_name, _depth, _size) {
    seaParent = nullptr;
}

Bay::Bay(std::string _name, int _depth, int _size, Sea *_seaParent) : Sea(_name, _depth, _size) {
    seaParent = _seaParent;
}

std::ostream &operator<<(std::ostream &stream, Bay obj) {
    stream << "Тип водоема: " << obj.getType() << '\n';
    stream << "Название: " << obj.name << '\n';

    if (obj.seaParent) {
        stream << "В каком море находится: " << obj.seaParent->getName() << '\n';

        std::string oceanParentName = (obj.seaParent->getParent() ? obj.seaParent->getParent()->getName()
                                                                  : "Ни в каком");∆
        stream << "В каком океане находится: " << oceanParentName << '\n';
    } else {
        stream << "Ни в каком";
    }

    stream << "Глубина (м): " << obj.depth << "\n";
    stream << "Размер (кв км) " << obj.size << "\n";

    return stream;
}


void Bay::setParent(Sea *_seaParent) {
    seaParent = _seaParent;
}


Sea *Bay::getParent() {
    return seaParent;
}

std::string Bay::getType() {
    return "Bay";
}
