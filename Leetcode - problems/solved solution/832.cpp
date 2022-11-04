class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a) {
        int length = a.size();
        //flip = reversed every row;
        for(int i = 0; i < length; i++){
            for(int j = 0; j < length / 2; j++){
                int tmp = a[i][j];
                a[i][j] = a[i][length - j - 1];
                a[i][length - 1 - j] = tmp;
            }
        }
        //invert;
        for(int i = 0; i < length; i++){
            for(int j = 0; j < length; j++){
                if(a[i][j] == 0){
                    a[i][j] = 1;
                }else{
                    a[i][j] = 0;
                }
            }
        }
        return a;
    }
};