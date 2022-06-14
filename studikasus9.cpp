#include <iostream>
using namespace std;

class array12{
  public:
    void input();
    void data1d();
    void sorting();
    void konversi();
    void outputt();
  private:
    int n,urt,jml;
    int data[20];
    int output[40][40];
    int c[40];
    int d=0;
};
//Proses memasukkan data
void array12::input(){
  cout<<"Masukkan Jumlah data : ";cin>>jml;
for (int i=0; i<jml;i++){
        cout<<"data ke-"<<i+1<<" = ";
        cin>>data[i];
}
         cout<<endl;
}
//proses menampilkan array 1 dimensi
void array12::data1d(){
  cout<<"Data Array 1 dimensi\n";
for (int j=0; j<jml;j++){
        cout<<data[j]<<" , ";
  }
        cout<<endl;
}
//Proses pengurutan data
void array12::sorting(){
  for(int c=1;c<jml;c++)
    {
        for(int d=0;d<jml-c;d++)
        {
            if(data[d] > data[d+1])
            {
                urt=data[d];
                data[d]=data[d+1];
                data[d+1]=urt;
            }
        }
    }
}

//Proses Konversi array 1d ke array 2d setelah diurutkan
void array12::konversi(){
  cout<<"\nArray 2d setelah diurutkan\n";
for (int k=0;k<4;k++){
        for (int l=0;l<5;l++){
                output[k][l]=data[d];
                d++;
        }
  }
}
//Hasil array 2d matriks 5 kolom 4 baris
void array12::outputt(){
  for (int k=0;k<4;k++){
        for (int l=0;l<5;l++){
                cout<<output[k][l]<<"   ";
        }
cout<<endl;
  }
}
int main(){
array12 x;
x.input();
x.data1d();
x.sorting();
x.konversi();
x.outputt();
return 0;
}
