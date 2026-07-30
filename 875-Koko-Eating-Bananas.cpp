class Solution {
public:
    bool canFinish(vector<int>& piles, int speed, int h){
        long int hours = 0;
        for(int i=0;i<piles.size();i++){
            hours += (piles[i] + speed - 1) / speed;
        }
        return(hours <= h);
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low= 1;
        int mid;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while(low <= high){
            mid = (low+high)/2;

            if(canFinish(piles, mid, h)){
                ans = mid;
                high = mid - 1;
            }
            else{low = mid + 1;}
        }
        return ans;

        
    }
};