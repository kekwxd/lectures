//
//  main.cpp
//  weekrecit3
//
//  Created by Mert Güngör on 10.10.2024.
//

#include <iostream>
using namespace std;
/*
int main() {
    int radius, radius2;
    int price, price2;
    
    cout << "Give me radius and price" << endl;
    cin >> radius >> price;
    float incperprice, incperprice2;
    cout << "Give me second radius and price" << endl;
    cin >> radius2 >> price2;
    radius = (radius*radius) * 3.14;
    radius2 = (radius2*radius2) * 3.14;
    incperprice = radius / price;
    incperprice2 = radius2 / price2;
    if (incperprice > incperprice2) {
        cout << "Best unit price is" << incperprice;
    
    }
    else {
        cout << "Best unit price is" << incperprice2;
    }
    
    return 0;
}

int main() {
    
    int number1, number2, number3;
    cout << "Give me 3 numbers: " << endl;
    cin >> number1 >> number2 >> number3;
    int sum1, sum2, sum3;
    sum1 = number1 + number2;
    sum2 = number1 + number3;
    sum3 = number2 + number3;
    bool baba = false;
    if (sum1 <= number3){
        baba = true;
    }
    if (sum2 <= number2){
        baba = true;
       
        
    }
    if (sum3 <= number1){
        baba = true;
    }
    if (baba){
        cout << "it cannot be triangle" << endl;
    }
        
    else {
        cout << "it can be triangle" << endl;
            
    }
    return 0;
    
    
}
*/

int main(){
    int salary;
    cout << "give me the salary : " << endl;
    cin >> salary;
    if (salary > 3000){
        salary = salary + (salary*0.025);
    }
    else if (salary > 2000){
        salary = salary + (salary*0.05);
        
    }
    else if (salary > 1000){
        salary = salary + (salary*0.1);
        
    }
    else if (salary >= 0){
        salary = salary + (salary*0.15);
        
    }
    cout << " Your raised salary is " << salary << "TL" << endl;
    
    return 0;
}
