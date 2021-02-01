#include<stdio.h>

/**
 * @brief Get input of string
 *
 * @param s string to be inputed
 */
void getstring(char* s) {
    fflush(stdin);
    scanf("%[^\n]%*c", s);
}

char new_str[100];
/**
 * @brief find substring and replace it
 *
 * @param str string input
 * @param find substrinf to find
 * @param replace  substring to replace
 * @return char* address of the modified string
 */
char* find_replace(char* str, char* find, char* replace) {
    int i = 0, n = 0, prev = 0;
    int j = 0;
    while (str[i] != '\0') {
        prev = i;
        j = 0;
        while (str[i] == find[j] && find[j] != '\0') {
            i++;
            j++;
        } if (find[j] == '\0') {
            for (int k = 0; replace[k] != '\0'; k++) {
                new_str[n++] = replace[k];
            }
        }
        else {
            while (prev < i) new_str[n++] = str[prev++];
            new_str[n++] = str[i++];
        }
    }
    new_str[n] = '\0';
    return new_str;
}

int main(void) {
    char str[100], find[100], replace[100];
    getstring(str);
    getstring(find);
    getstring(replace);
    // puts(str);
    // puts(find);
    // puts(replace);
    printf("%s", find_replace(str, find, replace));
    return 0;
}
