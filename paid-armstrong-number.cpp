class Solution {
  public:
    bool armstrongNumber(int n) {
        if(n < 0){
            return false;}
        int originalNum = n;
        long long int newNum=0;
        while(n!=0){
            int lastd = n % 10;
            newNum = newNum+(lastd*lastd*lastd);
            n = n/10;
        }
        return originalNum == newNum;
        
    }
};

