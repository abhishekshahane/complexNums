#include <iostream>
#include <string>
#include "header.h"
using namespace std;
// Making a new struct for our complex numbers
typedef struct 
{
    float a;
    char g;
    string b;
}
each;

int main(){
    each a;
    each b;
    cout << "Hello! Enter your complex numbers as prompted. If you want to enter only a complex number, enter it like so: 0 + [your complex number]" << endl;
    cout << "Enter your first complex number: " << endl;
    cin >> a.a >> a.g>> a.b;
    a.b.erase(a.b.length()-1,a.b.length());
    if (a.b.at(0) == a.g){
        a.g = '+';
        a.b.erase(0,1);
    }
    else if (a.b.at(0) != '+' or a.b.at(0)!='-'){}
    else{
        a.g = '-';
        a.b.erase(0, 1);
    }
    float e = stof(a.b);
    cout << "Enter your second complex number: " << endl;
    cin >> b.a >> b.g>> b.b;
    b.b.erase(b.b.length()-1,b.b.length());
    if (b.b.at(0) == b.g){
        b.g = '+';
        b.b.erase(0,1);
    }
    else if (b.b.at(0) != '+' or b.b.at(0)!='-'){}
    else{
        b.g = '-';
        b.b.erase(0, 1);
    }
    float f = stof(b.b);
    cout << "We got: "<< a.a+b.a <<" "<< check(f) << " " << bind(a.b, a.g, b.b, b.g) << 'i'<< endl;


}