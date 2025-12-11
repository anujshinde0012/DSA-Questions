class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {

        unordered_map<int, int> rowMin, rowMax;
        unordered_map<int, int> colMin, colMax;

        // Build boundaries for each row and column
        for (auto &b : buildings) {
            int x = b[0], y = b[1];

            // Row boundaries
            if (!rowMin.count(x)) {
                rowMin[x] = rowMax[x] = y;
            } else {
                rowMin[x] = min(rowMin[x], y);
                rowMax[x] = max(rowMax[x], y);
            }

            // Column boundaries
            if (!colMin.count(y)) {
                colMin[y] = colMax[y] = x;
            } else {
                colMin[y] = min(colMin[y], x);
                colMax[y] = max(colMax[y], x);
            }
        }

        int covered = 0;

        // Check each building in O(1)
        for (auto &b : buildings) {
            int x = b[0], y = b[1];

            bool left  = (rowMin[x] < y);
            bool right = (rowMax[x] > y);
            bool up    = (colMin[y] < x);
            bool down  = (colMax[y] > x);

            if (left && right && up && down)
                covered++;
        }

        return covered;
    }
};
