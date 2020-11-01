#include "header.h"
#include <string>
#include <iostream>
using namespace std;
float change(float a, char op, float b){
    if (op == '+'){
        return a+b;
    }
    else if (op == '-'){
        return a-b;
    }
}
float bind(string a, char opa, string b, char opb){
    // 3 params: size, position and what you want to insert for overload
    a.insert(0, 1, opa);
    b.insert(0,1,opb);
    float f = stof(a)+stof(b);
    return f;
}
char check(float f){
   char s;
   if (f>0){
       s='+';
   }
   else{
       s='-';
   }
   return s;
}