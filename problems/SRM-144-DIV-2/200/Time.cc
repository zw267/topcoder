
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

class Time {
public:
  string whatTime(int seconds) {
    string res;

    for (int base = 3600; base > 0; base /= 60) {
      res += to_string(seconds / base);

      if (base > 1)
        res += ":";

      seconds %= base;
    }
    
    return res;
  }
};
