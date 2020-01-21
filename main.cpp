#include <iostream>
#include "iostreamonly.cpp"
#include "stdioOnly.cpp"

int main() {

    cout << "введите номер работы: ";
    double num;
    cin >> num;
    if (num == 1)
    {
        iostreamwork();
    }
    else
    stdiowork();
    return 0;
}
