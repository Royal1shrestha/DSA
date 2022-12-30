#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100],b[100],merge[200];
    int element,i,loc,size,n,j,choice,s,size1;

    printf("C Program to Insert and Delete an Element in an Array using switch case\n");
    printf("1. Inserting an Element in an Array\n");
    printf("2. Deleting an Element in an Array\n");
    printf("3. Transversing an Element in an Array\n");
    printf("4. Updating an Element in an Array\n");
    printf("5. Merging two Array\n");

    printf("Select your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter %d array elements\n",size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("List before Insertion: ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to insert\n");
        scanf("%d",&element);
        printf("Enter a position to insert an element %d\n",element);
        scanf("%d",&loc);
        for(i=size-1;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
        a[loc]=element;
        printf("List after Insertion: ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
         break;

    case 2:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("List before deletion\n");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to delete\n");
        scanf("%d",&n);
        for(i=0;i<size;i++)
        {
            if(a[i]==n)
            {
                for(j=i;j<(size-1);j++)
                {
                    a[j]=a[j+1];
                }
                break;
            }
        }
        printf("List after deletion\n");
        for(i=0;i<(size-1);i++)
        {
            printf("%d ",a[i]);
        }
        break;

    case 3:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("List after transverse\n");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        break;
    case 4:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("\nEnter the position to be update:");
        scanf("%d",&loc);
        printf("\nEnter the value to be update:");
        scanf("%d",&s);
        printf("List before update\n");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        for(i=0;i<size;i++)
        {
            if(i==loc)
            {
                a[i]=s;
            }
        }
        printf("\nUpdated value is:");
        for(i=0;i<size;i++)
        {
            printf("\n%d",a[i]);
        }
        break;

    case 5:
        printf("Enter the size of 1st array\n");
        scanf("%d",&size);
        printf("Enter 1st array elements: \n");
        for(i=0; i<size; i++)
        {
            scanf("%d", &a[i]);
            merge[i] = a[i];
        }
        j = i;
        printf("Enter the size of 2nd array\n");
        scanf("%d",&size1);
        printf("Enter 2nd array elements: \n");
        for(i=0; i<size1; i++)
        {
            scanf("%d", &b[i]);
            merge[j] = b[i];
            j++;
        }
        printf("\nThe new array after merging is:\n");
        for(i=0; i<j; i++)
            printf("%d ", merge[i]);
    break; 

    default:
    {
        printf("Wrong choice, Please try again later");
    }
    return 0;
    }
}