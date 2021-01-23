#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
// 题目1
// int main()
// {
//     cout<<"practice makes perfect!"<<endl;
//     return 0;
// }

//题目2
// int main()
// {
//     cout<<"v   v\n"<<" v v \n"<<"  v"<<endl;
//     return 0;
// }

//题目3
// int main()
// {
//     cout<<"The size of short is "<<sizeof(short)<<"bytes."<<endl;
//     cout<<"The size of int is "<<sizeof(int)<<"bytes."<<endl;
//     cout<<"The size of long is "<<sizeof(long)<<"bytes."<<endl;
//     cout<<"The size of long long is "<<sizeof(long long)<<"bytes."<<endl;
//     return 0;
// }

//题目4
// int main(){
//     int a=1234;
//     printf("0%o 0X%X",a,a);
//     return 0;
// }

//题目5
// int main(){
//     cout<<0XABCDEF<<endl;
// }

//题目
// int main(){
//     int a = printf("Hello world!");
//     printf("\n");
//     printf("%d",a);
// }

// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     printf("score1=%d,score2=%d,score3=%d",a,b,c);
// }

// int main(){
//     int a;
//     float b;
//     float c;
//     float d;
//     scanf("%d;%f,%f,%f",&a,&b,&c,&d);
//     printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.",a,b,c,d);
// }

// int main(){
//     int a;
//     scanf("%d",&a);
//     int n =5;
//     char b;
//     int i=5;
//     if (i<=5)
//         printf("%id",b,a);
//         i = i-1;
// }

// int main(){
//     printf("%c%c%c%c%c%c%c%c%c%c%c%c",73,32,99,97,110,32,100,111,32,105,116,33);
// }

// int main(){
//     int a,b,c;
//     scanf("%4d%2d%2d",&a,&b,&c);
//     printf("year=%04d\nmonth=%02d\ndate=%02d",a,b,c);
// }

// int main(){
//     int a=400,c=212,b;
//     b=(-8+22)*a-10+c/2;
//     printf("%d",b);
// }

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int c;
//     int d;
//     c=a/b;
//     d=a%b;
//     printf("%d %d",c,d);
// }

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int c;
//     c=(a+b)%100;
//     printf("%d",c);
// }

// int main(){
//     float a;
//     scanf("%f",&a);
//     int c;
//     c=int(int(a)%10);
//     printf("%d",c);
// }

// #include<cmath>
// int main(){
//     int age;
//     scanf("%d",&age);
//     int sec;
//     sec=int(age*3.156*pow(10,7));
//     printf("%d",sec);
// }

// int main(){
//     float a,b,c,d,e;
//     scanf("%f %f %f",&a,&b,&c);
//     d=a+b+c;
//     e=d/3;
//     printf("%.1f %.1f",d,e);
// }

// int main(){
//     float a,b;
//     float c;
//     scanf("%f %f",&a,&b);
//     c=b/100;
//     float d;
//     d=a/(c*c);
//     printf("%.2f",d);
// }

int main()
{
    float pi = 3.1415926;
    float r, V;
    scanf("%f", &r);
    V = (4 / 3) * pi * r * r * r;
    printf("%.3f", V);
}