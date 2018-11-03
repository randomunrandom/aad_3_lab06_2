//
// Created by danai on 9/20/18.
//

#include "Q.h"

Q::Q() {
    n=0;
    a=new int[n];
}

Q::Q(int nn) {
    n=nn;
    a=new int[n];
}

Q::Q(int nn, int *aa) {
    n=nn;
    a=new int[n];
    for (int i = 0; i < n; ++i) a[i]=aa[i];
}

void Q::user_input() {
    cout << "введите размер массива : ";
    cin >> n;
    while(n <= 0) {
        cout << "введите положительное число : ";
        cin >> n;
    }
    a = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "введите " << i << " элемент: ";
        cin >> a[i];
    }
}

int Q::search(int *ans2) {
    int ans1=0, k;
    cout << "введите число K : ";
    cin >> k;
    while(k <= 0) {
        cout << "введите положительное число : ";
        cin >> k;
    }
    for (int i = 0; i < n; ++i) if(to_string(abs(a[i])).length() == k) {
            ans1++;
            *ans2+=a[i];
        }

    return ans1;
}

void Q::print() {
    cout << "массив размера " << n << endl;
    cout << "[";
    for (int i = 0; i < n-1; ++i) cout << a[i] << ", ";
    cout << a[n-1] << "]" << endl;
}
