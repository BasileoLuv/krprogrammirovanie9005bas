#include <stdio.h>
#include <math.h>

using namespace std;

int stdiowork()
{
    // x^2(x(3.03x + 4.00004) - 5.5)
    // (342,12x^5 + 645,52x^4 – 765,92x)

    double x;
    scanf("Введите X: ", x);

    printf("(342,12x^5 + 645,52x^4 – 765,92x) \n");

    // part1_1 = (3.03x+ 4.00004)
    double part1_1 = 342.12 * x + 645.52;
    printf("Part 1: %d \n", part1_1);

    // part1_2 = x  * x * x * part1
    double part1_2 = x  * x * x * part1_1;
    printf("Part 2: %d \n", part1_2);

    // part1_3 = part1_2 - 765.92
    double part1_3 = part1_2 - 765.92;
    printf("Part 3: %d \n", part1_3);

    // part1_4 = x^2 * part1_3
    double part1_4 = x * part1_3;
    printf("Part 4: %d \n", part1_4);

    printf("Результат первого полинома: %d \n\n", part1_4);

    // x^3 (x^12 (-492.234x^2 + 434.432) + 0.2)
    // (–9804x^32 + 4423,3x^16 - 8,7654x^8)

    printf("x^8 * ( x^8 * (-9804x^16 + 4423,3) - 8,7654  \n");
    // part2_1 = 342,12x + 645,52
    double part2_1 = -9804 * pow(x, 16)  + 434.432;
    printf("Part 1: %d \n", part2_1);

    // part2_2 =
    double part2_2 = pow(x, 8) * part2_1;
    printf("Part 2: %d \n", part2_2);

    // part2_3 = - 8.7654
    double part2_3 = part2_2 - 8.7654;
    printf("Part 3: %d \n", part2_3);

    // part2_4 =
    double part2_4 = pow(x, 8) * part2_3;
    printf("Part 4: %d \n", part2_4);

    printf("Second polinome result: %d \n\n", part2_4);

    double division = part1_4 / part2_4;

    printf("Final result: %d",  division);

    return 0;
}