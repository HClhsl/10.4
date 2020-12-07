#include<iostream>
using namespace std;
int main()
{
	int x,i=1,a[100],t;
	cout<< "请输入整数（输零结束）";
	cin >> a[0];
	x = a[0];
	while (x)
	{
		cout << "请输入整数（输零结束）";
		cin >> x;
		a[i] = x;
		for(int m=i-1;m>=0;m--)
			for(int p=i;p>=0;p--)
			if (a[p] < a[m])
			{
				t = a[m];
				a[m] = a[p];
				a[p] = t;
			}
	for (int n = 0; n <= i; n++)
		cout << a[n] << '\t';
	cout << endl;
	i += 1;
	}
	return 0;
}