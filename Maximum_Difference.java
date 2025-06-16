class Solution {
    public int maximumDifference(int[] nums) {
        int n= nums.length;
        int i=0;
        int j=1;
        int old_max=nums[j]-nums[i];
        int new_max=0;
        for (i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                new_max=nums[j]-nums[i];
                if(new_max>old_max && new_max>0){
                    old_max=new_max;
                }
            }
        }if(old_max>0){
            return old_max;
        }
        else{
            return -1;
        }
    }
}
