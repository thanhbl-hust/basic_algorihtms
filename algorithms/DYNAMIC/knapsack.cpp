//value = {60, 100, 120};
//weights = {1, 2, 3};
//W = 5;
//solution: 220(one thing maximum one times);

//knapsack_problem;

#include<bits/stdc++.h>

using namespace std;

int knapsack_solution(int values[], int weights[], int maxw, int length){
	
	vector<vector<int>> val(length + 1, vector<int> (maxw + 1));
	
	for(int i = 0; i < length + 1; i++){
		for(int w = 0; w < maxw + 1; w++){
			if(i == 0 || w == 0){ //i means can contain first i things, w is weights limits at that time;
				val[i][w] = 0;
				
			}else if(weights[i - 1] <= w){ //if things smaller than weights limit, there are 2 case;
				val[i][w] = max(val[i - 1][w], values[i - 1] + val[i - 1][w - weights[i - 1]]);
				                                      //can use val[i][w - weights[i - 1]] to contain one thing many time;
			
			}else{
				val[i][w] = val[i - 1][w];
			}
		}
	}
	
	

	//show table value;
	//value[i][j] means max values can get if can contains (i) things weights (j) limit;
	for(int i = 0; i < length + 1; i++){
		for(int j = 0; j < maxw + 1; j++){
			cout << val[i][j] << " ";
		}
		cout << endl;
	}

	//print out which items we get;
	vector<int> items;
	
	int k = maxw;
	
	for(int i = 0; i < length; i++){
		if(val[i][k] != 0 and val[i][k] != val[i + 1][k]){
			items.push_back(i + 1);
			k -= weights[i - 1];
		}
	}


	
    cout << "Items we take: ";
	for(int i = 0; i < items.size(); i++){
		cout << items[i] << " ";
	}
	
	cout << endl;

	return val[length][maxw];
}

int main(){
	int values[] = {60, 100, 120};
	int weights[] = {1, 2, 3};
	int maxw = 5;
	int length = sizeof(values) / sizeof(values[0]);
	cout << knapsack_solution(values, weights, maxw, length) << endl;
	return 0;
}