bool checkStraightLine(vector<vector<int>>& coordinates) {

        if(coordinates.size() < 2)
            return false;

        auto pointA = coordinates[0];
        auto pointB = coordinates[1];
        auto deltaX = pointB[0] - pointA[0];
        auto deltaY = pointB[1] - pointA[1];

        auto result = true;
        for(auto id = 2; id < coordinates.size(); id++)
        {
            pointB = coordinates[id];

            auto dX = pointB[0] - pointA[0];
            auto dY = pointB[1] - pointA[1];

            if(dX * deltaY != dY * deltaX)
            {
                result = false;
                break;
            }
        }

        return result;
    }
