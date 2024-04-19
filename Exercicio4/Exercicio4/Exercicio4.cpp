//ATV1
//#include <iostream>
//using namespace std;
//
//int main() {
//    int numero;
//
//    cout << "Digite um numero de 1 a 7: ";
//    cin >> numero;
//
//    switch (numero) {
//    case 1:
//        cout << "Domingo" << endl;
//        break;
//    case 2:
//        cout << "Segunda-Feira" << endl;
//        break;
//    case 3:
//        cout << "Terca-Feira" << endl;
//        break;
//    case 4:
//        cout << "Quarta-Feira" << endl;
//        break;
//    case 5:
//        cout << "Quinta-Feira" << endl;
//        break;
//    case 6:
//        cout << "Sexta-Feira" << endl;
//        break;
//    case 7:
//        cout << "Sabado" << endl;
//        break;
//    default:
//        cout << "Dia invalido" << endl;
//    }
//
//    return 0;
//}


//ATV2
//#include <iostream>
//
//int main() {
//    float num1, num2;
//    char operacao;
//
//    
//    std::cout << "Digite o primeiro número: ";
//    std::cin >> num1;
//
//    std::cout << "Digite o segundo número: ";
//    std::cin >> num2;
//
//    std::cout << "Digite a operacao desejada (+, -, *, /): ";
//    std::cin >> operacao;
//
//    
//    switch (operacao) {
//    case '+':
//        std::cout << "Resultado: " << num1 + num2 << std::endl;
//        break;
//    case '-':
//        std::cout << "Resultado: " << num1 - num2 << std::endl;
//        break;
//    case '*':
//        std::cout << "Resultado: " << num1 * num2 << std::endl;
//        break;
//    case '/':
//        if (num2 != 0) {
//            std::cout << "Resultado: " << num1 / num2 << std::endl;
//        }
//        else {
//            std::cout << "Erro! Divisao por zero." << std::endl;
//        }
//        break;
//    default:
//        std::cout << "Operacao invalida." << std::endl;
//    }
//
//    return 0;
//}


/*ATV3*/
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char letra;
//
//    cout << "Digite uma letra: ";
//    cin >> letra;
//
//    
//    letra = toupper(letra);
//
//    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
//        cout << "Vogal\n";
//    }
//    else {
//        cout << "Consoante\n";
//    }
//
//    return 0;
//}