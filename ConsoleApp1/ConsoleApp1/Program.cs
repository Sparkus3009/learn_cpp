#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>
#include <fstream>

using namespace std;
int main()
{
    FILE* p;
    char name[100];
    setlocale(LC_ALL, "Russian");
    int a, b, i;
    double c;
    const double PI = 3.141592653589793;
    ofstream f;
    f.open("знач.txt");
    cout « "Введите диапазон" « endl;
    cin » a;
    cin » b;
    srand(time(NULL));
    for (i = 0; i < 101; i++)
    {
        double sum1 = 0;
        double sum2 = 0;
        for (i = 0; i < 101; i++)
        {
            c = rand() / 32767.0;
            sum1 += cos(2 * PI * c);
            sum2 += sin(2 * PI * c);
        }
        double I = pow(sum1 + sum2, 2.0);
        printf("%g\n", I);
        FILE* p = fopen("знач.txt", "w");
    }
    f.close();

}