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
	
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int index;
		cin >> index;
		int maxValue = 1;
		for(int j = 2; j <= index; j++){
			if(index % j == 0 and j > maxValue and 100 % j == 0){
                //can use while for faster;
				maxValue = j;
			}
		}
		cout << 100 / maxValue << endl;
	}
	
	return 0;
}