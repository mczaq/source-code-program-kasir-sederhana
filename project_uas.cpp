#include <iostream> 
#include <string.h> 
#include <conio.h>  
#include <stdlib.h> 

using namespace std;

 #define ppn 0.10 //PPN = 10%

 main(){
	   char nama[50], menu[20], back; //char adalah variabel yang hanya bisa memasukan 1 karakter saja
    int jumlah, makanan, makan, total, bayar, kurang, bonus, pajak, kembalian, harga_diskon,
        harga[6]={5000, 10000, 15000, 20000, 25000, 30000}, i=0;
    bool saldo; //Tipe data boolean adalah tipe data yang hanya bisa diisi salah satu dari 2 nilai: true atau false.
	
    do{
        cout<<"|----------------------------------------------------|"<<endl;
	    cout<<"|---------------------warung-------------------------|" <<endl;
        cout<<"|--------------------Elon Muks-----------------------|" <<endl;
        cout<<"|-------------------Sego Campur----------------------|" <<endl;
        cout<<"|-------------------Bebek Madura---------------------|" <<endl;
        cout<<"|----------------------------------------------------|" <<endl;
        cout<<"Masukan Nama Anda :"<<endl;
        cin>>nama;
        
        cout<<"Pilih menu yang tersedia"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"|           [1] Nutri Sari     = Rp5000            |" <<endl;
        cout<<"|           [2] Esteh          = Rp10000           |" <<endl;
        cout<<"|           [3] Ayam Krispi    = Rp15000           |" <<endl;
        cout<<"|           [4] Pecel          = Rp20000           |" <<endl;
        cout<<"|           [5] Nasi Cumpur    = Rp25000           |" <<endl;
        cout<<"|           [6] Bebek Madura   = Rp30000           |" <<endl;
        cout<<"----------------------------------------------------" <<endl;
        cout<<"        (Pilih menu makanan berdasarkan nomor)"<<endl;
        cout<<"Makanan yang anda pilih :";
        cin>>makanan;

    //percabangan
      switch (makanan)
        {
        case 1:
            strcpy(menu,"Nutri Sari");
            break;
        case 2:
            strcpy(menu,"Esteh");
            i=1;
            break;
        case 3:
            strcpy(menu,"Ayam Krispi");
            i=2;
            break;
        case 4:
            strcpy(menu,"Pecel");
            i=3;
            break;
        case 5:
            strcpy(menu,"Nasi Campur");
            i=4;
            break;
        case 6:
            strcpy(menu,"Bebek Madura");
            i=5;
            break;
        default:
            cout<<"pilihan menu yang anda pilih tidak tersedia"<<endl;
        }
        
        cout<<"menu yang anda pilih : "<<menu<<endl;
        cout<<"jumlah makanan yang anda pilih : ";
        cin>>jumlah;

        makan = jumlah * harga[i];
        pajak = makan * ppn;
        total = pajak + makan;
        cout << endl;
        
        cout << "-------------------------------------------------------" << endl;
		cout << "|  	          Warung Elon Muks                     |" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "\tNama Pemesan          : "	<< nama     <<endl;
		cout << "\tMenu Makanan          : "	<< menu     <<endl;
		cout << "\tJumlah Makanan        : "	<< jumlah   <<" porsi" <<endl;
		cout << "\tHarga Makanan         : "	<< harga[i] << " x "   << jumlah << endl;
		cout << "\tPajak Negara          : "	<< pajak    <<endl;	
		cout << "\tTotal Pembayaran      : Rp " << total    <<endl;
		
        	//diskon
        if(jumlah>=6){
         cout<<endl;
         cout << "Total Belanja: Rp."<<total<<endl;
        // cin >> total;00
         if ((total >= 100000) && (total < 500000)) {
             harga_diskon = total - (0.1*total);
               cout << "Selamat, anda mendapat diskon 10%" << endl;
        }
        else if ((total >= 500000) && (total < 1000000)) {
             harga_diskon = total - (0.2*total);
               cout << "Selamat, anda mendapat diskon 20%" << endl;
        }
        else if (total >= 1000000) {
             harga_diskon = total - (0.3*total);
              cout << "Selamat, anda mendapat diskon 30%" << endl;
        } 
        else {
             harga_diskon = harga_diskon;
        }
 
  cout << "Total bayar: Rp." << harga_diskon << endl;
 
         cout << endl;
         cout<<"total pembayaran setelah diskon : Rp"<<harga_diskon<<endl;
        }

        cout<<"----------------------------------"<<endl;
        cout<<"silahkan bayar disini  : Rp ";
        cin>>bayar;
        

        while (saldo=bayar<total){
            cout << "Uang anda kurang, Silahkan bayar lagi : Rp. "; 
            cin>>kurang;
			bayar+=kurang;
        };
        kembalian = bayar - harga_diskon;
//        kembalian = bayar - harga_total;
        cout<<"Uang yang anda bayar \t\t\t Rp" <<bayar<<endl;
        cout<<"Uang kembalian \t\t\t\t Rp" <<kembalian<<endl;
        cout<<"--------------------------------------------------------"<<endl;

            cout << "			[Y = ya / T = tidak]"<<endl;
			cout << "		Apakah anda ingin memesan lagi ? [Y/T]  =  "<<endl; 
            cin>>back;
    }
	while (back=='Y' || back=='Y');{
   cout<<endl;
   cout<<"Terimakasih telah memesan makanan di Warung Elon Muks"<<endl;
   cout<<"                selamat menikmati"<<endl;
    }
   return 0;
 }
        
        

