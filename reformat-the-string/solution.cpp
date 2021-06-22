string reformat(string s) {

        if(s.size() < 1 || s.size() > 500)
            throw std::length_error("s.length must be within the range [1, 500]");
        
        if(s.size() == 1)
            return s;

        auto digits = 0;
        auto alphabets = 0;

        for(auto ch: s)
            if(std::isdigit(ch))
                ++digits;
            else
                ++alphabets;

        auto isEven = s.size() % 2 == 0;
        if((isEven && digits != alphabets) ||
          (!isEven && std::abs(digits - alphabets) != 1))
            return "";

        constexpr std::string_view DIGITS = "1234567890";
        auto prevDigit = s.find_first_of(DIGITS);
        auto prevAlpha = s.find_first_not_of(DIGITS);
        auto reformatted = string {};

        while(reformatted.size() < s.size())
        {
            if(digits > alphabets)
            {
                reformatted += s[prevDigit];

                if(prevAlpha != string::npos)
                    reformatted += s[prevAlpha];
            }
            else
            {
                reformatted += s[prevAlpha];

                if(prevDigit != string::npos)
                    reformatted += s[prevDigit];
            }

            prevDigit = s.find_first_of(DIGITS, ++prevDigit);
            prevAlpha = s.find_first_not_of(DIGITS, ++prevAlpha);
        }

        return reformatted;
    }
