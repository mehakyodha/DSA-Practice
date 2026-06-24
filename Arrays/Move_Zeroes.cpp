class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        } 
        if(j==INT_MIN) return ;

        for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    }
};
