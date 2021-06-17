bool areAlmostEqual(string s1, string s2) {

        auto IsInvalidChar = [](auto ch) { return ch < 'a' || ch > 'z'; };

        if (std::any_of(s1.cbegin(), s1.cend(), IsInvalidChar))
            throw std::invalid_argument("s1 must contain lowercase English letters only");

        if (std::any_of(s2.cbegin(), s2.cend(), IsInvalidChar))
            throw std::invalid_argument("s2 must contain lowercase English letters only");

        if (s1.size() < 1 || s1.size() > 100)
            throw std::length_error("s1.length must be within the range [1, 100]");

        if (s2.size() < 1 || s2.size() > 100)
            throw std::length_error("s2.length must be within the range [1, 100]");

        if (s1.size() != s2.size())
            return false;

        auto mismatch1 = std::mismatch(s1.cbegin(), s1.cend(), s2.cbegin(), s2.cend());

        if (mismatch1.first == s1.cend())
            return true; //s1 and s2 are equal

        if (std::next(mismatch1.first) == s1.cend())
            return false; //the mismatch occured on the last character

        auto mismatch2 = std::mismatch(std::next(mismatch1.first), s1.cend(),
            std::next(mismatch1.second), s2.cend());

        if (mismatch2.first == s1.cend())
            return false; //there was only 1 mismatch between s1 and s2

        //swap the elements in s1 for both the mismatches and compare with s2
        std::swap(s1[std::distance(s1.cbegin(), mismatch1.first)],
            s1[std::distance(s1.cbegin(), mismatch2.first)]);

        return s1 == s2;
    }
