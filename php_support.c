
#include <php_embed.h>

void execute_php(const char* code) {
    PHP_EMBED_START_BLOCK(0, NULL);
    zend_eval_string(code, NULL, "PHP Code");
    PHP_EMBED_END_BLOCK();
}
