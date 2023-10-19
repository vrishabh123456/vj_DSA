#include<stdio.h>
#define n 5
int a[n], f = -1, r = -1, ch;

int first_Insert(int data)
{
    if (r >= n - 1)
    {
        printf("Queue Is Full...");
    }
    else if (f < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else
    {
        r++;
        a[r] = data;
    }
}

int first_Delete()
{
    if (f == r)
    {
        printf("Queue Is Empty...");
        return -1;
    }
    else if (f < 0)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}

int last_Insert(int data)
{
    if (r >= n - 1)
    {
        printf("Queue Is Full...");
    }
    else if (f < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else
    {
        r++;
        a[r] = data;
    }
}

int last_Delete()
{
    if (f == r)
    {
        printf("Queue Is Empty...");
        return -1;
    }
    else if (f < 0)
    {
        f = r = -1;
    }
    else
    {
        r--;
    }
}

int display()
{
    if (f < 0)
    {
        printf("Queue is empty...");
    }

    for (int i = f; i <= r; i++)
    {
        printf("%d\t", a[i]);
    }
}

int main()
{
    int choice, data;
    
    do
    {
        printf("\nQueue Operations:\n");
        printf("1. first Insert \n");
        printf("2. first Delete \n");
        printf("3. last Insert \n");
        printf("4. last Delete \n");
        printf("5. Display \n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                printf("Enter the data to insert at the front: ");
                scanf("%d", &data);
                first_Insert(data);
                break;
                
            case 2:
                first_Delete();
                break;
                
            case 3:
                printf("Enter the data to insert at the end: ");
                scanf("%d", &data);
                last_Insert(data);
                break;
                
            case 4:
                last_Delete();
                break;
                
            case 5:
                display();
                break;
                
            case 0:
                printf("Exiting...");
                break;
                
            default:
                printf("Invalid choice. Please try again.");
                break;
        }
    } while (choice != 0);
    
   return 0;
}