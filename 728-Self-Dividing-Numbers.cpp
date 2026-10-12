class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int>ans;
        bool f = true;
        for(int i=left;i<=right;i++)
        {
            int n = i;
            int num = i;
            while(n>0)
            {
                int d = n%10;
                if(d==0)
                {
                    f = false;
                    break;
                }
                if(d!=0 && num%d!=0) 
                {
                    f = false;
                    break;
                } 
                n=n/10;
            } 
            if(f==true )ans.push_back(num);
            f = true;
        }
        return ans;
    }
};