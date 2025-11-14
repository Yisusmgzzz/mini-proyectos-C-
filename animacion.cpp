/* inventa un videojuego random que se te venga a la mente y has que tenga varios escenarios y aventuras
* tambien hazlo intuitivo con el usuario para darle una mejor experiencia */
#include <iostream>
#include <cstdlib>
//el reto esta dificil q no tengo tanta imaginacion pero lo voy a intentar 
//a partir de aqui defino las funciones en ingles para darle una perspectiva distinta a gente que no entiende español (aparte es mas entendible asi) 

int hp = 5; //declaro los puntos de vida del player

void ShowHealth(){
  std::cout<<"CORAZONES: "<<hp<<std::endl<<std::endl; //esta funcion lo que hace es mostrar cuanta vida tiene el jugador 
}

void TakeDmg(std::string reason, int dmg){
  hp -= dmg; 
  std::cout<<"HAS PERDIDO "<<dmg<<"CORAZONES"<<std::endl; //esta funcion se encarga de restarle daño al jugador cuando pierde vida
  std::cout<<"por "<<reason;
}

void RestoreHP(int health){ //esta sirve de intermediario cuando se repite algun escenario o perdiste todas tus vidas
  hp += health; 
  ShowHealth();
}


void Command(std::string c){ // esto pueden ignorarlo (solo es una funcion que me sirve para automatizar casos como cuando necesito ejecutar un comando en la terminal)
   system(c.c_str());
}

void gameLoop(){

  bool isActing = false;
  while(isActing){
    std::string index[6] = {"Jesús ", "Esteban ", "Is ", "A", "Pro ", "Programmer "};
    for(int i=0;i<5;i++){
      std::cout<<" "<<std::endl;
      for(int j=0;j<5;j++){
        std::cout<<index[i];
      }
    }
    Command("clear");
  }
}

void PlayerOne(){ //esta sirve para registrar el usuario (le puse asi pq aja no supe q mas ponerle xd)
  std::string nm;
  std::cout<<"te gustaria darnos tu nombre?: ";std::cin>>nm;
  std::cout<< "  ==  ==  Bienvenido a WORKING ROAD  == =="; 
  Command("figlet"+nm);
}

void gameMap(){ //aca me encargo de guardar el mapa dentro de otra funcion extra para no tener todo el codigo vuelto mierda y se vea mas ordenado
  std::cout<<"    ________________________________________________________________";
  std::cout<<"   |          |                           |                        |";
  std::cout<<"  |-------   |------------   ------------|  -------------  -----  |";
  std::cout<<" |___________|___________________________|_______________________|";
  std::cout<<std::endl<<std::endl;
}


void gameOver(bool isDead){
  if (isDead == true || hp == 0){
    char sel;
    std::cout<<"ESTAS MUERTO, PERDISTE IMBECIL";
    std::cout<<"quieres volverlo a intentar?S/n";std::cin>>sel;
    do{
      RestoreHP(5);
    }while(sel=='s');
  }else{
    std::cout<<"=== TAKE A PRIZEE ===";
    std::cout<<"GANASTE FELICIDADES";
  }
}

void gameStart(){

  char help;
  
  gameMap();
  std::cout<<"esta carretera esta apunto de ser dañada por varias personas que aun desconocemos (quieres ayudarme a solucionar este problema?)"<<std::endl;
  std::cout<<"presiona [S + ENTER] para continuar"<<std::endl;std::cin>>help; Command("clear");
}

void Story(){
  char sel, help;
  
  ShowHealth();
  std::cout<<"        estas en el supermercado y te encuentras con una persona muy peculiar                   "<<std::endl;
  std::cout<<"    esta persona te ofrece un tipo de dulce extraño que parece ser una chupeta con              "<<std::endl;
  std::cout<<"        una pinta muy muy extraña y es de color azul con un tono grisaceo                       "<<std::endl;
  std::cout<<"            y parece llevar un tipo de polvo blanco raro encima...                              "<<std::endl;
  std::cout<<"                te la vende a 5 dolares, ¿aceptas la caridad?                                         "<<std::endl<<std::endl;
  std::cout<<"(#opcion a: agarras el regalo y te vas corriendo ||| #opcion b: le dices que no amablemente ||| #opcion c: lo ignoras y sigues tu camino): ";std::cin>>help;

  while(hp>0){

  switch(help){

    case 'a':
        Command("clear");
        TakeDmg("la persona extraña", 3);
        std::cout<<"      al salir del supermercado el hombre de antes te persigue y te golpea hasta              "<<std::endl;
        std::cout<<"       dejarte inconsciente al despertar sales y afuera ves a una linda chica                 "<<std::endl;
        std::cout<<"(#opcion a: te le acercas y le pides su numero || #opcion b: la ignoras y pasas de largo      ";std::cin>>sel;
        if (sel=='a'){
            TakeDmg("acosador", 2);
            gameOver(true);
        }else if(sel == 'b'){
            std::cout<<"    te vas y en el camino pisas mierda $$$ "<<std::endl;
            gameOver(false);
             
       }
    case 'b':
        Command("clear");
        std::cout<<"   al negarte el hombre entiende y se va y le pide lo mismo a otra persona                    "<<std::endl;
        std::cout<<"   despues te aburres y sales del supermercado te quedas viendo la calle                      "<<std::endl;
        std::cout<<"                    notas que esta dañada                      "<<std::endl;
        std::cout<<"(#opcion a: la arreglas | #opcion b: la dejas asi) ";std::cin>>sel;
        if (sel=='a'){
          Command("clear");
          gameOver(false);
          std::cout<<"gracias por aportar un poco de limpieza a esta ciuda de mrd ;)";
      }else if(sel=='b'){
        Command("clear");
        gameOver(true);
        std::cout<<"no sirves para nada, no colaboral es perjudicial, eres una mala persona";
      }
    case 'c':
        Command("clear");
        std::cout<<"  ";
  }
}
  }

int main()
{
  PlayerOne();
  gameStart();
  Story();
  return 0;
}
