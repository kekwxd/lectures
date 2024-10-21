//
//  main.cpp
//  week 5
//
//  Created by Mert Güngör on 21.10.2024.
//


// MATH LİBRARY AND  CLASSES


#include <iostream>
using namespace std;
#include <cmath>
/*

int main() {
    // insert code here..
    
    cout << abs(-1) << endl;
    
    cout << sqrt(6) << endl;
    cout << sqrt(9) << endl;
    cout << pow(3, 2) << endl;
    
    return 0;
}

int main(){
    string s = "hello";
    int len = s.length();
    cout << len;
    string t = "theater";
    int lenn = t.length();
    string r = s.substr(0, 3); // the
    r = s.substr(1, 4); // is now heat
    t = s.substr(3 ,3); // t is ate r is still heat
    t = s.substr(2);
    
    
}
         
*/
int main(){
    string s = "I am the eggman he is too";
    int k = s.find("I"); // k is 0
    k = s.find("he"); // k is 6
    k = s.find("egg"); // k is 9
    k = s.rfind("he"); // k is 17
    cout << s.find("cat"); // output is 4294...
}
