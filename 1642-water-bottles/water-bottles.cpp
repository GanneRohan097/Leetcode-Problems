class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty = numBottles;
        int total = numBottles;
        while (empty >= numExchange) {
            if (numBottles % numExchange != 0) {
                empty /= numExchange;
                total += empty;
                empty=numBottles-empty*numExchange+empty;
                numBottles=empty;
            } else {
                numBottles /= numExchange;
                total += numBottles;
                empty /= numExchange;
            }
        }

        return total;
    }
};