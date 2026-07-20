#include <stdio.h>
#include <stdlib.h>

void update(long *a,long *b) {
    long sum=*a+*b;
    long diff=abs(*a-*b);
    *a=sum;
    *b=diff;  
}

int main() {
    long a, b;
    long *pa = &a, *pb = &b;
    
    scanf("%ld %ld", &a, &b);
    update(pa, pb);
    printf("%ld\n%ld", a, b);

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna