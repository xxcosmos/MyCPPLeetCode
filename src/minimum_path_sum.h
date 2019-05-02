//
// Created by 张啸宇 on 2019-05-02.
//

#ifndef LEETCODE_MINIMUM_PATH_SUM_H
#define LEETCODE_MINIMUM_PATH_SUM_H

#include <vector>

using namespace std;

class minimum_path_sum {
public:
    int minPathSum(vector<vector<int>> &grid) {
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                if (i == 0 && j == 0)
                    continue;
                if (i == 0) {
                    grid[i][j] += grid[i][j - 1];
                } else if (j == 0) {
                    grid[i][j] += grid[i - 1][j];
                } else {
                    grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
                }

            }
        }
        return grid.back().back();
    }
};


#endif //LEETCODE_MINIMUM_PATH_SUM_H
