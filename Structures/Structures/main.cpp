//
//  main.cpp
//  Structures
//
//  Created by BengaluruAppBrewery on 08/02/22.
//
#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle{  //definitio of structure, which will not consume any memory, its just a frame work of how structure should be
    int lenght; //4 bytes
    int breadth; //4  ytes
    char x;   //instead of taking 1 byte this takes 4 bytes and discard 3. It takes nearest greatest bytes of integer. This is called as padding
};
//struct Rectangle{
//    int lenght;
//    int breadth;
//} r1,r2,r3;      ----> can be declared this way also
//struct Rectangle r1, r2, r3;  ----> can be declared this way also

int main() {
    //struct Rectangle r1; //declaration of structure
    struct Rectangle r1 = {10,5};
    r1.lenght = 45;
    r1.breadth = 50;
    cout<<r1.lenght<<endl;
    cout<<r1.breadth<<endl;
    //printf("%lu \n", sizeof(r1)); //this shows total 12bytes
    return 0;
}
