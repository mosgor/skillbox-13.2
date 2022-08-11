#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {2.5, 4.25, 3.0, 10.0};
    std::vector<int> items = {1, 1, 0, 3};
    float sum = 0.f;
    for (int i = 0; i < items.size(); ++i) {
        if (items[i] < 0 || items[i] > prices.size() - 1) {
            std::cerr << "Wrong index!";
            return 1;
        }
        sum += prices[items[i]];
    }
    std::cout << "Sum: " << sum;
    return 0;
}
