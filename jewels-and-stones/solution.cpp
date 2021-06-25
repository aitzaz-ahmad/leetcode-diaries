int numJewelsInStones(string jewels, string stones) {

        if(jewels.size() < 1 || jewels.size() > 50)
            throw std::length_error("jewels.length must be within the range [1, 50]");

        if(stones.size() < 1 || stones.size() > 50)
            throw std::length_error("stones.length must be within the range [1, 50]");

        auto IsNotAlpha = [](auto ch) { return std::isalpha(ch) == 0; };
        if(std::any_of(jewels.cbegin(), jewels.cend(), IsNotAlpha))
            throw std::invalid_argument("jewels must consist of English letters only.");

        if(std::any_of(stones.cbegin(), stones.cend(), IsNotAlpha))
            throw std::invalid_argument("stones must consist of English letters only.");

        return std::count_if(stones.cbegin(),
                            stones.cend(),
                            [&jewels](const auto stone){
                                return jewels.find_first_of(stone) != string::npos;
                            });
    }
