#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;} //read Int

void outputArray(int arr[],int num){
    for(int i = 0 ; i < num;i++ ){
    cout << arr[i] << " ";} //output Array


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = readInt(); //number of item in array
    int d = readInt(); //number of rotations
    int num[n]; //this is to ensure that the number of rotations are kept to a minimum in case the number of rotation exceeds array size

	for (int i = n-d; i < n; ++i)
	{
		num[i] = readInt(); // read integer into appropriate place
	}


	for (int i = 0; i < n-d; ++i)
	{
		num[i] = readInt(); // same as above
	}

	outputArray(num,n); // output array

    return 0;
}
