#include <iostream>
using namespace std;

const int MAX = 10;
struct Queue{
  int values[MAX];
  int head = -1;
  int tail = -1;
} queue;

void pause();
void init();
bool isEmpty();
bool isFull();
void inqueue(int value);
void dequeue();
void clear();
void dump();

int main(){
  int choice, value;
  init();

  do{
    system("cls");

    cout << "Perintah pada Antrian/Queue:\n";
    cout << "1. InQueue\n";
    cout << "2. DeQueue\n";
    cout << "3. Dump\n";
    cout << "4. Clear\n";
    cout << "5. Keluar\n";
    cout << "\nPilihan: ";
    cin >> choice;

    switch (choice){
    case 1:
      if (isFull()){
        cout << "Antrian overflow!\n\n";
        pause();
        break;
      }

      cout << "Antrian yang akan di sisipkan: ";
      cin >> value;

      inqueue(value);
      cout << "\n";
      pause();
      break;

    case 2:
      if (isEmpty()){
        cout << "Antrian underflow!\n\n";
        pause();
        break;
      }

      cout << "Antrian yang akan di hapus: ";
      cout << queue.values[queue.head];

      dequeue();
      cout << "\n\n";
      pause();
      break;

    case 3:
      if (isEmpty()){
        cout << "Antrian kosong!\n\n";
        pause();
        break;
      }

      cout << "Daftar antrian:";
      dump();
      cout << "\n\n";
      pause();
      break;

    case 4:
      clear();
      cout << "Antrian dikosongkan!\n\n";
      pause();
      break;

    case 5:
      cout << "Program dihentikan.\n\n";
      pause();
      break;

    default:
      cout << "Pilihan kamu tidak valid!\n\n";
      pause();
    }
  } while (choice != 5);

  return 0;
}

void pause(){
  cout << "Press any key to continue...";
  cin.ignore();
  cin.get();
}

void init(){
  queue.head = -1;
  queue.tail = -1;
}

bool isEmpty(){
  if (queue.tail != -1)
  {
    return false;
  }

  return true;
}

bool isFull(){
  if (queue.tail != (MAX - 1))
  {
    return false;
  }

  return true;
}

void inqueue(int value){
  if (isEmpty()){
    queue.head = 0;
    queue.tail = 0;
    queue.values[queue.head] = value;

    return;
  }

  queue.tail += 1;
  queue.values[queue.tail] = value;
}

void dequeue(){
  int loop;
  for (loop = queue.head; loop <= queue.tail; loop++){
    queue.values[loop] = queue.values[loop + 1];
    queue.tail--;
  }
}

void clear(){
  while (isEmpty() == false){
    dequeue();
  }
}

void dump(){
  for (int loop = queue.head; loop <= queue.tail; loop++){
    cout << "\n- " << queue.values[loop];
  }
}
