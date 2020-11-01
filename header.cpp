#include "header.h"
#include <string>
#include <iostream>
using namespace std;
int change(int a, char op, int b){
    if (op == '+'){
        return a+b;
    }
    else if (op == '-'){
        return a-b;
    }
}
int bind(string a, char opa, string b, char opb){
    // 3 params: size, position and what you want to insert for overload
    a.insert(0, 1, opa);
    b.insert(0,1,opb);
    int f = stoi(a)+stoi(b);
    return f;
}
char check(int f){
   char s;
   if (f>0){
       s='+';
   }
   else{
       s='-';
   }
   return s;
}