#include <stdio.h>
#include <string.h>

int main() {
    int number_next_phones = 0;
    int count = 0;

    while (scanf("%d", &number_next_phones) != -1) {
        char phones[number_next_phones][200];

        for (int i = 0; i < number_next_phones; i++) {
            scanf("%s", phones[i]);
        }

        char first_phone[200];

        first_phone = phones[0]);
        printf("%d\n", first_phone);

        for (int i = 0; i < number_next_phones; i++) {
            for (int j = 0; j < strlen(first_phone); j++) {
                if (phones[i][j] == first_phone[j]) {
                    count++;
                } else {
                    break;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
