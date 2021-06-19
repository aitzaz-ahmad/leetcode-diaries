int lengthOfLongestSubstring(string s) {
        if(s.empty())
            return 0;

        std::set<char> visited = {};
        auto substrLen = 0;

        for(auto pos = 0; pos < s.size(); pos++)
        {
            visited.insert(s[pos]);

            for(auto it = pos + 1; it < s.size(); it++)
            {
                auto res = visited.insert(s[it]);
                if(res.second == false) //viola, a repetition!
                    break;
            }

            substrLen = std::max(substrLen, static_cast<int>(visited.size()));

            visited.clear();
        }

        return substrLen;
    }
