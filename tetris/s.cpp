#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<math.h>
#include<algorithm>
#include <cstring>

using namespace std;

int N, M;

int a[2][5] = {
	{1,1,0,0,0},
	{1,1,0,0,0}
};
int b[2][5] = {
	{0,1,0,0,0},
	{1,1,1,0,0}
};
int c[1][5] = {
	{1,1,1,1,0}
};
int d[2][5] = {
	{0,0,1,0,0},
	{1,1,1,0,0}
};
int e[2][5] = {
	{1,1,0,0,0},
	{0,1,1,0,0}
};
int arr[7][5] = {};



int main() {
	while (true) {
		cin >> N;
		char f; cin >> f;
		if (f == 'a') {
			copy(&a[0][0], &a[0][0] + 10, &arr[0][N]);
		}
		if (f == 'b') {
			copy(&b[0][0], &b[0][0] + 10, &arr[0][N]);
		}
		if (f == 'c') {
			copy(&c[0][0], &c[0][0] + 10, &arr[0][N]);
		}
		if (f == 'd') {
			copy(&d[0][0], &d[0][0] + 10, &arr[0][N]);
		}
		if (f == 'e') {
			copy(&e[0][0], &e[0][0] + 10, &arr[0][N]);
		}
		for (int i = 6; i >= 0; --i) {
			for (int j = 0; j < 5; ++j) {
					if (arr[i][j] == 1) {
						int idx = i;
						while (true) {
							if (arr[idx + 1][j] == 0 and idx < 6) {
								swap(arr[idx][j], arr[idx + 1][j]); idx++;
							}
							else break;
						}
					}
			}
			
		}
		for (int i = 0; i < 7; ++i) {
			for (int j = 0; j < 5; ++j) {
				cout << arr[i][j] << ' ';
			}
			cout << "\n";
		}
	}
}
