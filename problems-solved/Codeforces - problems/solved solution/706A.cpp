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



int main() {
	
	float a, b;
	cin >> a >> b;
	int t;
	cin >> t;
	float minValue = 10000000;
	
	for(int i = 0; i < t; i++){
		float xi, yi, vi;
		cin >> xi >> yi >> vi;
		float time = sqrt(pow(abs(a - xi), 2) + pow(abs(b- yi), 2)) / vi;
		
		//a2 + b2 = pow(abs(a - xi), 2) + pow(abs(b- yi), 2);
		
		if(time < minValue){
			minValue = time;
		}
	}
	
	cout << fixed << setprecision(10) << minValue << endl;
	
	return 0;
}