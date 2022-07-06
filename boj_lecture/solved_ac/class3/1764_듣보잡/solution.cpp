#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    int N, M;
    cin >> N >> M;

    vector<string> vec;
    for (int i = 0; i < N + M; i++) {
        string str;
        cin >> str;
        vec.push_back(str);
    }

    sort(vec.begin(), vec.end());

    vector <string> vec_result;
    int result = 0;
    for (int i = 0; i < N + M; i++) {
        if (vec[i] == vec[i+1]) {
            vec_result.push_back(vec[i]);
            result += 1;
        }
    }

    cout << result << "\n";
    for (int i = 0; i < vec_result.size(); i++) {
        cout << vec_result[i] << "\n";
    }

    return 0;
}
