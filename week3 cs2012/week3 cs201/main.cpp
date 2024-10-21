//
//  main.cpp
//  week3 cs201
//
//  Created by Mert Güngör on 8.10.2024.
//

#include <iostream>



using namespace std;
int main(){
    int yes, no;
    no = 0;
    cout<< "Welcome to the Restaurant Order Program!" << endl;
    
    cout << "Today we have Doner Kebab, French Fries, Ayran, and Baklava available." << endl;
    
    cout << "Do you want Doner Kebab? (1 for Yes, 0 for No): ";
    cin >> yes;
    if (yes == 1){
        cout << "How many Doner Kebabs do you want? ";
        cin >> yes;
        
        no = no + yes*200;
    
    }
    cout << "Do you want French Fries? (1 for Yes, 0 for No): ";
    cin >> yes;
    if (yes == 1){
        cout << "How many French Fries do you want? ";
        cin >> yes;
        
        no = no + yes*72;
    
    }
    cout << "Do you want Ayran? (1 for Yes, 0 for No): ";
    cin >> yes;
    if (yes == 1){
        cout << "How many Ayrans do you want? ";
        cin >> yes;
        
        no = no + yes*30;
    
    }
    cout << "Do you want Baklava? (1 for Yes, 0 for No): ";
    cin >> yes;
    if (yes == 1){
        cout << "How many Baklavas do you want? ";
        cin >> yes;
        
        no = no + yes*219;
    
    }
    
    cout << "Enter the amount of money you have: ";
    cin >> yes;
    if (yes >= no){
        yes -= no;
        
        cout << "Order successful! Your change is: " << yes << " TL" << endl;
        
        
        
        no = no + yes*219;
    
    }
    else{
        
        cout << "Unfortunately, you do not have enough money to complete this order." << endl;
    }
    cout << "Thank you for using the Restaurant Order Program!" << endl;
    return 0;
    
    
    
    
}



    

    
