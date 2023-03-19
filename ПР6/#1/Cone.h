//
// Created by Господин on 14.03.2023.
//

#ifndef STUDY_CONE_H
#define STUDY_CONE_H

class Cone {
    double x, y, z;

    double radius;
    double height;

public:
    Cone();

    Cone(double _radius, double _height);

    Cone(double _x, double _y, double _z, double _radius, double _height);

    void Set(double _x, double _y, double _z, double _radius, double _height);

    void Print();

    double Area();

    double Volume();
};


#endif //STUDY_CONE_H
