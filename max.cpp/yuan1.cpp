#include<iostream>
using namespace std;
int MAXsum(int n, int a[])
{
	int sum = 0;
	int thissum = 0;
	for (int i = 1;i <= n;i++)
	{
		if (thissum>0)
			thissum += a[i];
		else
			thissum = a[i];
		if (thissum>sum)
			sum = thissum;
	}
	return sum;
}
int main()
{
	int n;
	int b[100];
	int j;
	int max;
	cin >> n;
	int a[100];
	for (j = 0;j<n;j++)
	{
		cin >> b[j];
	}
	for (j = 0;j<n;j++)
	{
		a[j + 1] = b[j];
	}
	max = MAXsum(n, a);
	cout << max;
	system("pause");
	return 0;
}