#include <stdio.h>

void display(int limit_range[2]) {
    int lower_limit = limit_range[0];
    int upper_limit = limit_range[1];

    for (int number = lower_limit; number <= upper_limit; ++number) {
        printf("%d\n", number);
    }
}

int main() {
    int lower_limit, upper_limit;

    printf("Enter the lower limit: ");
    scanf("%d", &lower_limit);

    printf("Enter the upper limit: ");
    scanf("%d", &upper_limit);

    int limit_range[] = {lower_limit, upper_limit};
    display(limit_range);

    return 0;
}
