#include "sort.hpp"

#include <algorithm>

std::deque<std::string> lengthSort(const std::forward_list<std::string>& input) {
    std::deque<std::string> output{};
    std::copy(input.begin(), input.end(), std::back_inserter(output));
    std::sort(output.begin(), output.end(), [](const std::string& lhs, const std::string& rhs) {
        if (lhs.size() == rhs.size()) {
            return lhs < rhs;
        }

        return lhs.size() < rhs.size();
    });
    return output;
}
