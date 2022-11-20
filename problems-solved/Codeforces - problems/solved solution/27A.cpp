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

int solution(vector<int> a){
	for(int i = 0; i < a.size(); i++){
		if(a[i] != i + 1) {
			return i + 1;
		}
	}
}

int main(){

    int t;
	cin >> t;
	vector<int> a;
	for(int i = 0; i < t; i++)	{
		int index; cin >> index; a.push_back(index);
	}
	sort(a.begin(), a.end());
	cout << solution(a) << endl;
	return 0;
}