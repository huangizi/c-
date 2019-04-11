#include <iostream>
using namespace std;
#define N 10
int main()
{
	int a[N];
	int i,j,t;
	cout << "input 10 numbers: " << endl;
	for(i=0;i<N;i++)
		cin >> a[i]; //输入a[0]~a[9]

	for(i=0;i<N-1;i++)           //共进行N-1轮排序
		for(j=0;j<N-i;j++)       //在每轮中要进行N-i次排序
			if(a[j]>a[j+1])
			{
				t = a[j];        //如果前面的数大于后面的数就交换位置
				a[j] = a[j+1];   //使小数上浮
				a[j+1] = t;
			}

	cout << "the sorted numbers:" << endl;

	for(i=0;i<N;i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}