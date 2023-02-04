int main() {
  
 double weight;
 int x;
 int condition;

  std::cout << "Introduce your Earth weight here:" << std::endl;
  std::cin >> weight;

  std::cout << "Do you want to see the list of available planets? (Y=1/n=2)";
  std::cin >> condition;
  if (condition == 1) {
        std::cout << "   1. Mercury 2. Venus   3. Mars    4. Jupiter" << std::endl;
        std::cout << "   5. Saturn  6. Uranus  7. Neptune" << std::endl << std::endl;
  }
  else {
        std::cout << "oh, okay, smarty" << std::endl;
  }

  std::cout << "Now introduce your desired planet (1-7):" << std::endl;
  std::cin >> x;

  switch (x) {

  case 1 :
        std::cout << "You have selected Mercury." << std::endl;
        weight *= 0.38;
         std::cout << "Your new weight is "  << weight << "kg." << std::endl;
  break;
  case 2 :
        std::cout << "You have selected Venus." << std::endl;
        weight *= 0.91;
         std::cout << "Your new weight is "  << weight << "kg." << std::endl;
  break;
  case 3:
        std::cout << "You have selected Mars." << std::endl;
        weight *= 0.38;
         std::cout << "Your new weight is "  << weight << "kg." << std::endl;
  break;
  case 4:
        std::cout << "You have selected Jupiter." << std::endl;
        weight *= 2.34;
         std::cout << "Your new weight is "  << weight << "kg." << std::endl;
  break;
  case 5 :
        std::cout << "You have selected Saturn." << std::endl;
        weight *= 1.06;
         std::cout << "Your new weight is "  << weight << "kg." << std::endl;
  break;
  case 6 :
        std::cout << "You have selected urANUS." << std::endl;
        weight *= 0.92;
         std::cout << "Your new weight is "  << weight << "kg." << std::endl;
  break;
  case 7 :
        std::cout << "You have selected Neptune." << std::endl;
        weight *= 1.19;
         std::cout << "Your new weight is "  << weight << "kg." << std::endl;
  break;
  default :
        std::cout << "You have selected something that doesn't exist!" << std::endl;
        std::cout << "oops!" << std::endl;
  break;
}
 
  
}