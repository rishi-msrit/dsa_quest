class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int five = 0, ten = 0, twt = 0;

        for (int i = 0; i < n; i++) {
            if (bills[i] == 5) {
                five++;
                continue;
            }
            if (bills[i] == 10) {
                ten++;
                if (five == 0) {
                    return false;
                    break;
                } else
                    five--;
            }
            if (bills[i] == 20) {
                twt++;
                if (ten > 0 and five > 0) {
                    five--;
                    ten--;
                } else if (five > 2) {
                    five -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};