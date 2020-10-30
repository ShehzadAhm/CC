/*
Program reads two-digit number and prints every digit, separated by a space.

Input
One integer from 10 to 99 including.

Output
Two digits separated by a space.
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cout<<n/10<<" "<<n%10;
	return 0;
}
