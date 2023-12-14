#include <stdio.h>

int ft_bindec(char *bin)
{
    int i = 0;
    int decimalNum = 0;
    int power = 1;
    while (bin[i] != '\0') {
        if (bin[i] > 1)
        {
            return -1;
        }
        
        i++;
    }
    if (i > 8)
    return -1;
    
    while (i > 0) {
        i--;
        if (bin[i] == '1') {
            decimalNum += power;
        }
        power *= 2;
    }
    return decimalNum;
}
int main ()
{
    char code[50];
    printf("Enter the number : ");
    scanf(" %s", code);
    printf("the number is %d", ft_bindec(code));
    return 0;
}