#include <stdio.h>
#include <string.h>

int can_rearrange_palindrome(char *s, int len) {
    int char_count[26] = {0};
    for (int i = 0; i < len; i++) {
        char_count[s[i] - 'a']++;
    }
    int odd_count = 0;
    for (int i = 0; i < 26; i++) {
        if (char_count[i] % 2 == 1) {
            odd_count++;
        }
    }
    return odd_count <= 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[51];
        scanf("%s", s);
        int len = strlen(s);
        int flag = 1;
        for(int i = 0; i < len - 1; i++)
        {
            if(s[i] != s[i + 1])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("NO\n");
            continue;
        }
        int say = 0;
        for(int i = 0; i < len - 1; i++)
        {
            if(s[i] != s[i + 1])
            {
                say++;
                i++;
            }
        }
        if(say == 1)
        {
            printf("NO\n");
            continue;
        }
        if (can_rearrange_palindrome(s, len)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
