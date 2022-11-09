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

bool check(vector<int> a, int n){
	if(n == a[0] || n == a[1]){
		return true;
	}
	return false;
}

int main() {
	
	
	int t;
	cin >> t;
	int a[100];
	for(int i = 0; i < t; i++){
		cin >> a[i];
	}
	
	//1st-game = Alex - Bob;
	//1 - Alex;
	//2 - Bob;
	//3 - Carl;
	int c = 0;
	//who waiting -> so cant win of course;
	vector<int> res;
	res.push_back(1);
	res.push_back(2);
	int queue = 3;
	for(int i = 0; i < t; i++){
		if(check(res, a[i]) == false){
			cout << "NO" << endl;
			c += 1;
		}else{
			//winner in the game;
			int j = 0;
			if(a[i] == res[0]){
				j = 1;
			}
			int tmp = res[j];
			res[j] = queue;
			queue = tmp;
		}
		if(c != 0){
			break;
		}
	}
	
	
	if(c == 0){
		cout << "YES" << endl;
	}
	
	return 0;
}