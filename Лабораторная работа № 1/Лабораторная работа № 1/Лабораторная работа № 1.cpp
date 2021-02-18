//#include <iostream>
//int sum(int n, ...);
//using namespace std;
//
//void main()
//{
//	cout << sum(5, 4, 6, 7, 2, 9) << endl;
//	cout << sum(3, 10, 5, 7) << endl;
//  cout << sum(6, 8, 2, 12, 2, 3, 6) << endl;
//}
//
//int sum(int n, ...)
//{
//	int* p = &n;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//		sum += *(++p)  ;
//	return sum;
//}




#include <iostream>
using namespace std;

float func1(float x)
{
	return   2 - pow(x, 2) + x;
}
float func2(float x) {
	return pow(sin(x), 2) + 0.2;
}


float dichotomy_method(float a, float b, float(*func)(float)) {
	float x = a, e = 0.001;
	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;
		if (func(x) * func(a) <= 0)
			b = x;
		else
			a = x;
	}
	return x;
}

int main() {
	setlocale(0, "rus");
	float a, b;
	cout << "введите координату по иксу ближе к минус бесконечности " << endl;
	cin >> a;
	cout << "введите координату по иксу ближе к плюс бесконечности " << endl;
	cin >> b;

	cout << dichotomy_method(a, b, func1) << endl;
	cout << dichotomy_method(a, b, func2);

	return 0;
}