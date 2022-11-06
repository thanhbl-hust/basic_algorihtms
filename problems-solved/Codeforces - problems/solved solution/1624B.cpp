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


void show(vector<int> v){
	int a = v[0];
	int b = v[1];
	int c = v[2];
	if(c - b == b - a){
		cout << "YES" << endl;
	}else{
		if((c + a) % 2 == 0 and ((c + a) / 2) % b == 0){
			cout << "YES" << endl;
		}else if((b - (c - b)) % a == 0 and (b - (c - b)) > 0){
			cout << "YES" << endl;
		}else if((b + (b - a)) % c == 0 and (b + (b - a)) > 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}

int main() {
	
	int t;
	cin >> t;
	vector<vector<int>> a(t, vector<int> (3));
	for(int i = 0; i < t; i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < t; i++){
		show(a[i]);
	}
	return 0;
}