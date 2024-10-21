/*
    This program demonstrates usage of void & parameterless functions.
    Main function prints ANA and ADANA to screen.
    A(),D(),N() functions prints corresponding letters.
*/

#include <iostream>
using namespace std;
/*
void A()
{
    cout << "  **" << endl;
    cout << " *  *" << endl;
    cout << "******" << endl;
    cout << "**  **" << endl;
    cout << "**  **" << endl;
    cout << endl;
}

void D()
{
    cout << "*****" << endl;
    cout << "**  **" << endl;
    cout << "**  **" << endl;
    cout << "**  **" << endl;
    cout << "*****" << endl;
    cout << endl;
}

void N()
{
    cout << "**  **" << endl;
    cout << "*** **" << endl;
    cout << "** ***" << endl;
    cout << "**  **" << endl;
    cout << "**  **" << endl;
    cout << endl;
}
void ADA(){
    A();
    D();
    A();
}
void ADANA(){
    ADA();
    N();
    A();
}
int main()
{
    ADA();
    cout << endl << endl;
    ADANA();

    return 0;
}
*/
/*
void promptUser(string object, string type) {
    cout << "Please enter the " << object << "of the pizza: " << endl;
}

double cost(string type) {
 double radius, price;
 promptUser("radius", type);
 cin >> radius;

 promptUser("price", type);
 cin >> price;
    
}
int main() {
 double smallCost, largeCost;
 smallCost = cost("small");
 largeCost = cost("large");

 cout << "cost of the small pizza = " << smallCost << "per sq. inc." << endl;
 cout << "cost of the large pizza = " << smallCost << "per sq. inc." << endl;
    
 if (smallCost < largeCost) {
     cout << "Small is the best value." << endl;
 }
 else {
     cout << "Large is the best value." << endl;
 }
 return 0;

}
*/

void printdate(int day, int month, int year){
    cout << day << "//" <<  month << "//" << year << endl;
    
    
}

void  printletter(string name, string surname, int day, int month, int year, int amount, double interest, int due_day, int due_month, int due_year){
    printdate(day, month, year);
    cout << endl;
    cout << "Dear" << name << surname << endl;
    cout << "Our records show balance of" << amount << "as of";
    printdate(day, month, year);
    cout << "in order to avoid any late penalty please pay your balance in full until";
    printdate(due_day, due_month, due_year);f
}
int main() {
    string name, surname;
    int day, month, year;
    int amount;
    double interest;
    
    cout << " Please enter a name: ";
    cin >> name >> surname;
    cout << " Enter month and year: ";
    cin  >> day >> month >> year;
    cout << "Amount and interest";
    cin >> amount >> interest;
    int due_day, due_month, due_year;
    due_day = day;
    due_month = (month % 12) + 1;
    due_year = year + (month / 12);
    
    
    return 0;
    
}


