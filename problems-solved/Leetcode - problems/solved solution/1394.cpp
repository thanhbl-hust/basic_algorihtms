class Solution {
public:
    int findLucky(vector<int>& arr) {
        int value = -1;
        sort(arr.begin(), arr.end());
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] != arr[i - 1]){
                if(count(arr.begin(), arr.end(), arr[i]) == arr[i]){
                    if(arr[i] > value){
                        value = arr[i];
                    }
                }
            }
        }
        if(count(arr.begin(), arr.end(), arr[0]) == arr[0]){
            if(arr[0] > value){
                value = arr[0];
            }
        }
        return value;
    }
};