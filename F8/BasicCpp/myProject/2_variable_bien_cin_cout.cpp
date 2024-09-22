// Bien (variable ) la gi 
/* Bien duoc su dung de luu tru du lieu cua chuong trinh,
bien mang y nghia co the thay doi duoc */

// Cach su dung bien 
//		-Truoc khi su dung phai khai bao bien 
/*		-Cu phap khai bao: <kieu du lieu> <ten bien>; 
					 hoac  <kieu du lieu> <ten bien 1>, <ten bien 2>, ...;   */
	#include<iostream>
	int main(){
		int i ;// bien i co kieu du lieu so nguyen integer
		float f ;// bien f co kieu du lieu so thuc float
		char c ;// khai bao bien c co kieu du lieu  
		
	    int a, b; // Khai bao 2 bien a,b co kieu du lieu so nguyen  (integer)
	    int d = 1; // Khai bao bien d va gan gia tri (assign) cho bien gia tri = 1
	
	    std::cout << d; // lenh hien thi gia tri d ra ngoai man hinh console 
	
	    return 0;
	} 
//-------------------------------------------------------------------------------------
//	Cach dat ten bien 
//		Khong dat ten bien trung voi tu khoa (void, for, while, do, delete,..)
//		Ten bien khong chua khoang trang hoac ky tu dac biet 
//		Ky tu dau tien cua ten bien phai la chu cai 

//	Nhap xuat du lieu 
/*	De  nhap xuat du lieu trong C++, chung ta su dung thu vien iostream.
	Thu vien nay cung cap dinh nghia co san de su dung */
//		std::cout - in du lieu ra console
		#include <iostream>
		int main()
		{
		    std::cout << "Hello World!"; // In ra console chuoi "Hello World!"
		    return 0;
		}
//-------------------------------------------------------------------------------------
//		std::cin - doc va gan du lieu cho bien duoc chi dinh(nhap du lieu)
 
int main()
{
    int x;
    std::cout << "x = ";
    std::cin >> x; // Nh?p vào giá tr? c?a x

    std::cout << "Value of x: " << x; // In ra console giá tr? c?a x

    return 0;
}






























