class Solution {
private:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int daysNeeded = 0;
        int currentWeight = 0;
        
        for (int weight : weights) {
            if (currentWeight + weight > capacity) {
                // Need another day
                daysNeeded++;
                currentWeight = weight;
            } else {
                currentWeight += weight;
            }
        }
        daysNeeded++;//Account for the final batch of packages left on the last ship.
        return daysNeeded <= days;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int high = 0;
        for (int weight : weights) {
            low = max(low, weight);
            high += weight;
        }
        
        int ans = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (canShip(weights, days, mid)) {
                ans = mid;        // Try finding a smaller valid capacity
                high = mid - 1;
            } else {
                low = mid + 1;    // Capacity is too small, increase it
            }
        }
        
        return ans;
    }
};