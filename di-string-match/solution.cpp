vector<int> diStringMatch(string s) {

        if(s.size() < 1 || s.size() > 100000)
            throw std::length_error("s.length must be within the range [1, 100000]");

        if(s.find_first_not_of("I,D") != string::npos)
            throw std::invalid_argument("s[i] must be either 'I' or 'D'");

        auto index = 0;
        auto smallest = 0;
        auto largest = s.size();
        auto perm = vector<int>(s.size() + 1);

        for(auto val: s)
            perm[index++] = val == 'I' ? smallest++ : largest--;

        perm[s.size()] = largest;

        return perm;
    }
