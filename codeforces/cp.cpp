#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;

        int len = height.size();

        for(int i = 0; i <len - 1; i++) {
            for(int j = i + 1; j < len; j++) {
                int area = min(height[i], height[j]) * (j - i);
                result = max(result, area);
            }
        }

        return result;
    }
};

int main(){
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << sol.maxArea(height) << endl;
    return 0;
}


