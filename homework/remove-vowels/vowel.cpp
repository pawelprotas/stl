#include "vowel.hpp"

#include <algorithm>

void removeVowels(std::vector<std::string>& words) {
    std::string vowels = "aeiouyAEIOUY";
    auto predicate = [&vowels](const char c) { return vowels.find(c) != std::string::npos; };

    for (auto& input : words) {
        auto iterator = std::remove_if(input.begin(), input.end(), predicate);
        input.erase(iterator, input.end());
    }
}
