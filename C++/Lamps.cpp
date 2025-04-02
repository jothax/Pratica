#include <iostream>

//Fonts:https://neps.academy/br/exercise/52

int main()
{
    bool A {false};
    bool B {false};
    int choice {};

    do
    {
        std::cout<<"Quarto Tailandia"<<'\n'
        <<"Digite 1 para acender a lampada A"<<'\n'
        <<"Digite 2 para acender a lampada B"<<'\n'
        <<"Digite 0 para sair"<<'\n';

        std::cin>>choice;
        switch (choice)
        {
            case 1:
                A = !A;
                std::cout<<"Lampada A: "<<A<<'\n'
                <<"Lampada B: "<<B<<'\n';
                break;
            case 2:
                A = !A;
                B = !B;
                std::cout<<"Lampada A: "<<A<<'\n'
                <<"Lampada B: "<<B<<'\n';
                break;
            case 0:
                std::cout<<"voce saiu :)"<<'\n';
                break;
            default:
                std::cout<<"Opcao invalida :("<<'\n';
                choice = 0;
                break;
        }
    }while (choice!=0);
}
