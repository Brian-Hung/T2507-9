//UCLN
int UCLN(int a, int b){
	int max;
	for(int i = 1;i< a|| i<b; i++ ){
		if(a%i == 0 && b%i==0 ){
			max = i;
		}
	}
	return max;
}
//BCNN
int BCNN(int a, int b) {
    int max = (a > b) ? a : b;  
    for (int i = max; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;  
        }
    }
    return a * b; 
}
//Tổng các chữ số
 int tong(int n){
    	int tong = 0;
    	  while(n != 0){
         tong += n % 10;
        n /= 10;
    }
     return tong;
	}
//S= x^y	
	int luyThua(int x, int y) {
    int s = 1;
    for (int i = 0; i < y; i++) {
        s *= x;
    }
    return s;
}
//Đảo ngược số
int daoNguoc(int n) {
    int dao = 0;
    while (n != 0) {
        dao = dao * 10 + n % 10;
        n /= 10;
    }
    return dao;
}
//tìm phần tử lớn nhất mảng
int timMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
//tìm phần tử bé nhất mảng
int timMin(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}
//xắp sếp mảng tăng dần
void sapXepTang(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
//đảo ngược mảng	
void daoNguocMang(int a[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}	