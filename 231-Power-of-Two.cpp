class Solution {
public:
    bool isPowerOfTwo(int n) {
        for ( int i = 0; i < 31; i++){
            int z = pow(2,i);

            if(z == n){ return true;}
        }
        return false;
        
    }
};