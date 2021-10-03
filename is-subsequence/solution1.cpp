bool isSubsequence(string s, string t) {

    if(s.size() > 100)
        throw std::length_error("s.length must not be greater than 100");

    if(t.size() > 10000)
        throw std::length_error("t.length must not be greater than 10000");

    auto IsNotLowerAlpha = [](auto ch) { return ch < 'a' || ch > 'z'; };
    if(std::any_of(s.cbegin(), s.cend(), IsNotLowerAlpha))
        throw std::invalid_argument("s must consist lowercase English letters only.");

    if(std::any_of(t.cbegin(), t.cend(), IsNotLowerAlpha))
        throw std::invalid_argument("t must consist lowercase English letters only.");

    //case1: s is empty and t is also empty, return true
    //case2: s is empty but t is not empty, return true
    if(s.empty())
        return true;

    //case3: s in not empty but t is empty, return false
    //case4: s is longer than t, return false
    if(s.size() > t.size())
        return false;

    //case5: neither s is empty nor t is empty, return [is s a subseq of t?]
    auto lastMatched = -1;
    auto itSource = size_t {0};

    do {
        lastMatched = t.find_first_of(s[itSource++], lastMatched + 1);
    } while(lastMatched != string::npos && itSource < s.size());

    return lastMatched != string::npos;
}
