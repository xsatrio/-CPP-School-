#include <iostream>
using namespace std;

const int MAX = 10;
struct Stack{
  int values[MAX];
  int top;
} stack;

void pause();
void reset();
bool isEmpty();
bool isFull();
void push(int value);
void pop();
void dump();

int main(){
  int choice, value;
  reset();

  do{
    system("cls"); 

    cout << "Perintah pada Stack:\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Print\n";
    cout << "4. Clear\n";
    cout << "5. Keluar\n";
    cout << "\nPilihan: ";
    cin >> choice;

    switch (choice){
    case 1:
      if (isFull()){
        cout << "Tumpukan penuh!\n\n";
        pause();
        break;
      }

      cout << "Item yang akan di push: ";
      cin >> value;

      push(value);
      cout << "\n";
      pause();
      break;

    case 2:
      if (isEmpty()){
        cout << "Tumpukan kosong!\n\n";
        pause();
        break;
      }

      cout << "Item yang akan di pop: ";
      cout << stack.values[stack.top] << "\n";

      pop();
      cout << "\n";
      pause();
      break;

    case 3:
      if (isEmpty()){
        cout << "Tumpukan kosong!\n\n";
        pause();
        break;
      }

      cout << "Item pada tumpukan:\n";
      dump();
      cout << "\n\n";
      pause();
      break;

    case 4:
      reset();
      cout << "Tumpukan dikosongkan!\n\n";
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

void reset(){
  stack.top = -1;
}

bool isEmpty(){
  if (stack.top != -1)
  {
    return false;
  }

  return true;
}

bool isFull(){
  if (stack.top != (MAX - 1))
  {
    return false;
  }

  return true;
}

void push(int value){
  stack.top += 1;
  stack.values[stack.top] = value;
}

void pop(){
  stack.top = stack.top - 1;
  if (stack.top < 0)
  {
    stack.top = -1;
  }
}

void dump(){
  cout << "[ ";
  for (int loop = 0; loop <= stack.top; loop++)
  {
    if (loop != 0)
    {
      cout << ", ";
    }

    cout << stack.values[loop];
  }

  cout << " ]";
}