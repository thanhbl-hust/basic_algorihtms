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

int strTonum(char s){
	if(s == '1') return 1;
	if(s == '2') return 2;
	if(s == '3') return 3;
	if(s == '4') return 4;
	if(s == '5') return 5;
	if(s == '6') return 6;
	if(s == '7') return 7;
	if(s == '8') return 8;
	if(s == '9') return 9;
	return -1;
}

int solution(int n, int m, vector<string> s){
	
	set<int> count;
	
	for(int i = 0; i < m; i++){
		vector<int> score;
		for(int j = 0; j < n;  j++){
			int sc = strTonum(s[j][i]);
			score.push_back(sc);
		}
		int maxScore = *max_element(score.begin(), score.end());
		for(int j = 0; j < n; j++){
			if(score[j] == maxScore){
				count.insert(j);
			}
		}
	}
	
	return count.size();
	
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<string> score;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		score.push_back(s);
	}
	cout << solution(n, m, score);
	return 0;
}