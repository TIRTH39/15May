#include <stdio.h>

main()
{
    int arr[5] = {10,22,43,64,85};
    int i=0;

        printf("Array elements:-\n");
    
      for (i=0;i<5;i++)
      {
        printf("%d ",arr[i]);
	  }

        printf("\n Square of array elements:-\n");
    
      for (i=0;i<5;i++)
      {
	    printf("%d ",arr[i]*arr[i]);
	  }
}
