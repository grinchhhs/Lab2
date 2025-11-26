#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a_f = 2000.0f;
    float b_f = 0.0002f;

    float diff_f = a_f - b_f;
    float sumSq_f = a_f * a_f + b_f * b_f;
    float denom_f = a_f * a_f * a_f - b_f * b_f * b_f;

    float result_f = (diff_f * sumSq_f) / denom_f;


    double a_d = 2000.0;
    double b_d = 0.0002;

    double diff_d = a_d - b_d;
    double sumSq_d = a_d * a_d + b_d * b_d;
    double denom_d = a_d * a_d * a_d - b_d * b_d * b_d;

    double result_d = (diff_d * sumSq_d) / denom_d;


    cout << "результат з float  = " << result_f << endl;
    cout << "результат з double = " << result_d << endl;

    return 0;
}
