constexpr bool IsVowel(const char ch) {
        switch(ch)
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                return true;
            default:
                return false;
        }
    }

    string reverseVowels(string s) {
        if(s.size() < 1 || s.size() > 300000)
            throw std::length_error("s.length must be within the range [1, 300000]");

        if(s.size() == 1)
            return s;

        auto vowelIndices = std::vector<size_t>{};
        for (auto it = s.cbegin(); it != s.cend(); it++)
            if(IsVowel(*it))
                vowelIndices.emplace_back(std::distance(s.cbegin(), it));

        if(vowelIndices.size() == s.size()) //contains vowels only
            std::reverse(s.begin(), s.end());
        else if(vowelIndices.size() >= 2) //contains vowels and consonants, both
        {
            auto count = vowelIndices.size();
            auto mid = count % 2 == 0 ? count/2 :  count/2 + 1;

            for(auto offset = 0; offset < mid; offset++)
                std::swap(s[vowelIndices[offset]], s[vowelIndices[count - offset - 1]]);
        }

        return s;
    }
