class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        int right=k;
        double sum=0;
        double avg = 0;
        double newavg = 0;
        double newsum = 0;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        avg = sum/k;
        newavg = avg;
        newsum =sum;

        for(int j=k; j < nums.size(); j++){
            newsum = newsum - nums[j-k] + nums[j];
            
            newavg = newsum /k;
            avg = max(newavg, avg);
        }
        return avg; 
    }
};