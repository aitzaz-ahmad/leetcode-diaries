string licenseKeyFormatting(string s, int k) {
        if(k < 1 || k > 10000)
            throw out_of_range("'k' must be within the range [1, 10000]");
        
        if(s.size() < 1 || s.size() > 100000)
            throw length_error("'s.length()' must be within the range [1, 100000]");
        
        if(std::any_of(s.cbegin(),
                       s.cend(),
                       [](auto ch) {
                           return ch != '-' && 
                               std::isalnum(static_cast<unsigned char>(ch)) == 0; 
                       }))
            throw invalid_argument("'s' must only contain English letters, digits and dashes ('-')");
        
        auto reformatted = string {};
        auto grouped = 0;
        std::for_each(s.crbegin(),
                      s.crend(),
                      [&reformatted, &grouped, k](auto ch) {
                          if(ch != '-')
                          {
                              reformatted += std::toupper(ch);
                              
                              if(++grouped % k == 0)
                                  reformatted += '-';
                          }
                      });
        
        if(reformatted.back() == '-')
            reformatted.pop_back();
        
        std::reverse(reformatted.begin(), reformatted.end());
        
        return reformatted;
    }
