#include <iostream>

void change(bool& value)
{
    if(value == false){
        value = true;
    }else{
        value = false;
    }
}

int main()
{
    bool A {false};
    bool B {false};
    int choice {};

    do
    {
        std::cout<<"Quarto Tailandia"<<'\n'
        <<"Digite 1 para acender a lampada A"<<'\n'
        <<"Digite 2 para acender a lampada B e desligar a A"<<'\n'
        <<"Digite 0 para sair"<<'\n';

        std::cin>>choice;
        switch (choice)
        {
            case 1:
                change(A);
                std::cout<<"Lampada A: "<<A<<'\n'
                <<"Lampada B: "<<B<<'\n';
                break;
            case 2:
                change(A);
                change(B);
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