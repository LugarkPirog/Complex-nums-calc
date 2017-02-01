// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

using namespace std;
class Complex {
	double re, im;
public:
	Complex(double z_re = 0, double z_im = 0) {
		re = z_re; im = z_im;
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
		Complex res((re*a.re + im*a.im) / div, (a.re*im - a.im*re) / div);
		return (res);
	};
	Complex operator+=(Complex a) {
		return Complex(re + a.re, im + a.im);
	};
};
int mandel(Complex, int &);

int main() {
	setlocale(0, "");
	//TASK 1 ~~~ Mandelbrot set ~~~
	ifstream a;
	int q;
	a.open("test.txt", O_RDONLY);
	if (!a) {
		cout << "Chto-to poshlo ne tak...\n";
	}
	else {
		a >> q;
		while (!a.eof()) {
			double re, im;
			Complex z;
			a >> re >> im;
			cout << setw(6) << right << re << setw(8) << right << im << "i" << setw(5) << right << mandel(Complex(re, im), q) << endl;
		};
	};
	system("pause");
	return 0;
}

int mandel(Complex a, int &accuracy) {
	Complex tmp = a;
	for (int i=1; accuracy-i; i++) {
		if (tmp.modul() < 2) {
			tmp = tmp + a;
		}
		else return i;
	};
	return 0;
};
