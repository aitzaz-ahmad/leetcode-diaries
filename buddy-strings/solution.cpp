inline bool hasRepition(string& s) {
    std::sort(s.begin(), s.end());
    return std::adjacent_find(s.cbegin(), s.cend()) != s.cend();
}

bool buddyStrings(string s, string goal) {

    if(s.size() < 1 || s.size() > 20000)
        throw std::length_error("s.length must be within the range [1, 20000]");

    if(goal.size() < 1 || goal.size() > 20000)
        throw std::length_error("goal.length must be within the range [1, 20000]");

    auto IsNotLowerAlpha = [](auto ch) { return ch < 'a' || ch > 'z'; };
    if(std::any_of(s.cbegin(), s.cend(), IsNotLowerAlpha))
        throw std::invalid_argument("s must consist lowercase letters only.");

    if(std::any_of(goal.cbegin(), goal.cend(), IsNotLowerAlpha))
        throw std::invalid_argument("goal must consist lowercase letters only.");

    if(s.size() == 1 || goal.size() == 1)
        return false; //"it takes two to tango!" (read "swap")

    if(s.size() != goal.size())
        return false; //as Plato said, equality creates friendship. size does matter after all!

    if(s == goal) 
        return hasRepition(s);

    auto firstMismatch = std::mismatch(s.cbegin(), s.cend(), goal.cbegin(), goal.cend());
    if(firstMismatch.first == s.cend())
        return false;

    auto sBegin = std::next(firstMismatch.first);
    auto goalBegin = std::next(firstMismatch.second);
    auto secondMismatch = std::mismatch(sBegin, s.cend(), goalBegin, goal.cend());

    if(secondMismatch.first == s.cend())
        return false;

    auto firstIdx = std::distance(s.cbegin(), firstMismatch.first);
    auto secondIdx = std::distance(s.cbegin(), secondMismatch.first);
    std::swap(s[firstIdx], s[secondIdx]);

    return s == goal;
}
