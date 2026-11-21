class Solution {
public:
    bool isHappy(int n) {
      unordered_set<int> numbers;
        while(n!=1 && !numbers.contains(n)){
            int s=0;
            numbers.insert(n);
            while(n!=0){
                int r = n%10;
                s=s+r*r;
                n/=10;
            }
            n=s;
        }
       return (n==1);
    }
};