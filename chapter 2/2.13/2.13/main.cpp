//
//  main.cpp
//  2.13
//
//  Created by 林惠铭 on 2020/3/15.
//  Copyright © 2020 林惠铭. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str[] = {"We are here!", "Where are you?", "welcome!"};
    for(int i = 0; i < 3; i++){
        copy(str[i].begin(), str[i].end(), ostream_iterator<char>(cout));
        cout <<endl;
    }
    str[0].swap(str[2]);
    str[0].swap(str[1]);
    for(int i = 0; i < 3; i++){
        cout <<str[i] <<endl;
    }
}
