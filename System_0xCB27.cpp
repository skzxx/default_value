#include <iostream>

double System_Fungsi_Volume_Kubus(double Parameter_Variabel_Panjang, double Parameter_Variabel_Lebar, double Parameter_Variabel_Tinggi = 1);

int main () {
  std::cout << "Volume of cube = " << System_Fungsi_Volume_Kubus(3,4) << std::endl;
  std::cin.get();
  return 0;
}

double System_Fungsi_Volume_Kubus(double Parameter_Variabel_Panjang, double Parameter_Variabel_Lebar, double Parameter_Variabel_Tinggi) {
  double System_Return_Value;
  System_Return_Value = (Parameter_Variabel_Panjang * Parameter_Variabel_Lebar * Parameter_Variabel_Tinggi);
  return System_Return_Value;
}