#include "../include/my_os/kernel.h"

// Função principal
int main() {
    // Chama a função de inicialização do kernel
    kernel_init();

    // Loop infinito
    while (true) {
        // Coloque aqui o código que será executado pelo kernel
    }

    return 0;
}
