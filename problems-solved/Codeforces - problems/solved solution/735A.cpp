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
 
void show(int n, int k, string s){
	//n: length of s;
	//k: length of jump steps;
	int st = 0;
	
	int a = 0, b = 0;
	
	while(st < n){
		if(s[st] == 'T'){
			a = st;
		}
		if(s[st] == 'G'){
			b = st;
		}
		st += 1;
	}
	if(abs(a - b) % k == 0){
		int c = -1;
	for(int i = min(a, b); i <= max(a, b); i += k){
		if(s[i] == '#'){
			cout << "NO" << endl;
			c += 1;
		}
		if(c != -1){
			break;
		}
	}
	if(c == -1){
		cout << "YES" << endl;
	}
	}else{
		cout << "NO" << endl;
	}
}
 
int main() {
	
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	show(n, k, s);
	
	return 0;
}