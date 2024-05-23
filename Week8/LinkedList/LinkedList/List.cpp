
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

void backtrack(int n, std::string& current, const std::string& s, std::vector<bool>& used, std::vector<std::string>& res) {
    if (current.size() <= n) {
        res.push_back(current);
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = true;
            current.push_back(s[i]);
            backtrack(n, current, s, used, res);
            current.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::string current = "";
    std::vector<std::string> res;
    std::vector<bool> used(n, false);
    backtrack(n, current, s, used, res);

    for (auto it : res) {
        std::cout << it << std::endl;
    }
    return 0;
}