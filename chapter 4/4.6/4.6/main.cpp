//
//  main.cpp
//  4.6
//
//  Created by 林惠铭 on 2020/3/21.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
using namespace std;

class Point {
    private:
        int x,y;
    public:
        Point();
        Point(int, int);
};

Point::Point():x(0),y(0){
    cout <<"Initializing default" <<endl;
}
Point::Point(int a, int b):x(a),y(b){
    cout <<"Initializing " <<a <<"," <<b <<endl;
}

int main(){
    Point *ptr1 = new Point;
    Point *ptr2 = new Point(5, 7);
    delete ptr1;
    delete ptr2;
}

