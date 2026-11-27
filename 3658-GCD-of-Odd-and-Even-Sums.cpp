class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        return n;   
    }
};
// class Solution {
// public:
//     int gcdOfOddEvenSums(int n) {
//         int sumOdd = 0, sumEven = 0;
//         for(int i = 1; i <= n*2; i++){
//             if(i % 2 != 0){
//                 sumOdd+=i;
//             }
//             else{
//                 sumEven+=i;
//             }
//         }
//         return gcd(sumOdd,sumEven);
        
//     }
// };