#include <iostream>

using namespace std;

int main()
{
	int price = 100;
	price = 50;

	cout << "안녕하세요?" << endl;
	cout << "안녕하세요?" << endl;
	cout << "'LEEOU' 입니다."<< endl;
	cout << price + 200 << endl;
	cout << price * 200 << endl;
	cout << price - 200 << endl;
	cout << price / 10 << endl;
	cout << price % 6 << endl;


	float R = 0.5f;

	cout << R * 0.5f << endl;
	cout << R - 0.5f << endl;
	cout << R / 0.5f << endl;


	char ch = 'a'; //'a' = 63

	cout << (char)(ch + 2) << endl;

	return 0;
}