#include <iostream>
using namespace std;

class car{
    public :
    string brand, model;
    int year;
};

int main(){
    car car1;
    car1.brand = "Toyota";
    car1.model = "Supra";
    car1.year = 2022;

    car car2;
    car2.brand = "ford";
    car2.model = "ranger";
    car2.year = 2002;

    cout << car1.brand << " " << car1.model << " " << car1.year << " \n\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << " \n\n";

    car car3 ;
    cout << "input your car brand : ";
    cin >> car3.brand;

    cout << car3.brand << "\n\n";
}