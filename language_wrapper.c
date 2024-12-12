
#include <stdio.h>
#include <string.h>

void execute_cross_language(const char* lang, const char* function_name, int arg1, int arg2) {
    if (strcmp(lang, "Rust") == 0) {
        rust_calculate(arg1, arg2); // Rust function already implemented
    } else if (strcmp(lang, "Python") == 0) {
        char buffer[256];
        snprintf(buffer, sizeof(buffer), "%s(%d, %d)", function_name, arg1, arg2);
        call_python(buffer); // Python function already implemented
    }
}
