#include <iostream>
using namespace std;
#define N 10
int main()
{
	int a[N];
	int i,j,t;
	cout << "input 10 numbers: " << endl;
	for(i=0;i<N;i++)
		cin >> a[i]; //����a[0]~a[9]

	for(i=0;i<N-1;i++)           //������N-1������
		for(j=0;j<N-i;j++)       //��ÿ����Ҫ����N-i������
			if(a[j]>a[j+1])
			{
				t = a[j];        //���ǰ��������ں�������ͽ���λ��
				a[j] = a[j+1];   //ʹС���ϸ�
				a[j+1] = t;
			}

	cout << "the sorted numbers:" << endl;

	for(i=0;i<N;i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}