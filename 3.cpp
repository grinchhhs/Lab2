#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 7;

    cout << "привіт: a = " << a << ", b = " << b << "\n\n";

    int r1 = ++a + b--;
    cout << "1) ++a + b-- = " << r1 
         << "   (a = " << a << ", b = " << b << ")\n";

    int r2 = b++ / a--;
    cout << "2) b++ / a-- = " << r2
         << "   (a = " << a << ", b = " << b << ")\n";

    bool r3 = --b > a;
    cout << "3) --b > a = " << r3
         << "   (a = " << a << ", b = " << b << ")\n";

    bool r4 = a++ < ++b;
    cout << "4) a++ < ++b = " << r4
         << "   (a = " << a << ", b = " << b << ")\n";

    int r5 = b-- + a;
    cout << "5) b-- + a = " << r5
         << "   (a = " << a << ", b = " << b << ")\n";

    bool r6 = ++a >= --b;
    cout << "6) ++a >= --b = " << r6
         << "   (a = " << a << ", b = " << b << ")\n";

    return 0;
}