#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string boolean_to_string(bool b) {
    if (b)
        return "true";
    else
        return "false";
}

int findSmallest(vector<int> list) {
    for (int i = 0; i < list.size() - 1; i++) {
        for (int j = 0; j < list.size() - i - 1; j++) {
            if (list.at(j) > list.at(j + 1)) {
                int TempNum = list.at(j);
                list.at(j) = list.at(j + 1);
                list.at(j + 1) = TempNum;
            }
        }
    }
    return list.at(0);
}

// ALTERNATIVELY

int findSmallestAlt(vector<int>& list)
{
    return *min_element(list.begin(), list.end());
}

int summation(int num) {
    int sum = 1;
    for (int i = num; i > 1; i--) {
        sum += i;
    }
    return sum;
}

int main() {
    vector<int> list = {384, 232, 121, 224, 444, -234, 293};
    int Smallest = findSmallest(list);
    cout << Smallest << endl;
    int Summation = summation(183);
    cout << Summation << endl;
}