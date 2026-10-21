class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res(n);
        int half=n/2;
        int i=0;
        while(i<half){
            res[i]=-(half)+i;
            i++;
        }
        if(n%2==0){
            while(i<n){
                res[i]=i-half+1;
                i++;
            }
        }
        else{
            i++;
            while(i<n){
                res[i]=i-half;
                i++;
            }
        }
        return res;

    }
};