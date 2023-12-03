#include <stdio.h>

int main() {
    int t;
    printf("Enter the number of test cases: \n");
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        printf("Test Case : %d\n", i);
        int a=100; 
        int b=200;
        int A, B;
        printf("Enter the discount you would like to give on product from first shop: \n");
        scanf("%d", &A);
        
        printf("Enter the discount you would like to give on product from second shop: \n");
        scanf("%d", &B);
        int final_price1= a -(a*(A)/100);
        int final_price2= b -(b*(B)/100);
        if(final_price1<final_price2)
        {
            printf("product at first store is cheaper\n");
        }
        else if(final_price2<final_price1)
        {
            printf("product at second store is cheaper\n");
        }
        else
        {
            printf("product at both stores is cheaper");
        }
        
    }

    return 0;
}
