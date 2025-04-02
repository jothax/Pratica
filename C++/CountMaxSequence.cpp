#include <iostream>
#include <vector>

/*
    https://neps.academy/br/exercise/110
*/

int main()
{
    int countA {0};
    int countB {0};
    int lenght {0};
    int digitado{0};

    int guarda;
    int avanca;

    //tamanho da lista
    std::cout<<"Quantos Numeros vai digitar?: ";
    std::cin>>lenght;
    std::vector<int> list(0);
    if(lenght != 0)
    {
        list.resize(lenght);
    }

    //encher a lista
    for(int i = 0; i < lenght;i++)
    {
        std::cout<<"Digite o "<<i<<"° numero: ";
        std::cin>>digitado;
        list[i] = digitado;
    }

    guarda = list[0];

    //pecorrer a lista e marcar os iguais
    for(int i=0; i<lenght;i++)
    {
        avanca = list[i];
        
        if(guarda != avanca)
        {
            guarda = list[i];
            i--;
            countB = countA;
            if(countB>=countA)countA=0;
        }
        else
        {
            countA++;
            if(countA>countB)countB = countA;
        }
    }

    std::cout<<'\n'<<countB<<'\n';

    return 0;
}