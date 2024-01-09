#include <iostream>
using namespace std;

int main(){
    //c++ data type
    int number = 1; // integer = number in c++
    string word = "abcd"; // string = word in c++
    bool yesno = false; // Boolean = true / false statement ( 0 = false, 1 true)
    char single_char = 'x'; // character = can only store 1 letter, number, decimal ect.
    float decimal = 0.1234567; // float = storing decimal number up to 6/7 decimal digits
    double decimal_longer = 0.123456789101112; // double = storing decimal number up to 15 decimal number

    cout << number << " , " << word << " , " << yesno << " , " << single_char << " , " << decimal << " , " << decimal_longer << ".\n\n";

    //some simple but needed c++ things :

    // use \n for enter to the next line
    cout << "Robert : Hello world \n";
    // \" \" for double quote in a string
    cout << "Robert : \"Hello world\" \n";

    // \'\' for single quote in a string
    cout << "Robert : \'Hello world\' \n";

    // \\ for backlash in a string
    cout << "Robert : \\ hello world \\ \n";

    //mathematics operational in c++
    // use +,-,* and, / (also theres ++ and --)
    int y = 2;
    int z = 5;

    cout << y + z; // it adds the value of y to z
    cout << y - z; // it substract the value of y to z
    cout << y * z; // it multiple the value of y to z
    cout << y / z; // it divide the value of y to z
    cout << y++; // adds the y value by +1
    cout << z--; // decrease the value by 1

    // c++ comparison operators
    // == equals to
    // != not equals to
    // > greater than
    // >= greater equals to
    // < less than
    // <= less than equals to

}