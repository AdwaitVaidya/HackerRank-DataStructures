#include <iostream>
#include <array>
#include <sstream>
#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

vector<string> getTokens();
int findMax(int mid[]);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int mid[16];
    int input[6][6];
	for (short row = 0; row < 6; row++)
	{
	    vector<string> nums = getTokens();
		for (short column = 0; column < 6; column++)
		{
			input[row][column] = stoi(nums[column]);
		}
	}
    int size = 0;
	for (short row = 0; row < 4; row++)
	{
		for (short column = 1; column < 5; column++)
		{
			int sum = input[row][column] + input[row][column - 1] + input[row][column + 1] + input[row + 1][column] + input[row + 2][column] + input[row + 2][column - 1] + input[row + 2][column + 1];
			mid[size] = sum;
            size++;
		}
	}
	int max = findMax(mid);
	cout << max;
}

int findMax(int mid[]){
	int max = mid[0];
	for (int i = 0; i < 16; i++)
	{
		if (mid[i] > max)
        {
			max = mid[i];
		}
		else
		{
			continue;
		}
	}
	return max;
}

vector <string> getTokens(){
    string line ;
    getline(cin,line,'\n');
	vector <string> tokens;
    stringstream check1(line);
    string intermediate;
    while(getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }
	return tokens;
}








