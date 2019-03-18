/**
 * @file LinkedList.hpp
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @brief file berisi definisi template class LinkedList
 * @version 0.1
 * @date 2019-03-20
 */

/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : LinkedList.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Kelas Generik Linked List. */

#include <cstddef>
#include <type_traits>
#include <iostream>
using namespace std;
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#define Nil nullptr

template <class T>
class LinkedList
{
	private :
		class ElmtList {
			private :
				T info;
				ElmtList* next;
			public :
				//ctor
				ElmtList(T element){
					info = element;
					next = Nil;
				}
				
				//Getter dan Setter untuk member data ElmtList
				T GetInfo() const {
					return info;
				}
				ElmtList* GetNext() const{
					return next;
				}
				void SetInfo(T elemen){
					info = elemen;
				}
				void SetNext(ElmtList* add){
					next = add;
				}
		};
		//Member data 
		ElmtList* first;
		
		// Member function private (hanya bisa diakses oleh Class LinkedList)
		ElmtList* Alokasi (T element){
			ElmtList* P;
			try {
				P = new ElmtList(element);
				return P;
			}
			catch (const bad_alloc& e) {
				cout<< "[Linked List] Alokasi Elemen gagal"<<endl;
				return Nil;
			}
		}
		void Dealokasi (ElmtList* P){
			delete P;
		}
	public:
		//ctor
		LinkedList(){
			first= Nil;
		}
		
		//cctor
		LinkedList(const LinkedList& copy){
			if (!copy.isEmpty()){
				ElmtList* P = Alokasi(copy.GetFirstEl());
				ElmtList* Psearch;
				first = P;
				Psearch = copy.GetFirstNext();
				if (Psearch!=Nil){
					while(Psearch->GetNext()!=Nil){
						add(Psearch->GetInfo());
						Psearch = Psearch-> GetNext();
					}
					add(Psearch->GetInfo());
				}
			}
			else
				first = Nil;
		}
		
		//dtor
		~LinkedList(){
			if (!isEmpty()){
				while (first!=Nil){
					ElmtList* P=first;
					first=P->GetNext();
					Dealokasi(P);
				}
			}
		}
		
		//operator assignment
		LinkedList& operator= (const LinkedList& ass){
			this->LinkedList::~LinkedList();
			if (not(ass.isEmpty())){
				ElmtList* P = Alokasi(ass.GetFirstEl());
				ElmtList* Psearch;
				first = P;
				Psearch = ass.GetFirstNext();
				if (Psearch!=Nil){
					while(Psearch->GetNext()!=Nil){
						add(Psearch->GetInfo());
						Psearch = Psearch-> GetNext();
					}
					add(Psearch->GetInfo());
				}
			}
			else
				first = Nil;
			return *this;
		}
		
		//predikat 
		bool isEmpty() const
		/* Mengirim true jika list kosong */
		{
			return first==Nil;
		}
		
		// Selektor
		T GetFirstEl() const{
			return first->GetInfo();
		}
		ElmtList* GetFirstNext()const {
			return first->GetNext();
		}
		T get(int indeks) const{
		/*fungsi yang mengembalikan suatu elemen pada indeks tertentu, terhitung dari depan list. list Sembarang, output dari fungsi adalah exception atau suatu elemen. exception list kosong jika list kosong, index out of range jika indeks yang diinput melebihi jumlah elemen list yang ada*/
			if(!isEmpty()){
				int i =0;
				ElmtList* P=first;
				while(P->GetNext()!=Nil && i<indeks){
					P=P->GetNext();
					i+=1;
				}
				if (P->GetNext()==Nil && i<indeks){
					throw "Indeks out of range";
				}
				else
					return P->GetInfo();
			}
			else
				throw "List Kosong";
		}
		int find(T element) const{
		/*fungsi searching, mencari letak pertama ditemukan dari suatu elemen tertentu, jika pencarian gagal mengembalikan angka -1*/
			ElmtList* P;
			if (!isEmpty()){
				P=first;
				int i =0;
				while(P->GetNext()!=Nil && P->GetInfo()!=element){
					P=P->GetNext();
					i+=1;
				}
				if (P->GetNext()==Nil && P->GetInfo()!=element)
					return -1;
				else
					return i;
			}
			return -1;
		}

		//Fungsi Memanipulasi list.
		void add(T element)
		/* I.S. L mungkin kosong */
		/* F.S. Melakukan alokasi sebuah elemen dan */
		/* menambahkan elemen list di akhir: elemen terakhir yang baru */
		/* bernilai X jika alokasi berhasil. Jika alokasi gagal: I.S.= F.S. */
		{
			ElmtList* P=Alokasi(element);
			ElmtList* P1;
			if (P!=Nil){
				if (isEmpty())
					first=P;
				else{
					P1=first;
					while(P1->GetNext()!=Nil)
						P1=P1->GetNext();
					P1->SetNext(P);
				}
			}
		}
		
		void addElementFirst(T element)
		/* I.S. L mungkin kosong */
		/* F.S. Melakukan alokasi sebuah elemen dan */
		/* menambahkan elemen pertama dengan nilai X jika alokasi berhasil */
		{
			ElmtList* P=Alokasi(element);
			if (P!=Nil){
				if (!isEmpty())
					P->SetNext(first);
				first=P;
			}
		}
		void remove(T element){
		/*menghapus suatu elemen tertentu dari list dengan tetap menjaga keterurutan list. 
		proses mencari elemen yang diinginkan, dan menyimpan 1 elemen sebelum list. kemudian menghapus dan menjaga keteraturan list.*/
			ElmtList* P;
			ElmtList* prec;
			if (!isEmpty()){
				P=first;
				prec=Nil;
				while(P->GetNext()!=Nil && P->GetInfo()!=element){
					if (P->GetInfo()!=element && P->GetNext()!=Nil){
						prec=P;
						P=P->GetNext();
					}
				}
				if (P->GetNext()==Nil && P->GetInfo()!=element)
					P=Nil;
				else if (P->GetNext()==Nil){
					prec->SetNext(Nil);
					Dealokasi(P);
				}
				else{
					if (prec!=Nil){ 
						prec->SetNext(P->GetNext());
						Dealokasi(P);
					}
					else{
						first = P->GetNext();
						Dealokasi(P);
					}	
				}
			}
		}
		
		// fungsi tambahan
		void PrintInfo() const{
		/* I.S. List mungkin kosong */
		/* F.S. Jika list tidak kosong, iai list dicetak ke kanan: [e1,e2,...,en] */
		/* Contoh : jika ada tiga elemen bernilai 1, 20, 30 akan dicetak: [1,20,30] */
		/* Jika list kosong : menulis [] */
		/* Tidak ada tambahan karakter apa pun di awal, akhir, atau di tengah */
			ElmtList* P;
			if (isEmpty())
				cout<<"[]"<<endl;
			else{
				P=first;
				cout<<"[";
				while(P->GetNext()!=Nil){
					cout<<P->GetInfo()<<",";
					P=P->GetNext();
				}
				cout<<P->GetInfo()<<"]"<<endl;
			}
}
};

#endif
