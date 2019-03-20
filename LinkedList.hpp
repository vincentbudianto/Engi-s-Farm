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

/**
 * @brief Template class LinkedList
 * 
 * @tparam T 
 */
template <class T>
class LinkedList
{
	public:
		/**
		 * @brief Construct a new Linked List object
		 * 
		 */
		LinkedList()
		{
			first= Nil;
		}
		
		/**
		 * @brief Construct a new Linked List object
		 * 
		 * @param copy 
		 */
		LinkedList(const LinkedList& copy)
		{
			if (!copy.isEmpty())
			{
				ElmtList* P = Alokasi(copy.GetFirstEl());
				ElmtList* Psearch;
				first = P;
				Psearch = copy.GetFirstNext();

				if (Psearch != Nil)
				{
					while (Psearch->GetNext() != Nil)
					{
						add(Psearch->GetInfo());
						Psearch = Psearch->GetNext();
					}

					add(Psearch->GetInfo());
				}
			}
			else
			{
				first = Nil;
			}
		}
		
		/**
		 * @brief Destroy the Linked List object
		 * 
		 */
		~LinkedList()
		{
			if (!isEmpty())
			{
				while (first != Nil)
				{
					ElmtList* P = first;
					first = P->GetNext();
					Dealokasi(P);
				}
			}
		}
		
		/**
		 * @brief Operator overloading =
		 * 
		 * @param ass 
		 * @return LinkedList& 
		 */
		LinkedList& operator= (const LinkedList& ass)
		{
			this->LinkedList::~LinkedList();

			if (not(ass.isEmpty()))
			{
				ElmtList* P = Alokasi(ass.GetFirstEl());
				ElmtList* Psearch;
				first = P;
				Psearch = ass.GetFirstNext();

				if (Psearch != Nil)
				{
					while (Psearch->GetNext() != Nil)
					{
						add(Psearch->GetInfo());
						Psearch = Psearch->GetNext();
					}

					add(Psearch->GetInfo());
				}
			}
			else
			{
				first = Nil;
			}
			
			return *this;
		}
		
		/**
		 * @brief Menghasilkan true jika list kosong
		 * 
		 * @return true 
		 * @return false 
		 */
		bool isEmpty() const
		{
			return (first == Nil);
		}
		
		/**
		 * @brief Get the First El object
		 * 
		 * @return T 
		 */
		T GetFirstEl() const
		{
			return first->GetInfo();
		}
		
		/**
		 * @brief Get the First Next object
		 * 
		 * @return ElmtList* 
		 */
		ElmtList* GetFirstNext()const
		{
			return first->GetNext();
		}

		/**
		 * @brief fungsi yang mengembalikan suatu elemen pada indeks tertentu, terhitung dari depan list.\nList Sembarang, output dari fungsi adalah exception atau suatu elemen.\nexception "list kosong" jika list kosong\nexception "index out of range" jika indeks yang diinput melebihi jumlah elemen list yang ada
		 * 
		 * @param indeks 
		 * @return T 
		 */
		T get(int indeks) const
		{
			if(!isEmpty())
			{
				int i =0;
				ElmtList* P=first;
				
				while ((P->GetNext() != Nil) && (i < indeks))
				{
					P = P->GetNext();
					i += 1;
				}

				if ((P->GetNext() == Nil) && (i < indeks))
				{
					throw "Indeks out of range";
				}
				else
				{
					return P->GetInfo();
				}
			}
			else
			{
				throw "List Kosong";
			}
		}

		/**
		 * @brief fungsi searching, mencari letak pertama ditemukan dari suatu elemen tertentu.\nJika pencarian gagal mengembalikan angka -1
		 * 
		 * @param element 
		 * @return int 
		 */
		int find(T element) const
		{
			ElmtList* P;

			if (!isEmpty())
			{
				P = first;
				int i = 0;
				
				while ((P->GetNext() != Nil) && (P->GetInfo() != element))
				{
					P = P->GetNext();
					i += 1;
				}
				
				if ((P->GetNext() == Nil) && (P->GetInfo() != element))
				{
					return -1;
				}
				else
				{
					return i;
				}
			}

			return -1;
		}

		/**
		 * @brief I.S. L mungkin kosong\nF.S. Melakukan alokasi sebuah elemen dan menambahkan elemen list di akhir: elemen terakhir yang baru bernilai X jika alokasi berhasil. Jika alokasi gagal: I.S.= F.S.
		 * 
		 * @param element 
		 */
		void add(T element)
		{
			ElmtList* P = Alokasi(element);
			ElmtList* P1;

			if (P != Nil)
			{
				if (isEmpty())
				{
					first = P;
				}
				else
				{
					P1=first;
					
					while (P1->GetNext() != Nil)
					{
						P1 = P1->GetNext();
					}
					
					P1->SetNext(P);
				}
			}
		}

		/**
		 * @brief I.S. L mungkin kosong\nF.S. Melakukan alokasi sebuah elemen dan menambahkan elemen pertama dengan nilai X jika alokasi berhasil
		 * 
		 * @param element 
		 */
		void addElementFirst(T element)
		{
			ElmtList* P = Alokasi(element);

			if (P!=Nil)
			{
				if (!isEmpty())
				{
					P->SetNext(first);
				}
				
				first = P;
			}
		}

		/**
		 * @brief Menghapus suatu elemen tertentu dari list dengan tetap menjaga keterurutan list.\nProses mencari elemen yang diinginkan, dan menyimpan 1 elemen sebelum list. kemudian menghapus dan menjaga keteraturan list.
		 * 
		 * @param element 
		 */
		void remove(T element)
		{
			ElmtList* P;
			ElmtList* prec;
		
			if (!isEmpty())
			{
				P = first;
				prec = Nil;
				
				while ((P->GetNext() != Nil) && (P->GetInfo() != element))
				{
					if ((P->GetInfo() != element) && (P->GetNext() != Nil))
					{
						prec = P;
					}
						P = P->GetNext();
				}

				if ((P->GetNext() == Nil) && (P->GetInfo() != element))
				{
					P = Nil;
				}
				else if (P->GetNext() == Nil)
				{
					prec->SetNext(Nil);
					Dealokasi(P);
				}
				else
				{
					if (prec != Nil)
					{ 
						prec->SetNext(P->GetNext());
						Dealokasi(P);
					}
					else
					{
						first = P->GetNext();
						Dealokasi(P);
					}	
				}
			}
		}

		/**
		 * @brief I.S. List mungkin kosong\nF.S. Jika list tidak kosong, iai list dicetak ke kanan: [e1,e2,...,en]\nContoh : jika ada tiga elemen bernilai 1, 20, 30 akan dicetak: [1,20,30]\nJika list kosong : menulis []\nTidak ada tambahan karakter apa pun di awal, akhir, atau di tengah
		 * 
		 */
		void PrintInfo() const
		{
			ElmtList* P;

			if (isEmpty())
			{
				cout << "[]" << endl;
			}
			else
			{
				P = first;
				cout << "[";

				while(P->GetNext() != Nil)
				{
					cout << P->GetInfo() << ",";
					P = P->GetNext();
				}

				cout << P->GetInfo() << "]" << endl;
			}
		}

	private:
		/**
		 * @brief Private class untuk LinkedList
		 * 
		 */
			class ElmtList
			{
			  public:
				/**
				 * @brief Construct a new Elmt List object
				 * 
				 * @param element 
				 */
				ElmtList(T element)
				{
					info = element;
					next = Nil;
				}

				/**
				 * @brief Get the Info object
				 * 
				 * @return T 
				 */
				T GetInfo() const
				{
					return info;
				}

				/**
				 * @brief Get the Next object
				 * 
				 * @return ElmtList* 
				 */
				ElmtList *GetNext() const
				{
					return next;
				}
				
				/**
				 * @brief Set the Info object
				 * 
				 * @param elemen 
				 */
				void SetInfo(T elemen)
				{
					info = elemen;
				}

				/**
				 * @brief Set the Next object
				 * 
				 * @param add 
				 */
				void SetNext(ElmtList *add)
				{
					next = add;
				}

			  private:
				T info;
				ElmtList *next;
			};

			/**
			 * @brief Member data
			 * 
			 */
			ElmtList *first;

			/**
			 * @brief Member function private (hanya bisa diakses oleh Class LinkedList)
			 * 
			 * @param element 
			 * @return ElmtList* 
			 */
			ElmtList *Alokasi(T element)
			{
				ElmtList *P;
				try
				{
					P = new ElmtList(element);
					return P;
				}
				catch (const bad_alloc &e)
				{
					cout << "[Linked List] Alokasi Elemen gagal" << endl;
					return Nil;
				}
			}

			/**
			 * @brief Dealokasi member data
			 * 
			 * @param P 
			 */
			void Dealokasi(ElmtList * P)
			{
				delete P;
			}
};

#endif
