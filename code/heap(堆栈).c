
    #include <stdio.h>
    #include <stdlib.h>	
   
  
    int *heap_array(int *old_ptr,int n);
   
	void show_value (int * ptr);

	
	int main(void)

	  {
        int n, *p =(int *)malloc(1*sizeof(int));     //申请了一块堆内存，用指针指向它，大小是4字节。

		p[0]=1;                                    // 第一个位置存放堆内存的大小（元素个数）

		while(1)
			
		{
		   if (scanf("%d",&n)==0);            // 如果输入的不是数字则退出
		   
		   break;
		  
		   p=heap_array(  p,   n );           // 如果输入的是数字，则拓展堆内存并且存入该数字。

		   show_value ( p);
		
		}


      free (p);
	  return 0;

	  }
  
   int *heap_array(int *old_ptr,int n)
   {
      int size= old_ptr[0] + 1;
	  int *new_ptr;

	  new_ptr =(int *) realloc(old_ptr, size *sizeof(int) );

	  new_ptr[0]=size;
	  new_ptr[size-1]=n;

	  return new_ptr;
 
   }

   void show_value( int *ptr)
   {
     int i;
	 printf("------");

   for(i=0;i<ptr[0];i++)
   {
   
	   printf("%d",ptr[i]);
   
   }

    printf("======\n");
   
   }
