#include <stdio.h>
#include <string.h>
bool checkLaptopEndsWith(char* name){
    char *ending = strrchr(name, 'L'); 
    //^buat dapetin bagian akhir dari name, patokannya dari L terakhir yg muncul
    if (strcmp(ending, "Laptop")==0) return true; 
    return false;
}

void buyLaptop()
{
	char laptopname[100];
	int quantity;
	int priceawal;
	int discount = 0;
	int price;
	int priceakhir;
	
		do{
			printf("Laptop name (length must be >7 and ends with 'Laptop' (case sensitive)):");
			scanf("%[^\n]", &laptopname); getchar();
		}while(strlen(laptopname) < 7 || !checkLaptopEndsWith(laptopname) );
		
		do{	
			printf("Quantity (between 1 to 5 inclusive):");
			scanf("%d", &quantity); getchar();
		}while(quantity < 1 || quantity > 5);
	
		do{
			printf("Price (>=2000000) :");
			scanf("%d", &priceawal); getchar();
		}while(priceawal < 2000000);
		
		
		for(int i=0; i<5; i++){
			printf("\n");
		}
		
	if(quantity > 2){
		discount = 600000;
		price = priceawal * quantity;
		priceakhir = price - discount;
		
		printf("Laptop Name:%s\n", laptopname);
		printf("Total qty:%d\n", quantity);
		printf("Price per item:%d\n", priceawal);
		printf("Price before discount:%d\n", price);
		printf("Discount:%d\n", discount);
		printf("Final Price:%d\n", priceakhir);
		printf("Terima Kasih Telah Menggunakan Aplikasi Ini");
		
		for(int i=0; i<5; i++){
			printf("\n");
		}
	}
	else{
		priceakhir = priceawal * quantity;
		
		printf("Laptop Name:%s\n", laptopname);
		printf("Total qty:%d\n", quantity);
		printf("Price per item:%d\n", priceawal);
		printf("Price before discount:%d\n", priceakhir);
		printf("Discount:%d\n", discount);
		printf("Final Price:%d\n", priceakhir);
		printf("Terima Kasih Telah Menggunakan Aplikasi Ini");
		
		for(int i=0; i<5; i++){
			printf("\n");
		}
	}
}


int main() 
{
	
	int inpMenu;
	
	do
	{
		printf("Laptop Store\n");
		printf("1. Buy Laptop\n");
		printf("2. Exit\n");
		printf(">>");
		scanf("%d", &inpMenu); getchar();
	
		switch (inpMenu)
		{
			case 1:
				buyLaptop();
				break;
				
				default:
					break;
		}
		
		
	}
	
	while(inpMenu != 2);
	
//	char mystring[] = ""
//
//bool endswith(char *string, char *end)
//{
//	int string_length = strlen(string);
//	int end_length = strlen(end);
//	
//	if (end_length > string_length) return false;
//	
//	for (int i = 0; i < end_lenght; i++)
//		if (string[string_length - i] != end[end_length - i])
//			return false;
//		return true;
//}

return 0;
}
