//
// Created by 张啸宇 on 2019-05-02.
//

#ifndef LEETCODE_TRIANGLE_H
#define LEETCODE_TRIANGLE_H

#include <vector>

using namespace std;

class triangle {
public:
    int minimumTotal(vector<vector<int>> &triangle) {

        for (int i = triangle.size() - 2; i >= 0; i--) {
            for (int j = 0; j < triangle[i].size(); ++j) {
                triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);
            }
        }
        return triangle[0][0];
    }
};


#endif //LEETCODE_TRIANGLE_H
