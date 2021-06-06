#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void test(vector<int>& v) {
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

vector<int> solution(vector<int>array, vector<vector<int>> commands) {
	vector<int>answer;

	for (int l = 0; l < commands.size(); l++) {
		vector<int> cmd = commands[l];
		int i = cmd[0];
		int j = cmd[1];
		int k = cmd[2];

		vector<int> split;
		for (int a = i = 1; a < j; a++) {
			split.push_back(array[a]);
		}
		sort(split.begin(), split.end());
		answer.push_back(split[k - 1]);
	}
	return answer;
}