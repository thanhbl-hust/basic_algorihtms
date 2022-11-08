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

int solution(int n, int a, int b, int c){
	int distance = 0;
	//rabbit - owl = a;
	//rabbit - eagl = b;
	//owl - eagle = c;
	//rabbit = 1;
	//owl = 2;
	//eagle = 3;
	
	if(n == 1) return distance;
	int start = 1;
	int location = 1;
	while(start < n){
		if(location == 1){
			distance += min(a, b);
			if(a <= b){
				location = 2;
			}else{
				location = 3;
			}
		}else if(location == 2){
			distance += min(a, c);
			if(a <= c){
				location = 1;
			}else{
				location = 3;
			}
		}else{
			distance += min(b, c);
			if(b <= c){
				location = 1;
			}else{
				location = 2;
			}
		}
		start += 1;
	}
	return distance;
}

int main() {
	
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	cout << solution(n, a, b, c) << endl;
	
	return 0;
}