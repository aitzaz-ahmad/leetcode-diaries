vector<int> runningSum(vector<int>& nums) {
        vector<int> rSum = {};
        
        if(nums.size())
        {
            rSum.assign(1, nums[0]);
        
            for(size_t id = 1; id < nums.size(); id++)
                rSum.emplace_back(rSum[id - 1] + nums[id]); 
        }
        
        return rSum;
    }
