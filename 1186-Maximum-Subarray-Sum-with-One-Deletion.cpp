class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int power = 0; // iska mtlb first element ko hi delete kr chuke hai
        int nopower = arr[0]; // iska matlb abhi tk kuch delete nhi kiye hai first element sath me hi hai
        int res = arr[0];
        for (int i = 1; i < n; i++) {
            int v1 = arr[i]; // Pehle wale ko consider nhi krenge khud ka bnayenge
            int v2 = nopower + arr[i]; // Pehle wale ke sath milkar bnayenge
            int v3 = power + arr[i]; // Pehle se one delete ho chuka hai usme add ho jayenge
            int v4 = nopower; // Current element ko delete krenge
            res = max(res, max(max(v1, v2), max(v3, v4))); // Charo ka jo maximum hoga whi answer hoga
            nopower = max(v1, v2);  // yha nopower ko update kr rhe h ki jb delete nhi kiye hai to dono me se maximum koun sa hai
            power = max(v3, v4); // Agr ek delete kiye hai to maximum ky hai
        }
        return res;
    }
};