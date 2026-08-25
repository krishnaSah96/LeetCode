class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> count (1001 , 0);

        for (int num : nums){

            count[ num ]++;
        }

        int multiple = k;

        while (true){

            if ( count[multiple] == 0){
                return multiple;
            }
            multiple = multiple + k;
        }
        
        
    }
};