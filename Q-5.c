#include<stdio.h>

struct book{
	 
	 char Title[50];
	 char Author[50];
	 int Price;
};
main()
{
	int n;
	printf("Enter the size of object: ");
	scanf("%d",&n);
	struct book b[n];
	int i;
	
	for(i=0;i<n;i++)
	{
	
		printf("Enter Book Tilte : ");
		scanf("%s",&b[i].Title);
		printf("Enter Book Author : ");
		scanf("%s",&b[i].Author);
		printf("Enter Book Price : ");
		scanf("%d",&b[i].Price);
    }
    
	for(i=0;i<n;i++)
	{
		printf("Book Title =%s\n",b[i].Title);
		printf("Book Author =%s\n",b[i].Author);
		printf("Book Price =%d\n",b[i].Price);
		
	}
}