#include <iostream>

int main() {
    std::cout << "\n\n--------------------------------------------------\n";
    std::cout << "Bem-vindo ao algoritmo";
    std::cout << "\nSiga as instruções abaixo";
    std::cout << "\n--------------------------------------------------";
    std::cout << "\nPara começar selecione o mês desejado";
    std::cout << "\nOnde 1 é igual a janeiro e 12 é igual a dezembro";
    int month, daysOfMonth;
    std::cout << "\n\nSelecione um mês: ";
    std::cin >> month;
    switch (month) {
        case 1:
            std::cout << "\nVocê selecionou o mês de Janeiro";
            break;
        case 2:
            std::cout << "\nVocê selecionou o mês de Fevereiro";
            break;
        case 3:
            std::cout << "\nVocê selecionou o mês de Março";
            break;
        case 4:
            std::cout << "\nVocê selecionou o mês de Abril";
            break;
        case 5:
            std::cout << "\nVocê selecionou o mês de Maio";
            break;
        case 6:
            std::cout << "\nVocê selecionou o mês de Junho";
            break;
        case 7:
            std::cout << "\nVocê selecionou o mês de Julho";
            break;
        case 8:
            std::cout << "\nVocê selecionou o mês de Agosto";
            break;
        case 9:
            std::cout << "\nVocê selecionou o mês de Setembro";
            break;
        case 10:
            std::cout << "\nVocê selecionou o mês de Outubro";
            break;
        case 11:
            std::cout << "\nVocê selecionou o mês de Novembro";
            break;
        case 12:
            std::cout << "\nVocê selecionou o mês de Dezembro";
            break;
        default:
            for (int i = 0; i < 4; i++) {
                std::cout << "\nNão existe mês " << month;
            }
            return 0;
    }
    std::cout << "\n--------------------------------------------------";
    std::cout << "\nAgora selecione o dia da semana que o mês começa\n\n";
    std::cout << "[0] - Domingo\n";
    std::cout << "[1] - Segunda-feira\n";
    std::cout << "[2] - Terça-feira\n";
    std::cout << "[3] - Quarta-feira\n";
    std::cout << "[4] - Quinta-feira\n";
    std::cout << "[5] - Sexta-feira\n";
    std::cout << "[6] - Sábado\n";
    int dayOfTheWeek;
    std::cout << "\nSelecione um dia da semana: ";
    std::cin >> dayOfTheWeek;
    std::cout << "Resultado\n";
    std::cout << "Copie o resultado e cole no excel";
    std::cout << "\n--------------------------------------------------\n";
    switch (month) {
        case 2:
            daysOfMonth = 28;
            break;
        case 4:
            daysOfMonth = 30;
            break;
        case 6:
            daysOfMonth = 30;
            break;
        case 9:
            daysOfMonth = 30;
            break;
        case 11:
            daysOfMonth = 30;
            break;
        default:
            daysOfMonth = 31;
    }
    int i = 1, j = dayOfTheWeek;
    while (i <= daysOfMonth) {
        switch (j) {
            case 0:
                std::cout << "D	"; 
                j++;
                break;
            case 1:
                std::cout << "S	"; 
                j++;
                break;
            case 2:
                std::cout << "T	"; 
                j++;
                break;
            case 3:
                std::cout << "Q	"; 
                j++;
                break;
            case 4:
                std::cout << "Q	"; 
                j++;
                break;
            case 5:
                std::cout << "S	"; 
                j++;
                break;
            case 6:
                std::cout << "S	"; 
                j=0;
                break;
        }
        i++;
    }
    std::cout << "\n--------------------------------------------------\n";
    std::cout << "\nObrigado por usar meu algoritmo";
    std::cout << "\nFeito com ❤️ por gustavoalvim41";
    std::cout << "\n\n--------------------------------------------------\n";
    return 0;
}
