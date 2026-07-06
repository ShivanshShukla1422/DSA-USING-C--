//variables 
#include <iostream>
using namespace std;

int main(){
    int a = 10;//interger data type takes 4 byte ,1byte=8bits 
    char b = 'A';//character data type takes 1 byte
    float c = 10.5;//float data type takes 4 byte
    bool d = true;//boolean data type takes 1 byte
    double e = 10.5;//double data type takes 8 byte
//these are datatypes primitives in c++ and they are used to store different types of data in variables



    cout << sizeof(a) << endl;// sizeof() is used to find the size of the variable in bytes
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    return 0;
}