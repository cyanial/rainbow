#include <stdio.h>
#include <unistd.h>

int main() {
    char *greetings[] = {
        "你好", "Hello", "Bonjour", "Hola", "Ciao", "こんにちは", "안녕하세요",
        "สวัสดี", "नमस्ते", "Здравствуйте", "مرحبا", "שלום", "你好", "Hallo",
        "Olá", "Здраво", "Dia duit", "გამარჯობა", "Xin chào", "Γεια σας",
        "வணக்கம்"
    };
    int numGreetings = sizeof(greetings) / sizeof(greetings[0]);
    int i = 0;

    while (1) {
        printf("%s\n", greetings[i]);
        fflush(stdout);
        i = (i + 1) % numGreetings;
        sleep(1);
    }

    return 0;
}