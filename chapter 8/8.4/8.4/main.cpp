//
//  main.cpp
//  8.4
//
//  Created by 林惠铭 on 2020/4/2.
//  Copyright © 2020 林惠铭. All rights reserved.
//

class shape {
    public:
        virtual double area() = 0;
};

class square: public shape {
    protected:
        double H;
    public:
        square(double i) {
            H = i;
        }
        double area() {
            return H * H;
        }
};

class circle: public square {
    public:
        circle(double r): square(r) {}
        double area() {
            return H * H * 3.14159;
        }
};

class triangle: public square {
    protected:
        double W;
    public:
        triangle(double h, double w): square(h) {
            W = w;
        }
        double area() {
            return H * W * 0.5;
        }
};

class rectangle: public triangle {
    public:
        rectangle(double h, double w): triangle(h, w) {}
        double area() {
            return H * W;
        }
};

double total(shape * s[], int n) {
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += s[i]->area();
    }
    return sum;
}

#include <iostream>
using namespace std;

int main() {
    shape * s[5];
    s[0] = new square(4);
    s[1] = new triangle(3, 6);
    s[2] = new rectangle(3, 6);
    s[3] = new square(6);
    s[4] = new circle(10);

    for(int i = 0; i < 5; i++) {
        cout <<"s[" <<i <<"] = " <<s[i]->area() <<endl;
    }
    double sum = total(s, 5);
    cout <<"The total area is: " <<sum <<endl;
}

