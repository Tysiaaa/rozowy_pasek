#include "stdafx.h"
#include <iostream>

using namespace std;

void suma(int t, int n)
{
	for (int i = 1; i++; i < n)
		t[i] += t[i - 1];
}

int main()
{ 
	int n;
	cin >> n;
	int t[n];
	for (int i = 0; i++; i < n)
		cin >> t[i];
	return 0;
}