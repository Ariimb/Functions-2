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
 
    void main()
{
	int num,res=0;
	clrscr();
	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	res=prime(num);
	if(res==0)
		printf("\n%d IS A PRIME NUMBER",num);
	else
		printf("\n%d IS NOT A PRIME NUMBER",num);
	getch();
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
    for(i=0; i<n; i++)
    {
         
        sum+=a[i];
    }
     printf("sum of array is : %d",sum);
 
    return 0;
}

3. Write a function to multiply all the numbers in a list.
    
4. Write a program to reverse a string.

    int main()
{
   char s[100];

   printf("Enter a string to reverse\n");
   gets(s);

   strrev(s);

   printf("Reverse of the string: %s\n", s);

   return 0;
}

5. Write a function to calculate the factorial of a number (a non-negative integer).

    int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   

6. Write a function to check whether a number is in a given range.
    
    int main() {
    int num, min, max;
     
    printf("Enter an integer\n");
    scanf("%d", &num);
    printf("Enter the minimum and maximum range\n");
    scanf("%d %d", &min, &max);
     
    if((num-min)*(num-max) <= 0){
        printf("%d is in range of [%d, %d]", num, min, max);
    } else {
     printf("%d is not in range of [%d, %d]", num, min, max);
    }
 
    return 0;
}

7. Write a function that accepts a string and calculate the number of upper case letters and lower case letters.
    
    int main()
{
    char    str[100];
    int countL,countU;
    int counter;
 
    countL=countU=0;
 
    printf("Enter a string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++){
 
        if(str[counter]>='A' && str[counter]<='Z')
            countU++;
        else if(str[counter]>='a' && str[counter]<='z')
            countL++;   
    }
 
    printf("Total Upper case characters: %d, Lower Case characters: %d",countU,countL);
 
    return 0;
}

8. Write a function that takes a list and returns a new list with unique elements of the first list.
    
int remove_duplicate(int arr[], int n)
{

  if (n == 0 || n == 1)
    return n;

  int temp[n];

  int j = 0;
  int i;
  for (i = 0; i < n - 1; i++)
    if (arr[i] != arr[i + 1])
      temp[j++] = arr[i];
  temp[j++] = arr[n - 1];

  for (i = 0; i < j; i++)
    arr[i] = temp[i];

  return j;
}

9. Write a function that takes a number as a parameter and check the number is prime or not.

    int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  int i;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("\nArray Before Removing Duplicates: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  n = remove_duplicate(arr, n);

  printf("\nArray After Removing Duplicates: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}

10. Write a program to print the even numbers from a given list.

int main()
{
    int i, n;
  
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);

    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

11. Write a function to check whether a number is perfect or not.
    
    int main()
{
    int num,loop;
    int sum;
 
    printf("Enter an integer number: ");
    scanf("%d",&num);
 
     
    sum=0;
 
    for(loop=1; loop<num;loop++)
    {
        if(num%loop==0)
            sum+=loop;
    }
 
    if(sum==num)
        printf("%d is a perfect number.",num);
    else
        printf("%d is not a perfect number.",num);
 
    return 0;
}

12. Write a function that checks whether a passed string is palindrome or not.
    
void isPalindrome(char str[]) 
{  
    int l = 0; 
    int h = strlen(str) - 1; 
  
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            printf("%s is Not Palindrome", str); 
            return; 
        } 
    } 
    printf("%s is palindrome", str); 
} 
