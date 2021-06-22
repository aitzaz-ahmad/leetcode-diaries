vector<int> findDisappearedNumbers(vector<int>& nums) {

        if(nums.size() < 1 || nums.size() > 100000)
            throw std::length_error("nums.size() must be within the range [1, 100000]");

        auto IsOutOfRange = [max = nums.size()](auto val) { return val < 1 || val > max; };
        if(std::any_of(nums.cbegin(), nums.cend(), IsOutOfRange))
            throw std::invalid_argument("nums[i] must be within the range [1, n], where n = nums.length");

        auto missingNums = vector<int>(nums.size());
        for(auto id = 0; id < nums.size(); id++)
            missingNums[id] = id + 1;

        for(auto id = 0; id < nums.size(); id++)
            missingNums[nums[id] - 1] = 0;

        auto last = std::remove(missingNums.begin(), missingNums.end(), 0);
        missingNums.erase(last, missingNums.end());

        return missingNums;
    }
