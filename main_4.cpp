#include <iostream>
#include <math.h>
#include <iomanip>
int main(){
  double x1,x2,y1,y2,length_1,length_2, dot_product, angle;
  std::cin >> x1;
  std::cin >> y1;
  std::cin >> x2;
  std::cin >> y2;

  length_1 = sqrt((x1*x1)+(y1*y1));
  length_2 = sqrt((x2*x2)+(y2*y2));
  dot_product = ((x1/length_1)*(x2/length_2)+(y1/length_1)*(y2/length_2));

  std::cout << std::fixed;
  
  std::cout << "Length of v1: " << std::setprecision(4) << length_1 << "\n";
  std::cout << "Length of v2: " << std::setprecision(4) << length_2 << "\n";

  if(dot_product==0){
    std::cout << "Their normalized dot product is " <<
     std::setprecision(4) << dot_product << " and they are Perpendicular\n";
  }
  if(dot_product>0){
    std::cout << "Their normalized dot product is " << std::setprecision(4) << dot_product << " and they are Acute\n";
  }
  if(dot_product<0){
    std::cout << "Their normalized dot product is " << std::setprecision(4) << dot_product << " and they are Obtuse\n";
  }

  return 0;
}