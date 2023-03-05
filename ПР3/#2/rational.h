//
// Created by Господин on 05.03.2023.
//

#ifndef STUDY_RATIONAL_H
#define STUDY_RATIONAL_H


class rational {
    int a, b;
    bool exist;

public:
    rational();

    rational(int a1, int b1);

    void set(int a1, int b1);

    void show();
};


#endif //STUDY_RATIONAL_H
