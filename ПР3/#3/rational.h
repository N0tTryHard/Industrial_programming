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

    int get_a();

    int get_b();

    rational operator=(rational A);

    rational operator++(int);

    rational operator+(rational B);

    friend rational operator-(rational A, rational B);
};

bool operator==(rational A, rational B);

rational operator>(rational A, rational B);


#endif //STUDY_RATIONAL_H
