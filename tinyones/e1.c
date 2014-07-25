#include <stdio.h>
#include "test.h"
 
int main()
{
    int a[2] = {1,2};
    int what = pass_num_array(a);
   
    printf("Enter an integer\n");
    scanf("%d", &a);
    
    printf("Integer that you have entered is %d\n", what);
    
    return 0;
}
