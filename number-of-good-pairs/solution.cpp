int numIdenticalPairs(vector<int>& nums) {
        if(nums.size() < 1 || nums.size() > 100)
            throw std::length_error("nums.length must be within the range [1, 100]");

        auto IsOutOfRange = [](const auto val) {
                           return val < 1 || val > 100;
        };
        if(std::any_of(nums.cbegin(), nums.cend(), IsOutOfRange))
            throw std::out_of_range("nums[i] must be within the range [1, 100]");

        auto goodPairs = 0;
        for(auto i = 0; i < nums.size() - 1; i++)
            for(auto j = i + 1; j < nums.size(); j++)
                if(nums[i] == nums[j])
                    goodPairs++;

        return goodPairs;
    }
