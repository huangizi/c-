#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cout << "������һ���ַ���:";
	getline(cin,a);
	cout << "�ַ���" << a << "�ĸ���" << a.length() << endl;
	getline(cin,a);

	cout << "������һ���ַ���:";
	std::cin >> a;
	cout << "�ַ���" << a << "�ĸ���" << a.length() << endl;

	return 0;
}