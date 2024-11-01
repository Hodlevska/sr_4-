#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	double y, x; 
	cout << "Введiть значення х= ";
	cin >> x;
	y = (x+2*x+sin(x))/(pow(cos(x),2)+x*x)+(pow(0.3,x)/log(x));
	cout << "Результат y= " << y << endl;
	eturn 0;
}
