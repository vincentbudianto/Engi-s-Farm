/* NIM/Nama  : 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * Nama file : LinkedList.hpp
 * Topik     : Tugas Besar 1 IF2210 - Pemograman Berorientasi Objek
 * Tanggal   : 20 Maret 2019
 * Deskripsi : Kelas Generik Linked List. */
 
// BELUM DICOBA PAKE DRIVER!! BESOK AK KASI SAMA DRIVERNYA JUGA.
#include <iostream>
using namespace std;
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#define Nil -1

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
				T GetInfo() {
					return info;
				}
				ElmtList* GetNext(){
					return next;
				}
				void SetInfo(T elemen){
					info = elemen;
				}
				void SetNext(ElmtList* add){
					next = add;
				}
		};
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
		LinkedList(){
			first= Nil;
		}
		LinkedList(const LinkedList& copy){
			if (!copy.isEmpty()){
				ElmtList* P = Alokasi(copy.GetFirstEl()),Psearch;
				first = P;
				Psearch = copy.GetFirstNext();
				if (Psearch!=Nil)
					while(Psearch->GetNext()!=Nil)
						add(Psearch->GetInfo());
			}
			else
				first = Nil;
		}
		~LinkedList(){
			if (!isEmpty()){
				while (first!=Nil){
					ElmtList* P=first;
					first=P->GetNext();
					Dealokasi(P);
				}
			}
		}
		LinkedList& operator= (const LinkedList& assign){
			this.~LinkedList();
			if (!assign.isEmpty()){
				ElmtList* P = Alokasi(assign.GetFirstEl()),Psearch;
				first = P;
				Psearch = assign.GetFirstNext();
				if (Psearch!=Nil)
					while(Psearch->GetNext()!=Nil)
						add(Psearch->GetInfo());
			}
			else
				first = Nil;
			return *this;
		}
		T GetFirstEl()
		//Getter member data LinkedList
		{
			return first->GetInfo();
		}
		ElmtList* GetFirstNext(){
			return first->GetNext();
		}
		int find(T element)
		{
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
		bool isEmpty()
		/* Mengirim true jika list kosong */
		{
			return first==Nil;
		}
		
		void add(T element)
		/* I.S. L mungkin kosong */
		/* F.S. Melakukan alokasi sebuah elemen dan */
		/* menambahkan elemen list di akhir: elemen terakhir yang baru */
		/* bernilai X jika alokasi berhasil. Jika alokasi gagal: I.S.= F.S. */
		{
			ElmtList* P =Alokasi(element),P1; 
			if (P!=Nil){
				if (isEmpty())
					first=P;
				else{
					P1=first;
					while(P1->GetNext()!=Nil)
						P1=P1->GetNext();
					P1->SetNext()=P;
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
					P->SetNext= first;
				first=P;
			}
		}
		void remove(T element)
		{
			ElmtList* P,prec;
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
				else if (P->GetNext==Nil){
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
		T get(int indeks)
		{
			ElmtList* P;
			if(!isEmpty){
				int i =0;
				while(P!=Nil && i<=indeks){
					P=P->GetNext();
					i+=1;
				}
				if (P==Nil)
					throw "Indeks out of range";
				else
					return P->GetInfo();
			}
			else
				throw "List Kosong";
		}
		
};

#endif
