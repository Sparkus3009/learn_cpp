#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>
#include <fstream>

using namespace std;
int main() {
	char name[100];
	setlocale(LC_ALL, "Russian");
	int a, b;
	double c;
	const double PI = 3.141592653589793;
	cout << "Введите диапазон" << endl;
	cin >> a;
	cin >> b;
	srand(time(NULL));
	FILE* OutFile;
	fopen_s(&OutFile, "знач.txt", "w");
	for (int i = 0; i < 101; i++) {
		double sum1 = 0;
		double sum2 = 0;
		for (int j = 0; j < 101; j++) {
			c = rand() / 32767.0;
			sum1 += cos(2 * PI * c);
			sum2 += sin(2 * PI * c);
		}
		double I = pow(sum1 + sum2, 2.0);
		printf("%g\n", I);
		fprintf(OutFile, "%f\n", I);
		
	}
	fclose(OutFile);
}