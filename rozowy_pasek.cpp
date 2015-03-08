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


/*
testOfSuma(void)
Input: none
Output: true if and only if suma(t,n) is correct (on some data)
*/
bool testOfSuma(void) {

	bool result;
	
	// First test
	int testInput1[] = { 0, 1, 2, 3, 4 };
	int n = 5; // sizeof(testInput1);
	int testOutput1[] = { 0, 1, 3, 6, 10 };

	suma(testInput1, n);

	result = true;

	for (int i = 0; i < n; i++)
		if (testInput1[i] != testOutput1[i])
			result = false;

	// Second test

	// ...

	// Third test

	// ...

	return result;
}


int main()
{
	cout << "Function suma(t,n) is " << (testOfSuma() ? "correct." : "incorrect.");
	
	/*
	int n;

	cin >> n;

	int * t;
	t = new int[n];

	for (int i = 0; i < n; i++)
		cin >> t[i];

	suma(t, n);

	for (int i = 0; i < n; i++)
		cout << t[i] << " "; */

	return 0;
}
