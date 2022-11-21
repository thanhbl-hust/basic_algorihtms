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

string make_string(string s, int st, int end){
	string str_make = "";
	for(int i = st; i < end; i++){
		str_make.push_back(s[i]);
	}
	return str_make;
}

int solution(string s){
	
	int length = s.size();
	int st = length - 1; //max do dai co the dat duoc la length - 1;
	while(st > 0){
		
		for(int i = 0; i < length - st; i++){
			string first = make_string(s, i, i + st);
			for(int j = i + 1; j + st < length + 1; j++){
				string sec = make_string(s, j, j + st);
				if(first == sec){
					return st;
				}
			}
		}
		
		st -= 1;
	}
	
	return 0;
	
}


int main(){
	
	string s; cin >> s; cout << solution(s) << endl;
	
	return 0;
}