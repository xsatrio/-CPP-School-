#include <iostream>
using namespace std;

struct NODE{
    int DATA;
    struct NODE *NEXT;
};

int jml_node = 0;                               //untuk jumlah node dalam Linked List

struct NODE *getNode (int X);                   //Fungsi membuat dan mengembalikan nilai Node void
void ShowLIST (NODE *NodePENUNJUK);             //Fungsi untuk menampilkan Linked List
void InsertFIRST (NODE **H_Node, int nilai);    //Fungsi menambah NODE di awal dari Linked List
void InsertLAST (NODE **H_Node, int nilai);     //Fungsi menambah NODE di akhir dari Linked List
void DeleteFIRST (NODE **H_Node);               //Fungsi menghapus NODE pertama
void DeleteLAST (NODE **H_Node);                //Fungsi menghapus NODE terakhir 0;

main(){
    struct NODE *HEAD_List = NULL;              //deklarasi sebuah Singly List bertipe pointer struct
    int NILAI;
    int PILIH;
    do{
        system ("cls");
        cout << " Perintah pada Linked List \n ";
        cout << " ------------------------- \n ";
        cout << " 1 . Insert Fist \n ";
        cout << " 2 . Insert Last \n ";
        cout << " 3 . Delete First \n ";
        cout << " 4 . Delete Last \n ";
        cout << " 5 . Exit \n ";
        cout << " ------------------------- \n ";
        cout << " Current List : ";
        ShowLIST(HEAD_List);
        cout << " ------------------------- \n ";
        cout << " Pilihan : "; cin>>PILIH;
        switch (PILIH){
            case 1 :{
                cout << " \n \n ";
                cout << " Fungsi Insert First \n ";
                cout << " ===================== \n ";
                cout << " Input nilai yang akan ditambah : "; cin>>NILAI;
                InsertFIRST (&HEAD_List, NILAI);
                break;
            }
            case 2 : {
                cout << " \n \n ";
                cout << " Fungsi Insert Last \n ";
                cout << " ===================== \n ";
                cout << " Input nilai yang akan ditambah : "; cin>>NILAI;
                InsertLAST (&HEAD_List, NILAI);
                break;
            }
            case 3 : {
                cout << " \n \n " ;
                cout << " Fungsi Delete First \n ";
                cout << " ===================== \n ";
                DeleteFIRST (&HEAD_List);
                break;
            }
            case 4 : {
                cout << " \n \n ";
                cout << " Fungsi Delete Last \n ";
                cout << " ===================== \n ";
                DeleteLAST (&HEAD_List);
                break;
            }
            case 5 : {
                cout << " \n \n " ;
                cout << " Program selesai ... \n " ;
                break ;
            }
            default : {
                cout << "\n Pilihan salah .. \n \n" ;
                system("pause");
            };
            cout << " Press any key ... \n \n " ;

        }
    }while(PILIH != 5);
    system("pause");
}

struct NODE *getNode(int X){
    struct NODE *newNODE;
    newNODE = (struct NODE*) malloc (sizeof(struct NODE));  //alokasi memori untuk sebuah Node
    newNODE -> DATA = X;                                    //Memasukan nilai X ke elemen DATA
    newNODE -> NEXT = NULL;                                 //Memasukan nilai NULL ke elemen NEXT
    return newNODE;
}

void ShowLIST(struct NODE *NodePENUNJUK){
    if (jml_node == 0 ){
        cout << " Singly Linked List kosong ... ";
        }
        else{
            while (NodePENUNJUK != NULL){
                cout << " " << NodePENUNJUK->DATA; //menampilkan elemen DATA yg ditunjuk oleh Node PENUNJUK
                NodePENUNJUK = NodePENUNJUK->NEXT; //merubah alamat yg ditunjuk oleh NodePENUNJUK ke elemen NEXT;
            }
            cout << endl;
            cout << " Jumlah NODE ada " << jml_node;
        }
        cout << endl;
}

void InsertFIRST(struct NODE **H_Node, int nilai){
    struct NODE *TEMP_NODE = NULL;              //deklarasi TEMP_NODE digunakan untuk penampungan sementara
    TEMP_NODE = getNode(nilai);                 //Membuat NODE baru dan ditampung pada TEMP_NODE ;
    if (*H_Node == NULL){                       //jika LIST NULL
        *H_Node = TEMP_NODE;                    //merubah H_Node untuk menunjuk ke NODE terbaru yg ke paling depan
    }
    else{                                       //Jika LIST tidak kosong
        TEMP_NODE->NEXT = *H_Node;              // Menunjuk TEMP_NODE- > NEXT ke alamat LIST
        *H_Node = TEMP_NODE;                    // Menunjuk LIST ke alamat TEMP_NODE
    }
    jml_node++;                                 // menambah catatan jumlah node
    TEMP_NODE = NULL;
}

void InsertLAST(struct NODE **H_Node, int nilai){
    struct NODE *TEMP_NODE = NULL;              //deklarasi TEMP_NODE digunakan untuk penampungan sementara
    NODE *NodePENUNJUK;                         //Deklarasi penunjuk NODE
    NodePENUNJUK = *H_Node;                     //NodePENUNJUK menunjuk LIST
    TEMP_NODE = getNode(nilai);                 //Membuat NODE baru dan ditampung pada TEMP_NODE;

    if (*H_Node == NULL){                        //jika LIST = NULL
        *H_Node = TEMP_NODE;                     //Merubah H_Node atau ada isinya
    }
    else{                                       //jika LIST != NULL atau ada isinya
        while (NodePENUNJUK->NEXT != NULL){
        NodePENUNJUK = NodePENUNJUK->NEXT;      //merubah alamat yang ditunjuk oleh NodePENUNJUK ke pointer NEXT;
        }
        NodePENUNJUK->NEXT = TEMP_NODE;         //Menyambungkan NODE baru di paling belakang
    }
    jml_node++;                                 //Menambah catatan jumlah node
}

void DeleteFIRST (struct NODE **H_Node){
    struct NODE *TEMP_NODE = NULL;              // deklarasi TEMP_NODE digunakan untuk penampungan sementara
    if (*H_Node == NULL){                        // jika LIST = NULL
        cout << endl ;
        cout << " Operasi tidak bisa dilakukan karena Singly Linked List kosong \n" ;
        cout << endl ;
        system("pause");
    }
    else{                                       // jika LIST tidak NULL
        TEMP_NODE = *H_Node;
        if (TEMP_NODE->NEXT == NULL){           // jika elemen NEXT = NULL
            *H_Node=NULL;                       // membuat LIST = NULL
            } else {                            // jika elemen NEXT tidak NULL atau list lebih dari 1 NODE
            *H_Node = TEMP_NODE->NEXT;          // merubah alamat LIST ke elemen NEXT
            TEMP_NODE->NEXT=NULL;               // elemen NEXT = NULL
            free(TEMP_NODE);                    // dealokasi atau membebaskan memori yang digunakan oleh TEMP_NODE
            }
            jml_node--;                         // mengurangi catatan jumlah node
    }
}

void DeleteLAST(struct NODE **H_Node){
    struct NODE *TEMP_NODE;                         // TEMP NODE digunakan untuk menampung TEMP NODE
    TEMP_NODE = *H_Node;                            // Node Penunjuk menunjuk H_Node NULL ) // jika * H_Node = NULL
    if (*H_Node == NULL){
        cout << "\n";
        cout << "Operasi tidak bisa dilakukan karena Singly Linked List kosong \n";
        cout << endl;
        system("pause");
        }
        else{                                       // jika * H_Node ! = NULL atau ada isinya
            if (TEMP_NODE->NEXT == NULL){
            *H_Node = NULL;
            }
        else{
            while (TEMP_NODE->NEXT->NEXT != NULL){
            TEMP_NODE = TEMP_NODE->NEXT;            // merubah alamat yg ditunjuk oleh TEMP_NODE ke pointer NEXT ;
            }
        TEMP_NODE->NEXT = NULL;                     // elemen NEXT = NULL
        free(TEMP_NODE);                            // dealokasi atau membebaskan memori yang digunakan oleh TEMP_NODE
        }
    jml_node--;                                     // mengurangi catatan jumlah node 0
    }
}

//FAIL VOID
//void DeleteLAST (struct NODE **H_Node){
//    struct NODE *TEMP_NODE;
//    TEMP_NODE = *H_Node;

//    if (*H_Node == NULL){
//        cout << endl ;
//        cout << " Operasi tidak bisa dilakukan karena Singly Linked List kosong " ;
//        cout << endl ;
//   }
//    else{
//        if (TEMP_NODE->NEXT == NULL ){
//            *H_Node = NULL;
//        } else{
//            while (TEMP_NODE->NEXT->NEXT != NULL ){
//                TEMP_NODE = TEMP_NODE->NEXT;
//            }
//            TEMP_NODE->NEXT = NULL;
//            free(TEMP_NODE);
//        }
//        jml_node--;
//    }
//}
