#include <iostream>
using namespace std;
const int ArSize = 8;

int main()
{
	int sum_arr(int arr[],int n);
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};

	cout << cookies << "= array address" << endl;
	cout << sizeof(cookies) << "=sizeof(cookies)\n";

	int sum = sum_arr(cookies,ArSize);
	cout << "Total cookies eaten:" << sum << endl;

	sum = sum_arr(cookies,3);
	cout << "Total cookies eaten:" << sum << endl;

	sum = sum_arr(cookies+4,4);
	cout << "Total cookies eaten:" << sum << endl;

	return 0;
}

int sum_array(int *arr,int n)
{
	int total = 0;

	cout << arr << "=arr";
	cout << sizeof arr << "=sizeof arr";
	for(int i=0;i<n;i++)
		total = total + arr[i];
	return total;
}