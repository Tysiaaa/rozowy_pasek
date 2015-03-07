#include "stdafx.h"
#include <iostream>

using namespace std;

void suma(int t[], int n)
{
	for (int i = 1; i < n; i++)
	{
		t[i] += t[i - 1];
	}

}


int main()
{

	int n;

	cin >> n;

	int * t;
	t = new int[n];

	for (int i = 0; i < n; i++)
		cin >> t[i];

	suma(t, n);

	for (int i = 0; i < n; i++)
		cout << t[i] << " ";

	return 0;
}
