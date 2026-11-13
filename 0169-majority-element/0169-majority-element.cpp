class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int elm;
        for(int i=0;i<n;i++){
            if(count == 0){
                count++;
                elm = nums[i];
            }
            else if(elm == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int count1 = 0;
        for(int i=0;i<n;i++){
            if(elm == nums[i]){
                count++;
            }
        }
        if(count > n/2){
            return elm;
        }
        return -1;
    }
};