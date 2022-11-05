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


void show(int length){
	if(length == 1){
		cout << 1 << endl;
		cout << "1 2" << endl;
	}else{
		if(length % 2 == 0){
			cout << length / 2 << endl;
		}else{
			cout << length / 2 + 1 << endl;
		}
		int end = 3 * length;
		int start = 2;
		while(start < end){
			cout << start << " " << end << endl;
			start += 3;
			end -= 3;
		}
	}
}


int main() {
	
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int length;
		cin >> length;
		show(length);
	}
	
	return 0;
}