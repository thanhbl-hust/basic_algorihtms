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

/////digits function

int change(char s){
	if(s == '0') return 0;
	if(s == '1') return 1;
	if(s == '2') return 2;
	if(s == '3') return 3;
	if(s == '4') return 4;
	if(s == '5') return 5;
	if(s == '6') return 6;
	if(s == '7') return 7;
	if(s == '8') return 8;
	if(s == '9') return 9;
}

bool check_vector(vector<int> dgb){
	
	int st = dgb.size() - 1;
	while(st >= 0){
		if(dgb[st] == 0){
			break;
		}
		st -= 1;
	}
	
	for(int i = 1; i < st; i++){
		if(dgb[i] != 0){
			return false;
		}
	}
	
	for(int i = 0; i < dgb.size() - 1; i++){
		for(int j = 0; j < dgb.size() - 1 - i; j++){
			if(dgb[j] != 0 and dgb[j + 1] != 0 and dgb[j] > dgb[j + 1]){
				return false;
			}
		}
	}
	return true;
}

bool check(string a, string b){
	vector<int> dga;
	vector<int> dgb;
	for(int i = 0; i < a.size(); i++){
		dga.push_back(change(a[i]));
	}
	for(int i = 0; i < b.size(); i++){
		dgb.push_back(change(b[i]));
	}
	if(dgb.size() != 1 and dgb[0] == 0){
		return false;
	}
	sort(dga.begin(), dga.end());
	sort(dgb.begin(), dgb.end());
	if(dga == dgb and dga.size() == 1 and dga[0] == 0){
		return true;
	}
	if(dga == dgb) return true;
	return false;
}

void show(string a, string b){
	vector<int> dgb;
	for(int i = 0; i < b.size(); i++){
		dgb.push_back(change(b[i]));
	}
	bool h = check_vector(dgb);
	if(h){
		cout << "OK" << endl;
	}else{
		cout << "WRONG_ANSWER" << endl;
	}
}

int main(){
	
	string a, b;
	cin >> a >> b;
	if(a.size() != b.size() || check(a, b) == false){
		cout << "WRONG_ANSWER" << endl;
	}else{
		show(a, b);
	}
	
	
	return 0;
}