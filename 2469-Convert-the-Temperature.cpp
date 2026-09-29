class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> arr;
        arr.push_back(celsius + 273.15);
        arr.push_back( celsius * 1.80 + 32.00);
        return arr;
        
    }
};

// class Solution {
// public:
//     vector<double> convertTemperature(double celsius) {
//         return {celsius+273.15,(celsius*1.80)+32.00};
        
//     }
// };