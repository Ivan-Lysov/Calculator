
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/calculator.h"
#include "../include/history.h"

int main() {
    char command[100];
    int a, b;
    printf("CLI Calculator. Type 'help' for a list of commands.\n");

    while (1) {
        printf("> ");
        scanf("%s", command);

        if (strcmp(command, "exit") == 0) {
            break;

        } else if (strcmp(command, "add") == 0) {
            scanf("%d %d", &a, &b);
            int result = add(a, b);
            printf("= %d\n", result);
            char log[100]; snprintf(log, sizeof(log), "add %d %d = %d", a, b, result);
            add_to_history(log);

        } else if (strcmp(command, "sub") == 0) {
            scanf("%d %d", &a, &b);
            int result = substruct(a, b);
            printf("= %d\n", result);
            char log[100]; snprintf(log, sizeof(log), "sub %d %d = %d", a, b, result);
            add_to_history(log);

        } else if (strcmp(command, "mul") == 0) {
            scanf("%d %d", &a, &b);
            int result = multiply(a, b);
            printf("= %d\n", result);
            char log[100]; snprintf(log, sizeof(log), "mul %d %d = %d", a, b, result);
            add_to_history(log);

        } else if (strcmp(command, "div") == 0) {
            scanf("%d %d", &a, &b);
            if (b == 0) {
                printf("Error: division by 0\n");
            } else {
                float result = divide(a, b);
                printf("= %.2f\n", result);
                char log[100]; snprintf(log, sizeof(log), "div %d %d = %.2f", a, b, result);
                add_to_history(log);
            }

        } else if (strcmp(command, "fact") == 0) {
            scanf("%d", &a);
            int result = factorial(a);
            printf("= %d\n", result);
            char log[100]; snprintf(log, sizeof(log), "fact %d = %d", a, result);
            add_to_history(log);

        } else if (strcmp(command, "fib") == 0) {
            scanf("%d", &a);
            int result = fibonacci(a);
            printf("= %d\n", result);
            char log[100]; snprintf(log, sizeof(log), "fib %d = %d", a, result);
            add_to_history(log);

        } else if (strcmp(command, "gcd") == 0) {
            scanf("%d %d", &a, &b);
            int result = gcd(a, b);
            printf("= %d\n", result);
            char log[100]; snprintf(log, sizeof(log), "gcd %d %d = %d", a, b, result);
            add_to_history(log);

        } else if (strcmp(command, "lcm") == 0) {
            scanf("%d %d", &a, &b);
            int result = lcm(a, b);
            printf("= %d\n", result);
            char log[100]; snprintf(log, sizeof(log), "lcm %d %d = %d", a, b, result);
            add_to_history(log);

        } else if (strcmp(command, "pow") == 0) {
            scanf("%d %d", &a, &b);
            int result = power(a, b);
            printf("= %d\n", result);
            char log[100]; snprintf(log, sizeof(log), "pow %d %d = %d", a, b, result);
            add_to_history(log);

        } else if (strcmp(command, "sqrt") == 0) {
            scanf("%d", &a);
            double result = square_root(a);
            if (result < 0)
                printf("Error: negative number \n");
            else {
                printf("= %.3lf\n", result);
                char log[100]; snprintf(log, sizeof(log), "sqrt %d = %.3lf", a, result);
                add_to_history(log);
            }

        } else if (strcmp(command, "mod") == 0) {
            scanf("%d %d", &a, &b);
            if (b == 0) {
                printf("Error: division by 0 \n");
            } else {
                int result = mod(a, b);
                printf("= %d\n", result);
                char log[100]; snprintf(log, sizeof(log), "mod %d %d = %d", a, b, result);
                add_to_history(log);
            }

        } else if (strcmp(command, "history") == 0) {
            print_history();

        } else if (strcmp(command, "clear") == 0) {
            clear_history();

        } else if (strcmp(command, "help") == 0) {
            printf("List of commands:\n");
            printf("add A B       — addition\n");
            printf("sub A B       — subtraction\n");
            printf("mul A B       — multiplication\n");
            printf("div A B       — division\n");
            printf("mod A B       — modulo (remainder)\n");
            printf("pow A B       — power (A raised to B)\n");
            printf("sqrt A        — square root\n");
            printf("fact A        — factorial\n");
            printf("fib A         — Fibonacci number\n");
            printf("gcd A B       — greatest common divisor (GCD)\n");
            printf("lcm A B       — least common multiple (LCM)\n");
            printf("history       — show calculation history\n");
            printf("clear         — clear history\n");
            printf("help          — show this help message\n");
            printf("exit          — exit the program\n");

        } else {
            printf("Unknown command. Type 'help' to see the list.\n");

        }
    }
    return 0;
}
