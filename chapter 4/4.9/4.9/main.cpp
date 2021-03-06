//
//  main.cpp
//  4.9
//
//  Created by 林惠铭 on 2020/3/21.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;
class Point {
    private:
        int X, Y;
    public:
        Point(int a = 0, int b = 0){
            X = a;
            Y = b;
            cout <<"Initializing" <<endl;
        }
        Point(const Point &p);
        int Getx(){
            return X;
        }
        int Gety(){
            return Y;
        }
        void Show(){
            cout <<"X = " <<X <<",Y = " <<Y <<endl;
        }
        ~Point(){
            cout <<"delete..." <<X <<"," <<Y <<endl;
        }
};
Point::Point(const Point &p){
    X = p.X;
    Y = p.Y;
    cout <<"Copy Initializing " <<endl;
}
void display(Point p){
    p.Show();
}
void disp(Point &p){
    p.Show();
}
Point fun(){
    Point A(101, 202);
    return A;
}
int main(){
    Point A(42, 35);

    Point B(A);
    Point C(58, 94);
    cout <<"called display(B)" <<endl;

    display(B);
    cout <<"Next..." <<endl;
    cout <<"called disp(B)" <<endl;
    disp(B);
    cout <<"call C = fun()" <<endl;

    C = fun();
    cout <<"called disp(C)" <<endl;
    disp(C);
    cout <<"out..." <<endl;
}

