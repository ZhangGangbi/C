
    #include <stdio.h>
    #include <stdlib.h>	
   
  
    int *heap_array(int *old_ptr,int n);
   
	void show_value (int * ptr);

	
	int main(void)

	  {
        int n, *p =(int *)malloc(1*sizeof(int));     //������һ����ڴ棬��ָ��ָ��������С��4�ֽڡ�

		p[0]=1;                                    // ��һ��λ�ô�Ŷ��ڴ�Ĵ�С��Ԫ�ظ�����

		while(1)
			
		{
		   if (scanf("%d",&n)==0);            // �������Ĳ����������˳�
		   
		   break;
		  
		   p=heap_array(  p,   n );           // �������������֣�����չ���ڴ沢�Ҵ�������֡�

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
