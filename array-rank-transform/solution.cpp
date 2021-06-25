vector<int> arrayRankTransform(vector<int>& arr) {

        if(arr.size() > 100000)
            throw std::length_error("arr.length must be within the range [0, 100000]");

        auto IsOutOfRange = [](auto val) { return val < -1000000000 || val > 1000000000; };
        if(std::any_of(arr.cbegin(), arr.cend(), IsOutOfRange))
            throw std::out_of_range("arr[i] must be within the range [-1000000000, 1000000000]");
        
        if(arr.size() == 0)
            return {};

        if(arr.size() == 1)
            return { 1 };

        auto elements = std::vector<int> {};
        std::copy(arr.begin(), arr.end(), std::back_inserter(elements));
        std::sort(elements.begin(), elements.end());
        auto last = std::unique(elements.begin(), elements.end());
        elements.erase(last, elements.end());

        auto rank = 1;
        auto ranksMapping = std::map<int, int> {};
        for(auto val: elements)
            ranksMapping[val] = rank++;

        auto id = 0;
        auto ranks = std::vector<int>(arr.size());
        for(auto element: arr)
            ranks[id++] = ranksMapping[element];

        return ranks;
    }
