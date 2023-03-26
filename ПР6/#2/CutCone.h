//
// Created by Господин on 26.03.2023.
//

#ifndef STUDY_CUTCONE_H
#define STUDY_CUTCONE_H


#include "Cone.h"
#include <iostream>

class CutCone : public Cone {
protected:
    double radius2;

public:
    CutCone();

    CutCone(double _radius, double _radius2, double _height);

    CutCone(double _x, double _y, double _z, double _radius, double _radius2, double _height);

    void Set(double _x, double _y, double _z, double _radius, double _radius2, double _height);

    void Print();

    double Area();

    double Volume();

    friend std::ostream &operator<<(std::ostream &stream, CutCone obj);

    friend std::istream &operator>>(std::istream &stream, CutCone &obj);

    bool operator>(CutCone cone);

    bool operator<(CutCone cone);

    bool operator<=(CutCone cone);

    bool operator>=(CutCone cone);

    bool operator==(CutCone cone);
};


#endif //STUDY_CUTCONE_H
