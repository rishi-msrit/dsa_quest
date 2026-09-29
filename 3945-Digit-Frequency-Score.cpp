// class Solution {
// public:
//     int digitFrequencyScore(int n) {
//         unordered_map<int, int> mp;
//         int sum = 0, m = 0;
//         while(n > 0){
//             int i = 0;
//             m = n % 10;
//             n /= 10;
//             mp[m]++;
//             i++;
//         }

//         for( int i=0; i< mp.size(); i++){
//             sum += i*mp[i];
//         }
//         return sum;
        
//     }
// };

class Solution {
public:
    int digitFrequencyScore(int n) {
        int arr[10]={0};
        while(n>0){
            int a=n%10;
            arr[a]++;
            n/=10;
        }
        int s =0;
        for(int i=0;i<10;i++){
            s+=i*arr[i];
        }
        return s;
    }
};