class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> newtemp;
        bool inserted = false;

        for (int i = 0; i < intervals.size(); i++) {
            if (!inserted && intervals[i][0] > newInterval[0]) {
                newtemp.push_back(newInterval);
                inserted = true;
            }

            newtemp.push_back(intervals[i]);
        }

        if (!inserted) {
            newtemp.push_back(newInterval);
        }

        int currentStart = newtemp[0][0];
        int currentEnd = newtemp[0][1];

        vector<vector<int>> mergedIntervals;

        for (int i = 1; i < newtemp.size(); ++i) {
            if (currentEnd < newtemp[i][0]) {
                mergedIntervals.push_back({currentStart, currentEnd});
                currentStart = newtemp[i][0];
                currentEnd = newtemp[i][1];
            } else {
                currentEnd = max(currentEnd, newtemp[i][1]);
            }
        }
        mergedIntervals.push_back({currentStart, currentEnd});
        return mergedIntervals;
    }
};
