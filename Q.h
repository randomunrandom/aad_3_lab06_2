//
// Created by danai on 9/20/18.
//

#include <iostream>
using namespace std;
#ifndef AAD_3_LAB06_2_Q_H
#define AAD_3_LAB06_2_Q_H


class Q {
private:
    int n, *a;
public:
    Q();
    Q(int nn);
    Q(int nn, int *aa);

    void user_input();
    void print();
    int search(int* ans2);
};


#endif //AAD_3_LAB06_2_Q_H
