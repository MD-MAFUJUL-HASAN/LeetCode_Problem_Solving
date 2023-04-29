#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000

int lengthOfLongestSubstring(char* s) {
    int i = 0, ans = 0;
    int len = strlen(s);
    char ss[MAX_SIZE];
    memset(ss, 0, sizeof(ss));
    for (int j = 0; j < len; ++j) {
        while (strchr(ss, s[j])) {
            memmove(ss, ss + 1, strlen(ss));
            i++;
        }
        ss[strlen(ss)] = s[j];
        ans = ans > j - i + 1 ? ans : j - i + 1;
    }
    return ans;
}

