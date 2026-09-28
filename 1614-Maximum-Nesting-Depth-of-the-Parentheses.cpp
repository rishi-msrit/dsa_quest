class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxcount = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                count++;

                //maxcount = max(maxcount, count);

                //    if(currentDepth > maxDepth){
                //maxDepth = currentDepth;
            }
            //maxcount = max(maxcount, count);


            if (s[i] == ')') {
                count--;
            }
            maxcount = max(maxcount, count);

        }

        return maxcount;
    }
};