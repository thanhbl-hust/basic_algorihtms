#include<bits/stdc++.h>
using namespace std;
//Codeforces file;
//dont overthinking, think easily;
//dont complicate problems;
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
//Bui_Lam_Thanh_HUST_K65;
 

//1. Quy hoach dong: a[0] - a[1] = a[0] + a[1] --......
//2. Lam tron so: cout << fixed << setprecision(<number_you_want_to_get>) << <value_you_want_to_get> << endl;
//3. Set in C++
//set<int> index; //index is name of set<int>;
//   |  for(set<int>::iterator it = index.begin(); it != index.end(); it++){
//   |          cout << *(it) << " ";
//   |  }

//4. Count function: Dem phan tu trong string, vector, int a[100];
//   |  count in vector, string: count(a.begin(), a.end(), <value> );
//   |  count in array         : count(a, a + a.size(), <value>);

int solution(int length, vector<vector<int>> a){
	int maxValue = 1;
	
	int start = 0;
	
	while(start < length){
		int bonus = 1;
		int count = 1;
		while(start + bonus < length){
			if(a[start + bonus] != a[start]){
				break;
			}
			bonus += 1;
			count += 1;
		}
		if(count > maxValue){
			maxValue = count;
		}
		start += bonus;
	}
	
	return maxValue;
}

int main() {
	
	int t;
	cin >> t;
	vector<vector<int>> a(t, vector<int> (2));
	for(int i = 0; i < t; i++){
		for(int j = 0; j < 2; j++){
			cin >> a[i][j];
		}
	}
	
	cout << solution(t, a) << endl;
	
	return 0;
}