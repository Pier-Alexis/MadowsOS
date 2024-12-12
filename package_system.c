
#include <stdio.h>

void install_package(const char* package_name) {
    printf("Installing %s...\n", package_name);
    printf("Package %s installed successfully!\n", package_name);
}

void list_installed_packages() {
    printf("Installed packages:\n");
    printf("- File Manager\n");
    printf("- Terminal\n");
}
