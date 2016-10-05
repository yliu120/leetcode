#include "base/cpp_standards.h"

class Solution {
 public:
  string addBinary(string a, string b) {
    if (a == "") {
      return b;
    } else if (b == "") {
      return a;
    }

    int max_length = max(a.length(), b.length());
    string result;

    result.reserve(max_length + 1);

    int a_index = a.length() - 1;
    int b_index = b.length() - 1;

    int carry_on = 0;
    for (int i = max_length; i >= 1; i--) {
      if (a_index >= 0) {
        carry_on += a[a_index--] - '0';
      }
      if (b_index >= 0) {
        carry_on += b[b_index--] - '0';
      }
      result[i] = (carry_on & 1) + '0';
      carry_on = (carry_on >> 1) & 1;
    }

    if (carry_on == 0) {
      return result.substr(1);
    } else {
      result[0] = '1';
      return result;
    }
  }
};
