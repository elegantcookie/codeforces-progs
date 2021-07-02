#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int** func_array = new int* [100];						// filling a two-dimensional array (twas dynamic, but it became static btw)
	for (int i = 0; i < 100; i++)
	{
		func_array[i] = new int[100];
	}

	for (int row = 0; row < n; row++)						// putting boxes as for a normal gravitation
	{
		int x;
		cin >> x;
		for (int column = 0; column < 100; column++) {
			if (column < x)
				func_array[column][row] = 1;
		}
	}

	for (int row = 0; row < 100; row++)						// putting it in order (as for a switched gravity)
	{
		sort(func_array[row], func_array[row] + 100);
	}

	for (int row = 0; row < 100; row++)						// fixing not initialized cells
	{
		for (int column = 0; column < 100; column++)
		{
			if (func_array[row][column] != 1)
				func_array[row][column] = 0;
		//	cout << a[i][j] << "\t";
		}
		//cout << "\n";
	}

	int* s = new int[100];
	for (int i = 0; i < 100; i++)
	{
		s[i] = 0;
	}


	for (int row = 0; row < 100; row++)						// getting a sum of switched gravity cells
	{
		for (int column = 0; column < 100; column++) {
			s[row] += func_array[column][row];
		}
	}

	for (int i = 0; i < 100; i++) {							
		if (s[i] != 0)
			cout << s[i] << " ";
	}

	return 0;
}
