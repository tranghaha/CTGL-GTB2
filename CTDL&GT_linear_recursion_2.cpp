#include <iostream>
using namespace std;
 
//hàm đệ quy tuyến tính
int factorial(int n){
  if(n == 0) return 1; // điểm dừng của hàm, nếu n == 0 thì kết thúc hàm và trả về 1
  return n * factorial(n-1);
}
//hàm main
int main() {
  int n;
  cout<<"Nhập vào số giai thừa bạn muốn tính: ";
  cin>>n;
  int kq = factorial(n);//gọi hàm factorial() để tính giai thừa cho n và gán kết quả vào biến kq
  cout<<"\nKết quả \n"<<n<<"! = "<<kq;
   
  cout<<"\n-----------------------------\n";
}
