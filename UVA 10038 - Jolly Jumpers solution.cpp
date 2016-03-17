//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 10038 - Jolly Jumpers
	int n, x, t;
	string s;
	vector<int> v;
	int arr[3100];
	while (cin >> n) {
		v.clear();
		fill(arr, arr + 3100, 0);
		s = "Jolly";
		t = n;
		while (n--) {
			cin >> x;
			v.push_back(x);
		}
		for (int i = 0; i < v.size() - 1; i++)
			arr[abs(v[i + 1] - v[i])]++;
		for (int i = 1; i < t; i++)
			if (!arr[i]) {
				s = "Not jolly";
				break;
			}
		cout << s << endl;
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
