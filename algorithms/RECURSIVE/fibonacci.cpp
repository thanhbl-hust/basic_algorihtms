//algo - recursive - fibonacci

#include<bits/stdc++.h>

using namespace std;

long long fibonacci(int t){
	if(t < 0) return -1;
	if(t == 0) return 0;
	if(t == 1 || t == 2) return 1;
	return fibonacci(t - 1) + fibonacci(t - 2); //recursive here
	
	//easy to code but take long time if t get bigger;
	
}

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
    	cout << "Fibonacci " << i << ": ";
    	cout << fibonacci(i) << endl;
	}
    return 0;
}