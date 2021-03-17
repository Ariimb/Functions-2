1. Find the Max of three numbers.

int main() {
    double n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%.2f is the largest number.", n1);

    if (n2 >= n1 && n2 >= n3)
        printf("%.2f is the largest number.", n2);

    if (n3 >= n1 && n3 >= n2)
        printf("%.2f is the largest number.", n3);

    return 0;
}

2. Write a function to sum all the numbers in a list.
 
int main()
{
    int a[1000],i,n,sum=0;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    
    for(i=0; i<n; i++)
    {
         
        sum+=a[i];
    }
     printf("sum of array is : %d",sum);
 
    return 0;
}

3. Write a function to multiply all the numbers in a list.
