#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//typedef struct ThongTin {
//	char name[50], address[100], email[100], sdt[15];
//	int age;
//} ThongTin;

void NhapThongTin() {
	char name[50], address[100], email[100], sdt[15];
	int age;
	
	printf("Nhap ten: ");
	fflush(stdin);fflush(stdout);
	gets(name);
	
	printf("Nhap tuoi: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &age);
	
	printf("Nhap dia chi: ");
	fflush(stdin);fflush(stdout);
	gets(address);
	
	printf("Nhap email: ");
	fflush(stdin);fflush(stdout);
	gets(email);
	
	printf("Nhap sdt: ");
	fflush(stdin);fflush(stdout);
	gets(sdt);
	
	FILE *fp;
	
	fp = fopen("myinfor.txt", "w+");
	
	if(ferror(fp)) {
		printf("\nLoi!!");
	} else {
		fprintf(fp, "Ten: %s \nTuoi: %d \nDia chi: %s \nEmail: %s \nSDT: %s", name, age, address, email, sdt);
	}
	
	fclose(fp);
}

int main(int argc, char *argv[]) {
	NhapThongTin();	
	return 0;
}
