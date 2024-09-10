#include <iostream>
#include <sstream>
#include <vector>
#include <string>

std::vector<std::string> tokenize(const std::string &str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::stringstream ss(str);

    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    std::string input = "this is a test string";
    char delimiter = ' ';

    std::vector<std::string> tokens = tokenize(input, delimiter);

    for (const auto &token : tokens) {
        std::cout << token << std::endl;
    }

    return 0;
}
