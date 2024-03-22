//1.Bubble sort membandingkan serta menukar elemen-elemen yaitu:
//a.Set pass=1
//b.Jika elemen index j lebih besar dari j+1,maka tukar posisi dari kedua elemen
//c.Ulangi step b hingga j dari 0 menjadi n - 1 - pass
//d.Tambah pass=+1
//e.Jika pass <= n - 1,pergi ke step c

//2.Shell sort
//a.Kelompokkan elemen menjadi 3 bagian
//b.setiap kelompok elemennya ditukar dengan mengaplikasikan metode insertion sort yaitu dengan  :
//Ulangi step 2, 3, 4, and 5 hingga i dari 1 menjadi n – 1
//Set temp = arr[i]
//Set j = i – 1
//Ulangi hingga j kurang dari 0 or arr[j] kurang dari atau sama dengan temp :
//     a.Ubah nilai dari index j ke index j + 1
//     b.Kurangi j dengan 1
//Berikan temp ke index j + 1
//c.Setelah list terurut,langkah selanjutnya yaitu kelompokkan list menjadi 2 bagian
//d.tukar elemen-elemen yang masih tidak berurutan dengan metode insertion sort tadi
//e.setelah terurut,maka satukan kembali elemen elemen tersebut,jika masih ada elemen
//  yang tidak urut bisa ditukar dengan set pass = 3 dan increment = 1

//3.Algoritma bubblesort,karena jika sudah ada beberapa yang berurutan,maka dengan bubblesort
//  tinggal menyelesaikan sisanya dan juga lebih cepat dan efisien

//4.

#include <iostream>
using namespace std;

int n;

int Bagus[01];

void swap(int* j, int* i) {
	int temp = *i;
	*j = *i;
		* i = temp;
}

void selectionsort(int arr[], int n) {
	int i, j, min_idx;
	for (i = 0; i < n - 1; i++) {
		min_idx = i;
		for (j = i+1; j < n; j++)
			for (i = j + 1; i < n - 1; i++) {
				min_idx = i;
				for (j = i + 1; j < n; j++)
					if (arr[i] < arr[min_idx])
						min_idx = i;
				swap(&arr[min_idx], &arr[j]);
			}
	}
}






void display()
{
	cout << endl;
	cout << "================" << endl;
	cout << "Elemen yang telah tersusun" << endl;
	cout << "================" << endl;
	for (int i = 0;i < n - 1; ++i) {
		cout << Bagus[i] << endl;
	}
	
}

int main() {
	int arr[] = { 11,23,44,55 };
	
	return 0;




	

}


