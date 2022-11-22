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

//5. Map in cpp: VSC folder in algorithms;
//6. "substr" function




int main(){
	int m = 0;
	int n, k, x; cin >> n >> k >> x;
	int a[100];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	
	//duoc doi k do;
	//a[i] doi thanh x cho be hon;
	int start = n - 1;
	int count = 0;
	while(count < k){
		if(a[start] <= x){
			break;
		}
		count += 1;
		start -= 1;
	}
	
	m += count*x;
	for(int i = 0; i <= start; i++){
		m += a[i];
	}
	
	cout << m << endl;
	return 0;
}