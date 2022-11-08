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
 
long long solution(int n, long long b[200000], vector<int> buy){
	int x = buy[0]; //buy most expensive;
	int y = buy[1]; //sum of y items in x expensive;
	
	long long all_money = 0;
	if(x == n){
		all_money += b[n - 1];
	}else{
		all_money += b[n - 1] - b[n - 1 - x];
	}
	
	//all money is money to buy most expensive x items;
	if(x == y) return all_money;
	
	// all - (x - y) most expensive;
	return all_money - (b[n - 1] - b[n - 1 - (x - y)]);
	
}
 
int main() {
	
	
	int n, q;
	cin >> n >> q;
	long long a[200000];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 1; i < n; i++){
		a[i] = a[i] + a[i - 1];
	}
	vector<vector<int>> buy(q, vector<int> (2));
	for(int i = 0; i < q; i++){
		for(int j = 0; j < 2; j++){
			cin >> buy[i][j];
		}
	}
	
	for(int i = 0; i < q; i++){
		cout << solution(n, a, buy[i]) << endl;
	}
 
	
	return 0;
}