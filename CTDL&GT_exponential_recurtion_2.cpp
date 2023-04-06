#include <stdio.h>
 
void dayNhiPhan(int i, int n, int *X)
{
    int val;// val là các giá trị có thể gán cho các vị trí trong x
    for (val = 0; val < 2; val++) // val có thể nhận hai giá trị là 0 và 1
    {
        X[i] = val;
   
        if (i == (n-1)) // nếu i là phần tử cuối của dãy
        {
            int j;
            for(j = 0; j < n; j ++) // thì tin ra nhị phân mới tìm được
            {
                printf("%d",X[j]);
            }
            printf("\n");
        }
        else // nếu i chưa phải là phần tử cuối thì gán cho i sau là i+1.
        {
            dayNhiPhan(i+1, n, X); // gọi đệ quy tiếp tục thực hiện hàm
        }
    }
}
 
int main(void) {
  int n;
    printf("Nhập n : ");    
    scanf("%d", &n);
   
    int X[n];    
    printf("Dãy nhị phân có độ dài %d là:\n",n);
    dayNhiPhan(0, n, X);  
 
  printf("\n---------------------------------\n");
  return 0;  
}
