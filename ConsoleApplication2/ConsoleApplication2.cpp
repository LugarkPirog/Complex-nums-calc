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
	double modul() {
		return(sqrt(re*re + im*im));
	};
	void print() {
		cout << re << "+" << im << "i\n";
	};
	void set(double a, double b) {
		re = a; im = b;
	};
	Complex operator+(Complex a) {
		Complex res(re + a.re, im + a.im);
		return(res);
	};
	Complex operator-(Complex a) {
		Complex res(re - a.re, im - a.im);
		return(res);
	};
	Complex operator*(Complex a) {
		Complex res(re*a.re - im*a.im, re*a.im + im*a.re);
		return(res);
	};
	Complex operator/(Complex a) {
		double div = a.re*a.re + a.im*a.im;
		Complex res((re*a.re+im*a.im)/div, (a.re*im-a.im*re)/div);
		return (res);
	};
};

int mandel(Complex);

int main() {
	setlocale(0, "");
	double a, b;
	Complex z;
	Complex x(-0.2);
	/*cout << "Vvedite Re, a potom Im: ";
	cin >> a >> b;
	z.set(a, b);
	cout << "\n\nVvedite for 2 comp num Re, a potom Im: ";
	cin >> a >> b;
	x.set(a, b);
	cout << "The 1st nums' module is " << z.modul() << endl;
	cout << "And the 2nd module is " << x.modul() << "\n\n";
	cout << "Summ is: "; (z + x).print();
	cout << "Subtr is: "; (z - x).print();
	cout << "Mult is: "; (z * x).print();
	cout << "And div is: "; (z / x).print();
	*/
	//TASK 1 ~~~ Mandelbrot set ~~~
	
	cout << mandel(z) << endl;
	
	system("pause");
	return 0;
}

int mandel(Complex a) {
	int K = 10000;
	Complex tmp = a;
	for (int i=0; K-i; i++) {
		if (tmp.modul() < 2) {
			tmp = tmp + a;
		}
		else return i;
	};
	return 0;
};
