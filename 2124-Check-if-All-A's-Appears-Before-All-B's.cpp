class Solution {
public:
    bool checkString(string s) {
        int temp = 0;
        int temp1 = 0;
        int temp2 = 0;

        if(s[0] == 'a'){
            temp = 1;
        }
        else{
            temp = -1;
        }

        for (int i = 1; i < s.size(); i++) {
            temp1 = temp;

            if (s[i] == 'a') {
                temp = 1;
            }
            else {
                temp = -1;
            }

            if (temp != temp1) {
                temp2++;
            }

            if (temp2 >= 2) {
                return false;
            }
        }

        if (temp2 == 1 && s[s.size() - 1] == 'a') {
            return false;
        }

        return true;
    }
};

//class Solution {
// public:
//     bool checkString(string s) {
//         bool foundB = false;

//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] == 'b') {
//                 foundB = true;
//             }

//             if (s[i] == 'a' && foundB) {
//                 return false;
//             }
//         }

//         return true;
//     }
// };