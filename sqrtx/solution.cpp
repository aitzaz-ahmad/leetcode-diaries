int mySqrt(int x) {
        if (x < 2)
            return x;

        auto left = 2;
        auto right = x/2;
        while(left <= right)
        {
            auto pivot = left + (right - left)/2;
            auto sq = static_cast<long>(pivot)*pivot;
            if(sq > x)
                right = --pivot;
            else if (sq < x)
                left = ++pivot;
            else
                return pivot;
        }

        return right;
    }
