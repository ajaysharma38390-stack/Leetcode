class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        // int min_index = 0;
        // for(int i=0;i<n-1;i++){
        //     min_index = i;
        //     for(int j=i+1;j<n;j++){
        //         if(nums[j] < nums[min_index]){
        //             // swap(nums[min_index],nums[j]);
        //             min_index = j;
        //         }


        //     }
        //     swap(nums[i],nums[min_index]);
        // }
        int low = 0,mid = 0,high = n-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
       
    }
};