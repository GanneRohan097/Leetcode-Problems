class Solution {
public:
    bool isThree(int n) {
        int d=2;
        for(int i=2;i<n;i++){
            if(n%i==0) d++;
        }
        if(d==3) return true;
        return false;
    }
};