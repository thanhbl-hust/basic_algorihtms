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


int main(){
	
	float a, b, n;
	cin >> a >> b >> n;
	
	if(a == b and a == 0){
		cout << 5 << endl;
	}else{
		int c = -1;
	for(int i = -1000; i <= 1000; i++){
		if(pow(i, n) == b / a){
			c += 1;
			cout << i << endl;
			break;
		}
		if(c == 0){
			break;
		}
	}
	if(c == -1){
		cout << "No solution" << endl;
	}
	}
	
	return 0;
}