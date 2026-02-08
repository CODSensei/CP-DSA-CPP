#include<bits/stdc++.h>

struct rectangle {
    int length;
    int breadth;
};

struct complex {
    int real;
    int imag;
};

struct student {
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};

struct card {
    int face;
    int shape;
    int color;
};

int main() {
    
    struct rectangle r1; // declaration
    struct rectangle r2 = {10,20}; // declaration and initialisation

    rectangle rectangle;
    rectangle.length = 20;
    rectangle.breadth = 10;
    cout << rectangle.length * rectangle.breadth << endl;

    return 0;
}
