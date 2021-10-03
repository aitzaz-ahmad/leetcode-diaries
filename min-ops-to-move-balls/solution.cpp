vector<int> minOperations(string boxes) {
    if(boxes.size() < 1 || boxes.size() > 2000)
        throw length_error("boxes.length is out of range. Valid range: 1 <= boxes.length <= 2000");

    if(std::any_of(boxes.cbegin(),
                   boxes.cend(),
                   [](auto val) {
                       return  val != '0' && val != '1';
                       }))
        throw invalid_argument("boxes[i] can either be '0' or '1'");


    auto answer = vector<int>(boxes.size(), 0);

    //find the non-empty indices
    auto idx = 0;
    auto nonEmptyIndices = vector<int>();
    std::for_each(boxes.cbegin(),
                  boxes.cend(),
                  [&idx, &nonEmptyIndices](auto val){
                      if (val == '1')
                          nonEmptyIndices.emplace_back(idx);
                      idx++;
                      });

    for(auto id = 0; id < boxes.size(); id++)
        for_each(nonEmptyIndices.cbegin(),
                 nonEmptyIndices.cend(),
                [id, &answer] (auto index) {
                    answer[id] += abs(id - index);
                });

    return answer;
}
