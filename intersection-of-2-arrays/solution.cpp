vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        if(nums1.size() < 1 || nums1.size() > 1000)
            throw std::length_error("nums1.length must be within the range [1, 1000]");

        if(nums2.size() < 1 || nums2.size() > 1000)
            throw std::length_error("nums2.length must be within the range [1, 1000]");

        auto IsOutOfRange = [](auto val) { return val < 0 || val > 1000; };
        if(std::any_of(nums1.cbegin(), nums1.cend(), IsOutOfRange))
           throw std::out_of_range("All nums1[i] must be within the range [0, 1000]");

        if(std::any_of(nums2.cbegin(), nums2.cend(), IsOutOfRange))
           throw std::out_of_range("All nums2[i] must be within the range [0, 1000]");

        //now we're certain the inputs are valid!
        auto smaller = nums1.size() < nums2.size() ? nums1 : nums2;
        auto larger = nums2.size() > nums1.size() ? nums2 : nums1;

        //sort and remove duplicates from both the inputs
        std::sort(smaller.begin(), smaller.end());
        auto last = std::unique(smaller.begin(), smaller.end());
        smaller.erase(last, smaller.end());

        std::sort(larger.begin(), larger.end());
        last = std::unique(larger.begin(), larger.end());
        larger.erase(last, larger.end());

        //find the intersection using binary search (O(M.log(N)))
        auto intersection = vector<int> {};
        for(auto val: smaller)
        {
            if(std::binary_search(larger.cbegin(), larger.cend(), val))
                intersection.emplace_back(val);
        }

        return intersection;
    }
