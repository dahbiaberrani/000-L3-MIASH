
#include <string.h>

int strcomp(const char* str1, const char* str2) {
    char* cur_str1 = strdup(str1);
     char* cur_str2 = strdup(str2);

    while ((*cur_str1 != '\0') && (cur_str2 != '\0') && *cur_str2) {
        cur_str1++;
        cur_str2++;
    }
    return (*cur_str1 - *cur_str2);
   

}