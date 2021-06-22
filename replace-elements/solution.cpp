vector<int> replaceElements(vector<int>& arr) {
        if(arr.size() < 1 || arr.size() > 10000)
            throw std::length_error("arr.length must be within the range [1, 10000]");

        auto IsOutOfRange = [](auto val) {return val < 1 || val > 100000; };
        if(std::any_of(arr.cbegin(), arr.cend(), IsOutOfRange))
            throw std::invalid_argument("arr[i] must be within the range [1, 100000]");

        auto max = -1;
        for(auto it = arr.rbegin(); it != arr.rend(); it++)
        {
            auto val = *it;
            *it = max;
            max = std::max(val, max);
        }

        return arr;
    }
