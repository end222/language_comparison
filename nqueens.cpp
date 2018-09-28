/*
 * N Queens problem solved by backtrack algorithm
 * By end222
 */
#include <iostream>
#include <chrono>

typedef std::chrono::high_resolution_clock Clock;
using namespace std;

int solutions = 0;

void list_result(int vector[], int num)
{
	int i = 0;
	solutions++;
	while (i < num)
	{
		int position = vector[i];
		for(int j=0; j<position; j++)
		{
			cout << "-";
		}
		cout << "#";
		for(int j=0; j <= num-position; j++)
		{
			cout << "-";
		}
		i++;
		cout << endl;
	}
	cout << endl;
}

void solve(int vector[], int row, int num)
{
	int i = 1, j = 0;
	while (i <= num)
	{
		bool not_here = false;
		while (!not_here && j < row)
		{
			not_here = (vector[j] == i) || (vector[j] - (j + 1)) == (i - (row + 1)) || (vector[j] + (j + 1) == (i + (row + 1)));
			j++;
		}
		if (!not_here)
		{
			vector[row] = i;
			if (row < num -1)
			{
				solve(vector, row+1, num);
			}
			else
			{
				list_result(vector, num);
			}
		}
		i++;
		j = 0;
		not_here = false;
	}	
}

int main()
{
	char input[10];
	cin >> input;
	int num = atoi(input);
	auto start = Clock::now();
	int vector[1000];
	int i = 0;
	while (i < num)
	{
		vector[i] = 0;
		i++;
	}
	cout << "A" << endl;
	solve(vector, 0, num);
	cout << solutions << " solutions" << endl;
	auto end = Clock::now();
	cout << (float)chrono::duration_cast<std::chrono::nanoseconds>(end-start).count()/1000000000 << endl;
	return 0;
}
