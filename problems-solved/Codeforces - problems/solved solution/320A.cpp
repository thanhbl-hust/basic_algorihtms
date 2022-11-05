#include<bits/stdc++.h>
using namespace std;
//dont overthinking, think easily;
//dont complicate problems;
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    return 0;
//}
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

void show(string s){
	int check = 0;
	int st = 0;
	while(st < s.size()){
		if(s[st] != '1' and s[st] != '4'){
			check += 1;
			break;
		}
		st += 1;
	}
	if(check == 1){
		cout << "NO" << endl;
	}else{
		//only 1 and 4 in string s;
		if(s[0] == '4'){
			cout << "NO" << endl;
		}else{
			if(s.size() < 3){
				cout << "YES" << endl;
			}else{
				int start = 0;
				int ch = 0;
				while(start < s.size() - 2){
					if(s[start] == s[start + 1] && s[start + 1] == s[start + 2] && s[start] == '4'){
						ch += 1;
						cout << "NO" << endl;
						break;
					}
					start += 1;
				}
				if(ch == 0){
					cout << "YES" << endl;
				}
			}
		}
	}
}

int main() {
	string s;
	cin >> s;
	show(s);
	return 0;
}