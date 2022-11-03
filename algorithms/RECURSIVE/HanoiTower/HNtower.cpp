//algo - recursive - HaNoitower;

#include<bits/stdc++.h>

using namespace std;

int count_moves(int t){
	if(t == 0 || t == 1) return t;
	return 2 * count_moves(t - 1) + 1;
}

void HaNoitower(int t, string start, string end, string middle){
	if(t == 0){
		return; //use return in void function to stop function immediately;
	}
	HaNoitower(t - 1, start, middle, end);
	//Move (t - 1) tower from start to middle;
	cout << "Move tower " << t << " from " << start << " to " << end << endl;
	
	//Move biggest tower(not in end yet) from start to end;
	
	
	HaNoitower(t - 1, middle, end, start);
	//Move (t - 1) tower left in middle to end;
}

int main(){
	
	int t;
	cin >> t;
	HaNoitower(t, "start", "end", "middle"); //recursive;
	//count step moves needs for move t tower from start to begin;
	
	cout << "Step moves needed: " << count_moves(t) << endl;
	
    return 0;
}