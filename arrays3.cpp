#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
   //program for swapping two variables
   int a = 20;
   int b = 10;

    //method 1
   int temp = a;
   a = b;
   b= temp;
   cout << "a :" << a << endl;
   cout << "b: " << b  << endl;

   //solving without using a third variable
   int c = 20;
   int d = 10;

   c = c + d; //30
   d = c- d; //20
   c = c - d; //10



    return 0;
}