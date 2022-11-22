//array to solved from geeks;
//solution: 5;

//tim day con khong giam dai nhat;

#include<bits/stdc++.h>

using namespace std;

int longestsub_solution(int arr[], int length){

    vector<int> count;
    for(int i = 0; i < length; i++){
        count.push_back(1);
    }

    for(int i = 1; i < length; i++){
        for(int j = 0; j < i; j++){
            if(arr[j] <= arr[i] and count[j] + 1 > count[i]){
                count[i] = count[j] + 1;
            }
        }
    }

    
    return *max_element(count.begin(), count.end());
}

int main(){
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << longestsub_solution(arr, length) << endl;

    return 0;
}