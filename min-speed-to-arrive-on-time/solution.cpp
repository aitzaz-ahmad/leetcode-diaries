int minSpeedOnTime(vector<int>& dist, double hour) {

    auto rides = dist.size();
    if(rides < 1 || rides > 100000)
        throw length_error("dist.length must be within the range [1, 100000]");

    auto outOfRange = [](auto ride) { return ride < 1 || ride > 100000; };
    if(std::any_of(dist.cbegin(), dist.cend(), outOfRange))
        throw out_of_range("dist[i] must be within the range [1, 100000]");

    if(std::less<double>{}(hour, 1.0) || std::greater<double>{}(hour, 1000000000))
        throw out_of_range("hour must be within the range [1, 1000000000]");

    //now we're positive that our inputs are valid!
    auto minSpeed = -1;
    auto lowSpeed = 1;
    auto highSpeed = 10000000;

    while(lowSpeed <= highSpeed)
    {
        //select a speed half way through lowSpeed and highSpeed
        auto speed = lowSpeed + (highSpeed - lowSpeed)/2;

        //calculate the commute time with the selected speed
        auto commuteTime = double{0.0};
        auto lastRide = std::prev(dist.cend());
        std::for_each(dist.cbegin(),
                      lastRide,
                      [&commuteTime, speed](auto distance) {
                          commuteTime += std::ceil(
                            static_cast<double>(distance)/speed
                          );
                      });

        commuteTime += static_cast<double>(*lastRide)/speed;

        //use the binary-search approach to reduce the data-set of speeds to check
        if(std::islessequal(commuteTime, hour)) {
            minSpeed = speed--;
            highSpeed = speed;
        }
        else
            lowSpeed = ++speed;
    }

    return minSpeed;
}
