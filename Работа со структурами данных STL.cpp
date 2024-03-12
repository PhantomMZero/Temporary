#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

std::list<int> mergeSortedLists(const std::vector<int>& vec, const std::list<int>& lst) {
    std::list<int> vecList(vec.begin(), vec.end());
    vecList.insert(vecList.end(), lst.begin(), lst.end());
    vecList.unique();
    vecList.sort();
    return vecList;
}

int main() {
    std::vector<int> vectorInput = { 1, 3, 5, 7, 9 };
    std::list<int> listInput = { 2, 4, 6, 8, 10 };
    std::list<int> result = mergeSortedLists(vectorInput, listInput);
    for (const auto& num : result) {
        std::cout << num << " ";

    }
    return 0;
}