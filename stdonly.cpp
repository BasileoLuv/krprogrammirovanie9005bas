#include <iostream>
using namespace std;
// Задание 1: 47/5
// Задание 2: 2_11
int stdwork() {

    //(342,12x^5 + 645,52x^4 – 765,92x) / (–9804x^32 + 4423,3x^16 - 8,7654x^8)
    //
    //
    // 342,12x^5 + 645,52x^4 – 765,92x =
    // x^4 (342,12x + 645,52) - 765,92x =
    // x ( x^3 *(342,12x + 645,52) - 765,92)



    cout << "введите число: ";
    double x;
    cin >> x;
    cout << x;

    // 342,12x + 645,52
    double part1 = 342.12 * x + 645.52;
    cout << "шаг 1: " << part1 << '\n';

    // x ^ 3 * part1
    double part2 = x * x * x * part1;
    cout << "шаг 2: " << part2 << '\n';

    double part3 = part2 - 765.92;
    cout << "шаг 3: " << part3 << '\n';

    double part4 = x * part3;
    cout << "шаг 4: " << part4 << '\n';

    cout << "Результат: " << part4;


    // 342,12x + 645,52
    double part5 = -9804 * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x + 4423.3;
    cout << "шаг 5: " << part5 << '\n';

    // ( x^8 * part5)
    double part6 = x * x * x * x * x * x * x * x * part5;
    cout << "шаг 6: " << part6 << '\n';

    double part7 = part6 - 8.7654;
    cout << "шаг 7: " << part7 << '\n';

    double part8 = x * x * x * x * x * x * x * x * part7;
    cout << "шаг 8: " << part8 << '\n';

    cout << "Результат: " << part8;

    double part9 = part4 / part8;

    cout << "шаг 9: " << part9 << '\n';

    cout << "Результат: " << part9;



    //
    //
    //(–9804x^32 + 4423,3x^16 - 8,7654x^8) =
    // = x^8 * (-9804x^24 + 4423,3x^8 - 8,7654 ) =
    // =  x^8 * ( x^8 * (-9804x^16 + 4423,3) - 8,7654 )
    //
    //
    //
    //
    return 0;
}