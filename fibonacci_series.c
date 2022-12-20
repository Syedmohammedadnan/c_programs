#include <stdio.h>
int fubanaci(int num) {
    int p_val = 1, c_val = 1, temp;
    printf("%d ", c_val);
    printf("%d ", p_val);
    while (c_val < num) {
        temp = p_val;
        p_val = c_val;
        c_val = temp;
        c_val = p_val + c_val;
        if (c_val > num) {
            return 0;
        }
        printf("%d ", c_val);

    }
    return 0;

}


int main()
{
    int check, diviser;
    int num, power, result = 0;
    printf("enter the input number\n");
    scanf("%d", &num);

    fubanaci(num);
    return 0;
}