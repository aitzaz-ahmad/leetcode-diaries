int largestAltitude(vector<int>& gain) {
        if(gain.size() < 1 || gain.size() > 100)
            return 0;

        if(std::any_of(gain.cbegin(),
                       gain.cend(),
                       [](auto val) {
                           return val < -100 || val > 100;
                       }))
            return 0;

        auto highest = 0;
        auto altitude = 0;

        std::for_each(gain.cbegin(),
                      gain.cend(),
                      [&](const auto delta) {
                          altitude += delta;
                          highest = std::max(highest, altitude);
                      });

        return highest;
    }
