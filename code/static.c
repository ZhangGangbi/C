#include <stdio.h>

int *p;

static void func1(void)
{
  static int a=100;        //������static����gcc����֮ǰ��ʹ���˱������������Ժ󣬽���������ŵ���.data�Ρ�
   
  p= &a;
  
  printf("%d\n",a);

  a=200;
  
  return ;
}


static void func2(void)
{
  int a=100;               // ��������static
  
  printf("%d\n",a);      

   a=200;

  return ;
}


int main()
{

  func1();        //  100   ��static������ֻ����ʼ��һ�Σ���һ�ε���ʱ�����ʼ����ֵ��
  func1();        //  200
  func1();        //  200
  printf("\n\n");
   
  func2();       // 100    ����static�����ݣ�ÿ��ִ�к��ڴ汻�ͷ� 
  func2();       // 100    ����ִ��Ҫ���������ڴ棬���Խ����ͬ
  
  
  *p=20;         //  ��Ϊa��static������������pȥa�ĵ�ַ��Ȼ�������и�ֵ��
                  
                //   �������ͨ����������func1()�����ڴ���ͷţ�p�����ݲ���֪,ָ��p������ָ����ʹ��*p��ֵ�����ǷǷ�.
  func1();
}