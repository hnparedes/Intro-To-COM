#include <stdio.h>
#include <stdbool.h>

// PART 1
char my_toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

// PART 2
void capitalize_string(char s[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        s[i] = my_toupper(s[i]);
    }
}

// PART 3 Helper
char switch_case(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    } else if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

// PART 3
void convert_case(char s[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        s[i] = switch_case(s[i]);
    }
}

// PART 4 Helper
bool is_letter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

// PART 4
void capitalize_words(char s[]) {
    int i = 0;
    while (s[i] != '\0') {

        if ((i == 0 || s[i - 1] == ' ') && (s[i] >= 'a' && s[i] <= 'z')) {
            s[i] = my_toupper(s[i]);
        }

        if ((s[i + 1] == ' ' || s[i + 1] == '\0') && (s[i] >= 'a' && s[i] <= 'z')) {
            s[i] = my_toupper(s[i]);
        }
        i++;
    }
}
int main() {

  // PART 1
  printf("%c", my_toupper('H'));
  printf("%c", my_toupper('e'));
  printf("%c", my_toupper('y'));
  printf("%c\n", my_toupper('!'));

  // PART 2
  char str[] = "99 little bugs in the code.\n"
   "99 little bugs in the code.\n"
   "Take one down, patch it around. 127 little bugs in the code …";
  capitalize_string(str);
  puts(str);

  // PART 3
  char str2[] = "computers ARE FAST; programmers KEEP IT SLOW";
  convert_case(str2);
  puts(str2);

  // PART 4
  char str3[] = "remember that there is no code faster than no code";
  capitalize_words(str3);
  puts(str3);

  return 0;

}
