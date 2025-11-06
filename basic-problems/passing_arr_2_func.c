// Write a function that takes an integer 1D array and its size, and returns the sum of all elements using pointer arithmetic.
#include<stdio.h>

void add(int* ptr,int size){  //function to take array as parameter in pointer form.
    int suml=0,i,grt=0,sml=0;

    for (i = 0; i < size; i++) //prints sum of array elements
    {
       suml+=*(ptr+i);
    }
    printf("Sum: %d",suml);

    /*
    - One that returns the maximum element

    - One that returns the minimum element
    */
    grt=ptr[0]; sml=ptr[0];

    for ( i = 0; i < size; i++)
    {
        if(grt<ptr[i])
            grt=ptr[i];
        if(sml>ptr[i])
            sml=ptr[i];
    }
    printf("\nGreatest number in the array is: %d\nSmallest number in the array is: %d",grt,sml);

}

int main()
{
    int n,i;
    printf("Size: ");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++){   //array initialization done
        scanf("%d",&arr[i]);
    }
    add(arr,n);     //function calling done
    return 0;
}

