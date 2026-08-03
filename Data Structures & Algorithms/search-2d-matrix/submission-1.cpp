class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0, right = matrix.size()-1, mid = 0;
        int target_row = 0;
        while(left <= right) {
            mid = (left+right) / 2;
            if(matrix[mid][0] <= target && matrix[mid][matrix[mid].size()-1] >= target){
                target_row = mid;
                break;
            }
            else if(matrix[mid][0] >= target){
                right = mid-1;
            }
            else left = mid+1;
        }

        left = 0, right = matrix[target_row].size() - 1, mid = 0;
        while(left <= right) {
            mid = (left+right) / 2;
            if(matrix[target_row][mid] == target) return true;
            else if(matrix[target_row][mid] < target) left = mid+1;
            else right = mid-1;
        }
        return false;
    }
};
