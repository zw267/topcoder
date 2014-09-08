
// {{{ VimCoder 0.3.5 <-----------------------------------------------------
// vim:filetype=java:foldmethod=marker:foldmarker={{{,}}}

import static java.lang.Math.*;
import static java.math.BigInteger.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import java.math.*;
import java.util.*;

// }}}

public class Time {
	public String whatTime(int seconds) {
        String res = "";

        for (int base = 3600; base > 0; base /= 60) {
            res += seconds / base;
            if (base > 1)
                res += ":";

            seconds %= base;
        }

        return res;
	}
}
