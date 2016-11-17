#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int sum = 0;
	int max;
	int min;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a number for space " << i + 1 << ": ";
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "Space " << i + 1 << " number is: " << arr[i] << endl;
	}
	cout << "The sum of all the entered numbers in the array is: " << sum << endl;
	cout << "The maximum number is: " << max << endl;
	cout << "The minimum number is: " << min << endl;
	system("pause");
	return 0;
}