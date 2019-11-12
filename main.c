#include <stdio.h>
#include <stdlib.h>

int test(int numbers[], int array_size)
       {
        int three=0;

          for (int i = 0; i < array_size; i++)
          {
              if (three && numbers[i] == 5)
                  return 1;
              if ( numbers[i] == 3)
                  three = 1;
          }
           return 0;
       }

int main(void)
{
    int array_size;
    int array1[] = {2, 3, 4, 5};
    array_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, array_size));
    int array2[] = {1, 2, 3, 4, 5, 6};
    array_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, array_size));
    int array3[] = {1, 1, 2, 2, 3, 3};
    array_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, array_size));
}
