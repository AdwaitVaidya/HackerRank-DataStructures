
#include <bits/stdc++.h>
#include <stdio.h>
#include <cstdio>
#include<iostream>
#include <cstring>

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
		return result;
} //read Int

void printArray(string strings[],int stringLength,int num1,int num2,int num3){
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    for(int i = 0 ; i < stringLength;i++){
            cout << strings[i] << endl;
        }
        cout << endl;

}

int findFreq(string querie,string strings[],int stringLength,int num = 0){
cout << num << endl;


	for (int i = 0; i < stringLength; i++)
	{

	    cout << num << endl;
	    cout << strings[i] << endl;
		for (int j = 0; j < (strings[i].length()-querie.length())-1; j++)
		{
		    printArray(strings,stringLength,j,i,num);
				if (strings[i].substr(j,querie.length())==querie) {
						num++;
				}
		}
	}

	return num;
}

string readString(){
    string i="";
    int temp=getchar();
    while(temp<'a'||temp>'z')
        temp=getchar();
    while(temp>='a'&&temp<='z')
    {
        i+=(char)temp;
        temp=getchar();
    }
    return i;}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ofstream input;
    input.open("Input");

    int n = readInt();
    string strings[n];
    for (int i = 0; i < n; ++i)
    {
    	strings[i]=readString();
    }

    int q = readInt();
    string queries[q];
    for (int i = 0; i < q; ++i)
    {
    	queries[i]=readString();
    }

    for (int i = 0; i < q; ++i)
    {
            cout << i << " " << queries[i] << " " << n << endl;
				int val = findFreq(queries[i],strings,n);
				cout << val << endl;
    }
    return 0;
}
