
#include <ruby.h>

void execute_ruby(const char* code) {
    ruby_init();
    rb_eval_string(code);
    ruby_finalize();
}
