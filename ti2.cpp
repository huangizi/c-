#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cout << "ÇëÊäÈëÒ»´®×Ö·û´®:";
	getline(cin,a);
	cout << "×Ö·û´®" << a << "µÄ¸öÊý" << a.length() << endl;
	getline(cin,a);

	cout << "ÇëÊäÈëÒ»´®×Ö·û´®:";
	std::cin >> a;
	cout << "×Ö·û´®" << a << "µÄ¸öÊý" << a.length() << endl;

	return 0;
}