
#include "duktape.h"

void execute_javascript(const char* code) {
    duk_context *ctx = duk_create_heap_default();
    duk_eval_string(ctx, code);
    duk_destroy_heap(ctx);
}
