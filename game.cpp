#include <iostream>
#include <Windows.h>

int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
int cross_or_zero = 1;
int n = 0;
int win = 0;
//cross = -1, zero = 1
int print();
int neto();
int to();
int game();
int start();
int rusificator();
int calculate();
int turn();

int main() {
  rusificator();
  start();
  return 0;
}

int rusificator(){
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  GetConsoleCP();
  return 0;
}

int print() {
  using namespace std;
  cout << (a1 == 1 ? ("O") : ((a1 == -1 ? ("X") : ("1")))) << " " << (a2 == 1 ? ("O") : ((a2 == -1 ? ("X") : ("2")))) << " " << (a3 == 1 ? ("O") : ((a3 == -1 ? ("X") : ("3")))) << endl;
  cout << (a4 == 1 ? ("O") : ((a4 == -1 ? ("X") : ("4")))) << " " << (a5 == 1 ? ("O") : ((a5 == -1 ? ("X") : ("5")))) << " " << (a6 == 1 ? ("O") : ((a6 == -1 ? ("X") : ("6")))) << endl;
  cout << (a7 == 1 ? ("O") : ((a7 == -1 ? ("X") : ("7")))) << " " << (a8 == 1 ? ("O") : ((a8 == -1 ? ("X") : ("8")))) << " " << (a9 == 1 ? ("O") : ((a9 == -1 ? ("X") : ("9")))) << endl;
}

int calculate(){
  int win = 0;
  if ((a1 + a2 + a3 == 3) or (a4 + a5 + a6 == 3) or (a7 + a8 + a9 == 3) or (a1 + a4 + a7 == 3) or\
    (a2 + a5 + a8 == 3) or (a3 + a6 + a9 == 3) or (a1 + a5 + a9 == 3) or (a3 + a5 + a7 == 3))
      win = 1;
  else if ((a1 + a2 + a3 == -3) or (a4 + a5 + a6 == -3) or (a7 + a8 + a9 == -3) or (a1 + a4 + a7 == -3) or\
    (a2 + a5 + a8 == -3) or (a3 + a6 + a9 == -3) or (a1 + a5 + a9 == -3) or (a3 + a5 + a7 == -3))
      win = -1;
  else if (n == 9)
    win = -2;
  else
    win = 0;
  return win;
}

int lozh = 0;

int neto(){
  lozh += 1;
  using namespace std;
  cout << "НЕЛЬЗЯ" << endl;
  n = n - 1;
  turn();
  return 0;
}

int to(){
  return (cross_or_zero == 1 ? 1 : -1);
}

int turn() {
  n = n + 1;
  if (n%2 == 1){
    cross_or_zero = 1;
  }
  else
    cross_or_zero = -1;
  std::cout << "Выберите, куда поставить " << (cross_or_zero == 1 ? ("O") : ("X")) <<
  ", просто введите номер!" << std::endl;
  int choice;
  std::cin >> choice;
  switch (choice) {
    case 1:
      a1 = (a1 == 0) ? to() : neto();
      if (lozh == 0)
        print();
      else 
        lozh -= 1;
      break;
    case 2:
      a2 = (a2 == 0) ? to() : neto();
      if (lozh == 0)
        print();
      else 
        lozh -= 1;
      break;
    case 3:
      a3 = (a3 == 0) ? to() : neto();
      if (lozh == 0)
        print();
      else 
        lozh -= 1;
      break;
    case 4:
      a4 = (a4 == 0) ? to() : neto();
      if (lozh == 0)
        print();
      else 
        lozh -= 1;
      break;
    case 5:
      a5 = (a5 == 0) ? to() : neto();
      if (lozh == 0)
        print();
      else 
        lozh -= 1;
      break;
    case 6:
      a6 = (a6 == 0) ? to() : neto();
      if (lozh == 0)
        print();
      else 
        lozh -= 1;
      break;
    case 7:
      a7 = (a7 == 0) ? to() : neto();
      if (lozh == 0)
        print();
      else 
        lozh -= 1;
      break;
    case 8:
      a8 = (a8 == 0) ? to() : neto();
      if (lozh == 0)
        print();
      else 
        lozh -= 1;
      break;
    case 9:
      a9 = (a9 == 0) ? to() : neto();
      if (lozh == 0)
        print();
      else 
        lozh -= 1;
      break;
    default:
      std::cout << "Неправильный ввод!" << std::endl;
      n = n - 1;
      turn();
  } 
  win = calculate();
  return win;
}


int game() {
  while(turn() == 0) {
    n = n;
  }
  if (win == 1){
    std::cout << "Победили Нолики" << std::endl;// << "Если хотите рестартнуть игру, набери \"10\""<< std::endl;
    // int res = 0;
    // std::cin >> res;
    // if (res == 10){
    //   a1 = a2 = a3 = a4 = a5 = a6 = a7 = a8 = a9 = 0;
    //   n = 0;
    //   print();
    //   game();
    // }
    // else {
    //   std::cout << "КОНЕЦ ИГРЫ";
    //   return 0;
    // }
    //return 0;
}
  else if (win == -1){
    std::cout << "Победили Крестики" << std::endl;// << "Если хотите рестартнуть игру, набери \"10\""<< std::endl;;
    // int res = 0;
    // std::cin >> res;
    // if (res == 10){
    //   a1 = a2 = a3 = a4 = a5 = a6 = a7 = a8 = a9 = 0;
    //   n = 0;
    //   print();
    //   game();
    // }
    // else {
    //   std::cout << "КОНЕЦ ИГРЫ";
    //   return 0;
    // }
  }
}

int start() {
  using namespace std;
  cout << "Обращаться к ячейкам по следующей закономерности:" << endl;
  cout << "1 2 3" << endl << "4 5 6" << endl << "7 8 9" << endl;
  game();
  return 0;
}
