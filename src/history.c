#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/history.h"

#define MAX_HISTORY 100
#define MAX_ENTRY_LEN 100

static char history[MAX_HISTORY][MAX_ENTRY_LEN];
static int history_count = 0;

void add_to_history(const char *entry) {
    if (history_count < MAX_HISTORY) {
        strncpy(history[history_count], entry, MAX_ENTRY_LEN - 1);
        history[history_count][MAX_ENTRY_LEN - 1] = '\0';
        history_count++;
    }
}

void print_history() {
    printf("История операций:\n");
    for (int i = 0; i < history_count; ++i) {
        printf("%2d: %s\n", i + 1, history[i]);
    }
}

void clear_history() {
    history_count = 0;
    printf("История очищена.\n");
}
