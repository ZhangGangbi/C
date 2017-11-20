#include <stdio.h>

int *p;

static void func1(void)
{
  static int a=100;        //变量加static，在gcc编译之前就使用了变量；编译完以后，将这个变量放到了.data段。
   
  p= &a;
  
  printf("%d\n",a);

  a=200;
  
  return ;
}


static void func2(void)
{
  int a=100;               // 变量不加static
  
  printf("%d\n",a);      

   a=200;

  return ;
}


int main()
{

  func1();        //  100   加static的数据只被初始化一次，第一次调用时输出初始化的值；
  func1();        //  200
  func1();        //  200
  printf("\n\n");
   
  func2();       // 100    不加static的数据，每次执行后内存被释放 
  func2();       // 100    重新执行要重新申请内存，所以结果相同
  
  
  *p=20;         //  因为a是static变量，才能用p去a的地址，然后对其进行赋值；
                  
                //   如果是普通变量，由于func1()函数内存的释放，p的内容不可知,指针p可能乱指，再使用*p赋值，则是非法.
  func1();
}