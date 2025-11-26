#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double number = 45.32;

    int integerPart = floor(number);
    int fractionalPart = round((number - integerPart) * 100);

    cout << "Ціла частина: " << integerPart << endl;
    cout << "Дробова частина: " << fractionalPart << endl;

    cout << "Олена витратила " << integerPart << " гривень "
         << fractionalPart << " копійки на книжки, серед яких було "
         << integerPart << " підручників та "
         << fractionalPart << " журнали." << endl;

    return 0;
}
