#include <iostream>
#include <string>

using namespace std;

int main(){

    float monthlySaving[6]; // = {100, 234,256,432,239,345};
     
    float total;
    for(int i=0; i < 5; i++){
        cout << "Enter amount for month " << i + 1 << endl;
        cin >> monthlySaving[i];
        cin.ignore();
        total +=monthlySaving[i];
    }
    
    float avg = total / 6;
    float twoYears = avg * 24;

   cout << "Your total is: " <<total << endl;
   cout << "Your average monthly savint is: "<<avg << endl;
   cout << "In two years, you will save: " << twoYears<< endl;

    return 0;
}