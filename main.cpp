/*
 * created by Danil Kireev, PFUR NFI-201, 20.09.18, 09:00
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"

using namespace std;

/*
 * № 44
 * Дан целочисленный массив размера N.
 * Найти количество элементов, порядка k и
 *  их сумму (k=2, двузначные числа).
 */

int main() {
    cout << "нахождение количество длинны К элементов массива и их сумма" << endl;
    Q z;
    int res1, res2;
    z.user_input();
    z.print();
    res1 = z.search(&res2);
    cout << "количество эллементов заданого порядка = " << res1;
    cout << ", их сумма = " << res2;
    return 0;
}
