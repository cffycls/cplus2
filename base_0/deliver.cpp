﻿//
// Created by cffyc on 2020/4/18.
//
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int numWays(int n, vector<vector<int>>& relation, int k) {
        vector<int> a(n);
        a[0]=1;
        for(int i=0;i<k;++i){
            vector<int> b(n);
            for(auto& r:relation){
                b[r[1]]+=a[r[0]];
            }
            swap(a,b);
        }
        return a[n-1];
    }
};

int main()
{
    // n = 5, relation = [[0,2],[2,1],[3,4],[2,3],[1,4],[2,0],[0,4]], k = 3
    //解释：信息从小 A 编号 0 处开始，经 3 轮传递，到达编号 4。共有 3 种方案，分别是 0->2->0->4， 0->2->1->4， 0->2->3->4。
    vector<vector<int>> vv({{0,2}, {2,1}, {3,4}, {2,3}, {1,4}, {2,0}, {0,4}});
    int num = (new Solution())->numWays(5, vv, 3);
    cout << num <<endl;

    return 0;
}