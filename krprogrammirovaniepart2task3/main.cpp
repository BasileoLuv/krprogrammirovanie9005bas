#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Басилая А.К. 9005" << endl;

    double x;
    cout << "Введите X: " << endl;
    cin >> x;

    double eps;
    cout << "Введите эпсилон: " << endl;
    cin >> eps;


    double a = x;
    double s = x;
    int i;

    for (i = 0; i < 1000; i++)
    {
        double q = ((-4) * pow(x, 4)) / ((4 * i + 1) * (4 * i + 2) * (4 * i + 3) * (4 * i + 4));
        a *= q;
        s += a;

    }
    int COUNT = i;

    double * order = new double[COUNT];
    double * summa  = new double[COUNT];

    *(order) = x;
    *(summa) = x;


    for (int i = 0; i < COUNT; i++)
    {

        double q = ((-4) * pow(x, 4)) / ((4 * i + 1) * (4 * i + 2) * (4 * i + 3) * (4 * i + 4));

        auto a = *(order + i) * q;

        *(order + i + 1) = a;
        *(summa + i + 1) += *(summa + i) + a;

        if (fabs(a) <= eps)
        {
            cout << "\nN = " << i + 1 << endl;
            break;
        }
    }

    for (int i = 0; i < COUNT; i++)
    {
        auto a = *(order + i);
        auto s = *(summa + i);
        if (a == 0) break;

        printf("a[%d] = %lf; s = %lf\n", i, a, s);
    }


    return 0;
}