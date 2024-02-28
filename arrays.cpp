#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    //arrays - must be of the same data types
    string cars[] = {"Corvette", "Bently", "Ferrari"};

    cout << cars << endl; //0x7ffda45182c0 is an memory address
    
    //accessing individual element
    cout << cars[2] << endl;

    //update the elements
    cars[2] = "BMW";
    cout << cars[2] << endl;

    //displaying all elements
    for(int i=0; i < size_t(cars); i++){
        cout << cars[i] << endl;
    }




    return 0;
}