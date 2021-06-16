vector<string> stringMatching(vector<string>& words) {
        vector<string> substrs = {};

        struct is_substr {
            const string _token;
            is_substr(const string& str): _token(str) {}
            bool operator()(const string& str) {
                if(str == _token)
                    return false;

                return std::search(str.cbegin(), str.cend(), _token.cbegin(), _token.cend()) != str.cend();
            }
        };

       auto filter_if_substr = [data = words, &substrs](const string& token){
            auto res = std::find_if(data.cbegin(),
                                   data.cend(),
                                   is_substr(token));
            if(res != data.cend())
                substrs.emplace_back(token);
        };

        std::for_each(words.cbegin(), words.cend(), filter_if_substr);

        return substrs;
    }
