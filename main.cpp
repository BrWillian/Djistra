#include <iostream>
#include <graph.h>
#include <voo.h>

int main()
{
    std::string aero;
    std::string codvoo;
    std::string dest;
    int hora_dest;
    int min_dest;
    int hora;
    int min;
    char c;

    std::cin>>codvoo>>aero;
    std::cin>>hora>>c>>min;
    std::cin>>dest>>hora_dest>>c>>min_dest;

    //scanf("%s %s %d:%d %s %d:%d", &codvoo, aero, &hora, &min, dest, &hora_dest, &min_dest);

    std::cout<<dest<<hora_dest<<min_dest<<"\n";

    voo *obj1 = new voo(codvoo, aero, hora, min, dest, hora_dest, min_dest);

    std::cout<<obj1->custo<<" "<<obj1->horaformatada<<" "<<obj1->horaformatada_dest;

    std::cout<<std::endl;
    std::cout<<obj1->aeroporto<<obj1->codvoo<<obj1->horaformatada<<std::endl;
    std::cout<<obj1->dest<<obj1->horaformatada_dest;



    graph *obj = new graph(5);
    obj->addVertex(0, 1, 4);
    obj->addVertex(0, 2, 2);
    obj->addVertex(0, 3, 5);
    obj->addVertex(0, 1 ,4);
    obj->addVertex(1, 4, 1);
    obj->addVertex(2, 1, 1);
    obj->addVertex(2, 3, 2);
    obj->addVertex(2, 4, 1);
    obj->addVertex(3, 4, 1);

    //std::cout<<obj->dijkstra(0, 4)<<std::endl;


}
