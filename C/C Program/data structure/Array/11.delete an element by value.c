  #include<stdio.h>
  void main()
  {
      int vectorx[10];
      int i,n,pos,element,found=0;
      printf("Enter how many elements: \n");
      scanf("%d",&n);
      printf("Enter the elements: \n");
      for(i=0; i<n; i++)
      {
          scanf("%d",vectorx[i]);
      }
      printf("Inserted elements are:\n");
      for(i=0; i<n; i++)
      {
          printf("%d  ",&vectorx[i]);
      }
      printf("Enter the element to be deleted\n");
      scanf("%d",&element);
      for(i=0; i<n; i++)
      {
          if(vectorx[i]==element)
          {
              found=1;
              pos=i;
              break;
          }
      }
      if(found==1)
      {
          for(i=0; i<n; i++)
          {
              vectorx[i]==vectorx[i+1];
          }
          printf("The resultant vector is :\n");
          for(i=0; i<n-1; i++)
          {
              printf("%d  ",&vectorx[i]);
          }
      }
      else
        printf("element %d is not found in the vector\n",element);
  }
