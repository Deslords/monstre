#include <stdio.h>
#include <string.h>

size_t my_strlen(const char *s);

int main(void) {
    const char *tests[] = {
        "",
        "a",
        "hello",
        "longer string with spaces",
        "\0hidden",
    };

    for (int i = 0; i < 5; ++i) {
        const char *t = tests[i];
        size_t expected = strlen(t);
        size_t got = my_strlen(t);
        if (expected == got) {
            printf("OK: \"%s\" -> %zu\n", t, got);
        } else {
            printf("FAIL: \"%s\" expected %zu got %zu\n", t, expected, got);
        }
    }

    return 0;
}
