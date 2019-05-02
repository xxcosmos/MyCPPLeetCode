//
// Created by 张啸宇 on 2019-05-02.
//

#ifndef LEETCODE_PASCALS_TRIANGLE_H
#define LEETCODE_PASCALS_TRIANGLE_H

#include <vector>

using namespace std;

class pascals_triangle {

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for (int i = 0; i < numRows; ++i) {
            triangle.push_back({1});
            for (int j = 1; j < i + 1; ++j) {
                if (j == i) {
                    triangle[i].push_back(1);
                } else {
                    triangle[i].push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
                }
            }
        }
        return triangle;
    }
};


#endif //LEETCODE_PASCALS_TRIANGLE_H
