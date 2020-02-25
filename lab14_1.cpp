#include <iostream>
using namespace std;


int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z = &x;
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";
	cout << "x = " << x << "\n";
	cout << "y = " << (int *)y << "\n";
	cout << "z = " << z << "\n";
	cout << "\n";
	cout << "&a = " << &a << "\n";
	cout << "&b = " << (int *)&b << "\n";
	cout << "&c = " << (int *)&c << "\n";
	cout << "&x = " << &x << "\n";
	cout << "&y = " << &y << "\n";
	cout << "&z = " << &z << "\n";
	c ='F';
	cout << "\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";
	cout << "x = " << x << "\n";
	cout << "y = " << (int *)y << "\n";
	cout << "z = " << z << "\n";
	*y = 'W';
	cout << "\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";
	cout << "x = " << x << "\n";
	cout << "y = " << (int *)y << "\n";
	cout << "z = " << z << "\n";
	*x = 6;
	cout << "\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";
	cout << "x = " << x << "\n";
	cout << "y = " << (int *)y << "\n";
	cout << "z = " << z << "\n";
	**z = 7;
	cout << "\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "c = " << c << "\n";
	cout << "x = " << x << "\n";
	cout << "y = " << (int *)y << "\n";
	cout << "z = " << z << "\n";

	
	return 0;
}
