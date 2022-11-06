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

long long solution(vector<vector<int>> a){
	long long sum = 0;
	int length = a[1].size();
	for(int i = 0; i < length - 1; i++){
		for(int j = 0; j < 2; j++){
			sum += abs(a[j][i + 1] - a[j][i]);
		}
	}
	return sum;
}

vector<vector<int>> change_vector(vector<vector<int>> a){
	//a[0] is smaller vector;
	int length = a[1].size();
	for(int i = 0; i < length; i++){
		if(a[0][i] > a[1][i]){
			int tmp = a[0][i];
			a[0][i] = a[1][i];
			a[1][i] = tmp;
		}
	}
	return a;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int length; cin >> length;
		vector<vector<int>> a(2, vector<int> (length));
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < length; k++){
				cin >> a[j][k];
			}
		}
		a = change_vector(a);
		cout << solution(a) << endl;
	}
	return 0;
}