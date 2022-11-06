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

long long solution(long long a, long long b){
	if(a == 0 || b == 0) return 0;
	long long minVal = min(a, b);
	long long maxVal = max(a, b);
	if(maxVal == minVal) return (2 * minVal) / 4;
	if(minVal * 3 <= maxVal) return minVal;
	
	//maxVal < 3 * minVal;
	return (maxVal + minVal) / 4;
	
	
}

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		long long a, b;
		cin >> a >> b;
		cout << solution(a, b) << endl;
	}
	return 0;
}