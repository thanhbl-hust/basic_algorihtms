//Cutting Rod problem;

#include<bits/stdc++.h>

using namespace std;

int solution_cuttingRod(int prices[], int length){
    vector<vector<int>> value(length + 1, vector<int> (length + 1));
    //i is cut;
    //j is limit;
    for(int i = 0; i < length + 1; i++){
        for(int j = 0; j < length + 1; j++){
            if(i == 0 || j == 0){
                value[i][j] = 0;
            }else if(j < i){
                //i la doan cat dai hon j la doan cho phep
                value[i][j] = value[i - 1][j];
            }else{
                value[i][j] = max(value[i - 1][j], prices[i - 1] + value[i][j - i]);
                                                //canuse value prices[i - 1] + value[i][j - i] for one length multiple times;
            }
        }
    }
    //see length of pieces;
    for(int i = 0; i < length + 1; i++){
        for(int j = 0; j < length + 1; j++){
            cout << value[i][j] << " ";
        }
        cout << endl;
    }


    vector<int> lengths;

    int rowLength = length;
    int colLength = length;
    while(rowLength > 0 and colLength > 0){
        if(value[rowLength][colLength] == value[rowLength - 1][colLength]){
            rowLength -= 1;
        }
        length.push_back(rowLength); //doan cat di;
        colLength -= rowLength;

    }



    for(int i = 0; i < lengths.size(); i++){
        cout << lengths[i] << " ";
    }
    cout << endl;




    return value[length][length];
}

int main(){
    int prices[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int length = sizeof(prices) / sizeof(prices[0]);
    cout << solution_cuttingRod(prices, length) << endl;
    return 0;
}