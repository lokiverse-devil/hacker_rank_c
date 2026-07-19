#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    scanf("%c",&ch);
    printf("%c\n",ch);
    char s[100];
    scanf(" %[^\n]%*c",s);
    printf("%s\n",s);
    char sen[100];   
    scanf(" %[^\n]%*c", &sen);
    printf("%s",sen);
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna