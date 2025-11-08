# 🧠 Bit Manipulation in C++

This document contains examples and explanations of common **bit manipulation techniques** in C++.  
All examples use simple integer operations and the `bitset` utility for binary visualization.

---

## 🧩 Basic Setup

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Binary representation (32 bits): " << bitset<32>(n) << endl;
    return 0;
}
