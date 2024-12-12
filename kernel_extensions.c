
#include <php_embed.h>
#include <Python.h>
#include <ruby.h>

void execute_script(const char* lang, const char* script_path) {
    if (strcmp(lang, "PHP") == 0) {
        PHP_EMBED_START_BLOCK(0, NULL);
        zend_file_handle file_handle;
        zend_stream_init_filename(&file_handle, script_path);
        php_execute_script(&file_handle);
        PHP_EMBED_END_BLOCK();
    } else if (strcmp(lang, "Python") == 0) {
        Py_Initialize();
        FILE* fp = fopen(script_path, "r");
        PyRun_SimpleFile(fp, script_path);
        fclose(fp);
        Py_Finalize();
    } else if (strcmp(lang, "Ruby") == 0) {
        ruby_init();
        rb_eval_string("load script_path");
        ruby_finalize();
    }
}
