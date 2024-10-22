#include <string>
#include <iostream>
//函数相同的条件
//1.返回值类型相同
//2.函数名称相同
//3.参数类型及数量还有顺序相同

//函数重载
//1.函数名相同
//2.返回值类型、参数类型、参数数量不同
//3.函数名相同后2.中至少有一个条件满足
int half(int x=8888,int divisor=2)
{
    std::cout<<"1"<<std::endl;
    return x/divisor;
}
//a=b/2
//y=2*x^2+2*x+2
double half(double x)
{
    std::cout<<"2"<<std::endl;
    return x/2;
}

int main()
{
    std::cout<<"--->"<<half(10,2)<<std::endl;
    std::cout<<"--->"<<half(4444)<<std::endl;
    std::cout<<half(5/half(1.0))<<std::endl;

}