// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;
class Complex {
	double re, im;
public: 
		Complex(double z_re, double z_im) {
			re = z_re; im = z_im;
		};
		Complex() {
			re = 0; im = 0;
		};
		Complex(double z) {
			re = z; im = 0;
		};
		double modul(){
			return(sqrt(re*re + im*im));
		};
		void print() {
			cout << re << "+" << im << "i\n";
		};
		void set() {
			double a, b;
			cout << "Vvedite Re, a potom Im: ";
			cin >> a >> b;
			re = a; im = b;
		}
};
Complex add(Complex, Complex);
Complex sub(Complex, Complex);
Complex mul(Complex, Complex);
Complex div(Complex, Complex);


int main() {
	Complex z;
	Complex x(0.9);
	Complex y(12, 3);
	double z1, x1, y1;
	z1 = z.modul(); x1 = x.modul(); y1 = y.modul();
	cout << z1 << "\n" << x1 << "\n" << y1<< "\n";
	z.print(); x.print(); y.print();
	cout << "\n\n\n";
	z.set();
	z.print(); x.print();

	getch();
	return 0;
}
Complex add(Complex *a, Complex *b) {
	Complex tmp(a->re + b->re, )
	return(tmp);
};

