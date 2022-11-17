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

int solution(){
	
}

int main() {
	
	int n, d;
	cin >> n >> d;
	int a[100000];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	//length = n;
	int count = 0;
	int length = n;
	int st = length - 1;
	while(length > 0){
		if(length <= d / a[st]){
			break;
		}
		count += 1;
		length -= d / a[st] + 1;
		st -= 1;
	}
	cout << count;
	return 0;
}