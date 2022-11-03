//algo - recursive - factorial

#include<bits/stdc++.h>

using namespace std;

long long factorial(int t){
	if(t < 0) return -1;
	if(t == 0 || t == 1) return 1;
	return t * factorial(t - 1);
	
	//same as fibonacci, take long time if t bigger, should use dynamic;
	
}

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
    	cout << "Factorial of " << i << ": ";
    	cout << factorial(i) << endl;
	}
    return 0;
}