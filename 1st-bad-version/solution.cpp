// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {

    if (n < 1)
        throw std::out_of_range("'n' must be within the range [1, 2^31 - 1]");

    if (n == 1)
        return n;

    auto first = 1;
    auto last = n;

    while(first < last) {

        auto check = first + (last - first)/2;

        if(isBadVersion(check))
            last = check;
        else
            first = check + 1;
    }

    return last;
}
