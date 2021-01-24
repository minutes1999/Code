#include<iostream>
using namespace std;
// int main(){
//     int a,b,c;
//     while((scanf("%d",&a))!=EOF){
//         b=1<<a;
//         cout<<b<<endl;
//     }
//     return 0;
// }


// int main(){
//     int n,h,m;
//     cin>>n>>h>>m;
//     int a,b,c;
//     a=m/h;
//     b=m%h;
//     //刚好喝完或者在喝第n瓶
//     if(b==0){
//         c=n-a;
//     }else{
//         c=n-a-1;
//     }
//     cout<<c<<endl;
//     return 0;
// }
#include<iomanip>
int main(){
    int a,b,c,d,e;
    float f;
    cin>>a>>b>>c>>d>>e;
    f=float((a+b+c+d+e))/5;
    // printf("%.1f",f);
    cout<<setiosflags(ios::fixed)<<setprecision(1)<<f<<endl;
    return 0;

}
