int compress(vector<char>& chars) {
        if(chars.size() < 2)
            return chars.size();

        for(auto it = chars.begin(); it != chars.end(); )
        {
            auto value = *it;
            auto last = std::find_if_not(it,
                                         chars.end(),
                                         [value](const char& ip) {
                                             return ip == value;
                                         });


            auto repititions = std::distance(it, last);

            if(repititions > 1)
            {
                auto first = std::next(it);
                std::replace(first, last, value, '\0');
                auto count = std::to_string(repititions);
                std::move(count.begin(), count.end(), first);
            }

            std::advance(it, repititions);
        }

        auto tail = std::remove(chars.begin(), chars.end(), 0);
        chars.erase(tail, chars.cend());

        return chars.size();
    }
