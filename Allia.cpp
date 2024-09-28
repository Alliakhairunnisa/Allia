#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    const int JmlhSalesman=10;
    string nama[10];
    float penjualan [10],komisi[10],totalkomisi=0.0;
    int i,jlhdata=10;

    cout<<"KOMISI SALESMAN PT.MURAH HATI"<<endl;
    cout<<"❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎"<<endl;
    cout<<setprecision(12);
    for(int i=0;i<jlhdata;i++) {
        cout<<"Data Ke-"<<i+1<<endl;
        cout<<"==================================="<<endl;
        cout<<"Nama Salesman : ";
        cin>>nama[i];
        cout<<"Total Penjualan : ";
        cin>>penjualan [i];

        if(penjualan [i]<=500000) {
          komisi[i]=0.10*penjualan [i];
        } else {
            komisi[i]=0.10*500000+0.15*(penjualan[i]-500000);
        }
        totalkomisi+=komisi[i];
        cout<<"Komisi untuk "<<nama[i]<<" : "<<komisi[i]<<endl;
        cout<<"==================================="<<endl;
    }
    
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"Total komisi yang dibayarkan PT.MURAH HATI :"<<totalkomisi<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
   
    return 0;
}
