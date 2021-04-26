// yiginlistele.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;


struct node {
	int data;
	struct node* next;
};

class stack {
public:
	node* top;
	stack()
	{
		top = NULL;
	}
};

stack stk = stack();

void ekle(int sayi)
{
	struct node* temp = new node;
	temp->data = sayi;
	temp->next = stk.top;
	stk.top = temp;
}

void sil()
{
	if (stk.top == NULL)
		cout << "Stack bos !... " << endl;
	else {
		cout << "Silinen eleman : " << stk.top->data << endl;
		stk.top = stk.top->next;
	}
}
void listele() {
	if (stk.top == NULL)
		cout << "Stack bos !... " << endl;
	else {
		struct node* ptr = stk.top;
		cout << "Stack elamanlari : ";
		while (ptr != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
	}
	cout << endl;
}

int main()
{
	int ch, sayi;
	cout << "1- Ekle " << endl;
	cout << "2- Cikar " << endl;
	cout << "3- Listele " << endl;
	cout << "4- Cikis" << endl;
	do {
		cout << "-- Secim Yapiniz : " << endl;
		cin >> ch;
		switch (ch) {
		case 1: {
			cout << "Eklenecek sayiyi giriniz :" << endl;
			cin >> sayi;
			ekle(sayi);
			break;
		}
		case 2: {
			sil();
			break;
		}
		case 3: {
			listele();
			break;
		}
		case 4: {
			cout << " Cikis... " << endl;
			break;
		}
		default: {
			cout << " Hatalı Secim !.. " << endl;
		}
		}
	} while (ch != 4);
	return 0;
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
