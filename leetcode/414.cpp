class Solution {
public:
    int thirdMax(vector<int>& nums) {
        bool exist = false;
        bool sec_exist = false;
        long long max,sec=LONG_MIN,thid=LONG_MIN;
        max = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
          if(nums[i]>max)
          {
              thid = sec;
              sec = max;
              max = nums[i];
          }else if(nums[i] > sec && nums[i] < max)
          {
              thid = sec;
              sec = nums[i];
          }else if(nums[i] > thid && nums[i] < sec){ thid = nums[i]; }
        }
        if(thid > LONG_MIN) return thid;
        else return max;
    }
};


