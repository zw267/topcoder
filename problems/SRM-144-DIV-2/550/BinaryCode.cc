
// {{{ VimCoder 0.3.5 <-----------------------------------------------------
// vim:filetype=cpp:foldmethod=marker:foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

// }}}

class BinaryCode {
public:
  vector <string> decode(string message) {
    vector<string> res;

    string p;
    int tmp;
    for (int i = 0; i < 2; i++) {
      p += to_string(i);
      for (int j = 1; j < message.size(); j++) {
        int prev_two = 0;
        int prev     = p[j - 1] - '0';

        if (j > 1)
          prev_two = p[j - 2] - '0';

        tmp = message[j - 1] - '0' - prev - prev_two;

        if (tmp > 1) {
          p = "NONE";
          break;
        }

        p += to_string(tmp);
      }

      char last = message[message.size() - 1] - p[p.size() - 2] + '0';
      if (last != p[p.size() - 1])
        p = "NONE";

      res.push_back(p);
      p = "";
    }
    
    return res;
  }
};
