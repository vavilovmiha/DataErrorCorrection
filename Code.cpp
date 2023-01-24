#include <iostream>
#include <string>

std::string data;
std::string correctedData;

void errorCorrection() {
    for (int i = 0; i < data.length(); i++) {
        if (data[i] == '0') {
            correctedData += '1';
        } else if (data[i] == '1') {
            correctedData += '0';
        } else {
            correctedData += data[i];
        }
    }
}

int main() {
    std::cout `oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter data: \";\n    std::cin >>"}` data;

    errorCorrection();

    std::cout << "Corrected data: " << correctedData << std::endl;

    return 0;
}
