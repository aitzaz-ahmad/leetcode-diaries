vector<vector<int>> permute(vector<int>& nums) {

    if(nums.size() < 1 || nums.size() > 6)
        throw std::length_error("nums.length must be within the range [1, 6]");

    auto IsOutOfRange = [](const auto val){ return val < -10 || val > 10; };
    if(std::any_of(nums.cbegin(), nums.cend(), IsOutOfRange))
        throw std::out_of_range("nums[i] must be within the range [-10, 10]");

    std::sort(nums.begin(), nums.end());
    if(std::unique(nums.begin(), nums.end()) != nums.end())
        throw std::invalid_argument("nums must contain unique elements only");

    auto perms = vector<vector<int>> {};
    auto perm = vector<int>(nums);

    do {
        perms.emplace_back(perm);
    } while(std::next_permutation(perm.begin(), perm.end()));

    return perms;
}
