//
//  main.cpp
//  7.4
//
//  Created by 林惠铭 on 2020/3/31.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Point {
        int x, y;
    public:
        Point(int a, int b) {
            x = a;
            y = b;
        }
        void display() {
            cout <<x <<"," <<y <<endl;
        }
};
template <typename T>
class Line:public Point {
        T x2, y2;
    public:
        Line(int a, int b, T c, T d): Point(a, b) {
            x2 = c;
            y2 = d;
        }
        void display() {
            Point::display();
            cout <<x2 <<"," <<y2 <<endl;
        }
};
int main() {
    Point a(3, 8);
    a.display();
    Line <int>ab(4, 5, 6, 7);
    ab.display();
    Line <double>ad(4, 5, 6.5, 7.8);
    ad.display();
}
