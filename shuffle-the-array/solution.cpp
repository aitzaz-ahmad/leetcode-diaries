vector<int> shuffle(vector<int>& nums, int n) {

        //validate inputs
        if(n < 1 || n > 500)
            throw std::out_of_range("n must be within the range [1, 500]");

        if(nums.size() != 2*n)
            throw std::length_error("nums.length must be 2n");

        auto IsOutOfRange = [](const auto val) {
                                     return val < 1 || val > 1000;
        };

        if(std::any_of(nums.cbegin(), nums.cend(), IsOutOfRange))
            throw std::out_of_range("nums[i] must be within the range [1, 1000]");

        //we're certain that the inputs valid over here!
        auto shuffled = vector<int>(nums.size());
        auto left = 0;
        auto right = n;
        for(auto it = 0; it < nums.size(); )
        {
            shuffled[it++] = nums[left++];
            shuffled[it++] = nums[right++];
        }

        return shuffled;
    }
