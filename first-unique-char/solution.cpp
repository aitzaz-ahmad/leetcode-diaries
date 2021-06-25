int firstUniqChar(string s) {

        if(s.size() < 1 || s.size() > 100000)
            throw std::length_error("s.length must be within the range [1, 100000]");

        auto IsNotLowerAlpha = [](auto val) { return val < 'a' || val > 'z'; };
        if(std::any_of(s.cbegin(), s.cend(), IsNotLowerAlpha))
            throw std::invalid_argument("s must contain lowercase English letters only.");

        if(s.size() == 1)
            return 0;

        if(s.size() == 2)
            return s[0] == s[1] ? -1 : 0;

        auto occurences = std::unordered_map<char, int>{};
        auto CountOccurences = [&occurences](auto val){ ++occurences[val]; };
        std::for_each(s.cbegin(), s.cend(), CountOccurences);

        for(auto it = s.cbegin(); it != s.cend(); ++it)
            if(occurences[*it] == 1)
                return std::distance(s.cbegin(), it);

        return -1;
    }
