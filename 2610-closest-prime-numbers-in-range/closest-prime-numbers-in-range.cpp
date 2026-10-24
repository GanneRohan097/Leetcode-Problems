class Solution {
public:
    bool isPrime(int n) {
        if(n==1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> pList;
        vector<int> res(2);
        for (int i = left; i <= right; i++) {
            if (isPrime(i)) {
                pList.push_back(i);
            }
        }
        if (pList.size() <= 1) {
            return {-1, -1};
        }
        if(pList.size()==2){
            return pList;
        }
        int mn = pList[1] - pList[0];
        res[0] = pList[0];
        res[1] = pList[1];
        for (int i = 1; i < pList.size() - 1; i++) {
            if (pList[i + 1] - pList[i] < mn) {
                mn = pList[i + 1] - pList[i];
                res[0] = pList[i];
                res[1] = pList[i+1];
            }
        }
        return res;
    }
};