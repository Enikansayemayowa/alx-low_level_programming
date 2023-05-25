#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isNumeric(const char *str) {
    int i = 0;
    while (str[i]) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
        i++;
    }
    return true;
}
int multiply(int num1, int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) 
{
	int num1, num2, result;
        if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    if (!isNumeric(argv[1]) || !isNumeric(argv[2])) {
	printf("Error\n");
        return 98;
    }

    result = multiply(num1, num2);
    printf("%d\n", result);

    return 0;
}

