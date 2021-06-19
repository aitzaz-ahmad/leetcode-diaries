int maximumProduct(vector<int>& nums) {

        if(nums.size() < 3 || nums.size() > 10000)
            throw std::length_error("nums.length must be within the range [3, 10000]");

        auto IsOutOfRange = [](auto value) {

            return value < -1000 || value > 1000;
        };

        if(std::any_of(nums.cbegin(), nums.cend(), IsOutOfRange))
            throw std::invalid_argument("nums[i] must be within the range [-1000, 1000]");

        if(nums.size() == 3) //do not perform the sort unnecessarily!
            return nums[0] * nums[1] * nums[2];
        else
        {
            std::sort(nums.begin(), nums.end());

            //the product of the top 3 biggest values
            auto product1 = nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3];

            //the product of the 2 most -ve numbers with the max value in the `nums`
            auto atLeast2Negative = nums[0] < 0 && nums[1] < 0;
            auto product2 = atLeast2Negative ? nums[0] * nums[1] * nums.back() : 0;

            //select the bigger value out of the two products
            return std::max(product1, product2);
        }
    }
