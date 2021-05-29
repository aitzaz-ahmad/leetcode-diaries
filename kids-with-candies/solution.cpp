#include <vector>
#include <algorithm>


vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto mostCandies = *std::max_element(candies.cbegin(), candies.cend());
        std::vector<bool> greatestCandies = {};
        std::for_each(candies.cbegin(),
                      candies.cend(),
                      [&](const int& myCandies){ 
                          greatestCandies.emplace_back((mostCandies - myCandies) <= extraCandies); 
                      });
            
        return greatestCandies;
    }
