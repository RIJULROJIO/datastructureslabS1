#include<stdint.h>
#include<stdlib.h>

int main()
{
    int choice;
    while(1)
    {
        printf("\n1.Union \n2.Intersection \n3.Difference \n4.Equality \n5.Exit");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            set_union();
            break;
            case 2:
            set_inter();
            break;
            case 3:
            set_diff();
            break;
            case 4:
            set_equal();
            break;
            case 5:
            exit(0);
            break;

            default: printf("Invalid option");
        }
    }

}

int set_union()
{
    int s[50],s1[20],s2[20],i,n,m;
    printf("\n Enter the size of first array elements:");
    scanf("%d",&n);
    printf("\n Enter the first array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s1[i]);
    }
    printf("Enter the size of second array elements:");
    scanf("%d",&m);
    printf("Enter the second array elements:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&s2[i]);
    }
    if(n!=m)
    {
        printf("union not possible");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            s[i]=s1[i]||s2[i];
        }
        printf("Union is:");
        for(i=0;i<n;i++)
        {
          printf("%d",s[i]);
        }
    }
}
int set_inter()
{
    int s[50],s1[20],s2[20],i,n,m;
    printf(" Enter the size of first array elements:");
    scanf("%d",&n);
    printf("Enter the first array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s1[i]);
    }
    printf("Enter the size of second array elements:");
    scanf("%d",&m);
    printf("Enter the second array elements:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&s2[i]);
    }
    if(n!=m)
    {
        printf("intersection not possible");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            s[i]=s1[i] && s2[i];
        }
        printf("intersection is:");
        for(i=0;i<n;i++)
        {
          printf("%d",s[i]);
        }
    }
}

int set_diff()
{
    int s[50],s1[20],s2[20],i,n,m;
    printf("Enter the size of first array elements:");
    scanf("%d",&n);
    printf("Enter the first array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s1[i]);
    }
    printf("Enter the size of second array elements:");
    scanf("%d",&m);
    printf("Enter the second array elements:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&s2[i]);
    }
    if(n!=m)
    {
        printf("Difference not possible");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            s2[i]=!s2[i];
        }
        for(i=0;i<n;i++)
        {
            s[i]=s1[i] && s2[i];
        }
        printf("Difference is:");
        for(i=0;i<n;i++)
        {
          printf("%d",s[i]);
        }
    }
}
int set_equal()
{
    int s[50],s1[20],s2[20],i,n,m;
    printf("Enter the size of first array elements:");
    scanf("%d",&n);
    printf("Enter the first array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&s1[i]);
    }
    printf("Enter the size of second array elements:");
    scanf("%d",&m);
    printf("Enter the second array elements:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&s2[i]);
    }
    if(n!=m)
    {
        printf("Equality not possible");
    }
    else
    {
        int count=0;
        for(i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                count=1;
            }
        }
        if(count==1)
            printf("Sets are not equal");
        else
            printf("Sets are equal");
    }
}
