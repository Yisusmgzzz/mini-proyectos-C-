#include <iostream>

using namespace std;

int hp = 3;

//Metodo para mostrar la vida total que le queda al jugador.
void ShowLife()
{
    cout << "\nVIDA: " << hp << "\n" << endl;
}

//Metodo para mostrar el Game over ya sea ganado el juego o perdido.
void GameOver(bool death)
{
    if(death == true)
    {
        cout << "GAME OVER" << endl;
        cout << "Please, try again :D" << endl;
    }
    else{
        cout << "\n YOU WIN :D" << endl;
        cout << "You can try different choices " << endl;
    }
}

//Metodo para recibir daño por cada decision.
void TakeDamage(string reason, int damage)
{
    hp -= damage;
    cout << "Perdiste " << damage << " punto de vida por " << reason << endl;
}


int main(int argc, const char * argv[])
{
    // insert code here...
    char option;
    
    ShowLife();
    
    cout << "Te despiertas en mitad de la noche y estas en bosque" << endl;
    cout << "Escuchas mucho ruido detras de unos arbustos \n Que haces?" << endl;
    cout << "A. Te quedas en el bosque durmiendo hata que amanezca. \n B. Te dirijes hacia el ruido. \n C. Intentas bucar una salida por otro lado." << endl;
    cin >> option;
    
    if(option == 'A' || option == 'a')
    {
        cout << "Te despierta un dolor en el brazo." << endl;
        cout << "Abres los ojos y te das cuenta que una manada de lobos estaba tratando de comerte." << endl;
        
        TakeDamage("Una manada de lobos.", 1);
        ShowLife();
        
        cout << "A. Intentas correr lejos de la manada. \n B. Escalas un arbol cercano. \n C. Intentas hacer ruido y parecer intimidante." << endl;
        cin >> option;
        
        if(option == 'A' || option == 'a')
        {
            cout << "La manada te atrapa y te devoran vivo y en terrible sufrimiento..." << endl;
            
            TakeDamage("ser Devorado por Lobos", 2);
            ShowLife();
            GameOver(true);
        }
        else if(option == 'B' || option == 'b')
        {
            cout << "Mientras intentas escalar el arbol." << endl;
            cout << "La manada de lobos te muerden los pies y te empiezas a desangrar." << endl;
            
            TakeDamage("Por la perdida de sangre.", 1);
            ShowLife();
            
            cout << "Ya a pasado tiempo que llevas en la cima del arbol y los lobos ya se durmieron." << endl;
            cout << "A. Intestas bajar y escapar mientras duermen. \n B. Esperas hasta que la manada se vaya." << endl;
            cin >> option;
            
            switch (option) {
                case 'a':
                    cout << "Logras escapar y al salir del bosque consigues ayuda y tratan tus heridas." << endl;
                    GameOver(false);
                    break;
                    
                case 'b':
                    cout << "Al esperar que los lobos se vayan, te terminas desangrando y mueres." << endl;
                    TakeDamage("Por la perdida de sangre.", 1);
                    
                    ShowLife();
                    GameOver(true);
                    break;
                    
                default:
                    cout << "No introduciste ninguna opcion valida. (a,b,c) \n" << endl;
                    
                    GameOver(true);
                    break;
            }
        }
        else if(option == 'C' || option == 'c')
        {
            cout << "Empiezas a hacer ruido y parecer agresivo." << endl;
            cout << "La manada interpreta que este es tu territorio y se van alejando lentamente." << endl;
            
            GameOver(false);
            
        }
        else{
            cout << "No introduciste ninguna opcion valida. (a,b,c) \n" << endl;
            GameOver(true);
        }
        
    }
    else if(option == 'B' || option == 'b')
    {
        ShowLife();
        
        cout << "Te acercas temeroso al ruido detras de los arbustos" << endl;
        cout << "Te das cuenta que el ruido lo hacia un Oso y esta dispuesto a atacarte. \n Que haces?" << endl;
        cout << "A. Empiezas a correr. \n B. Te haces el muerto. \n C. Intentas parecer intimidante y agresivo." << endl;
        cin >> option;
        
        switch (option) {
            case 'a':
                cout << "Corres y haces que el oso se interece mas en ti" << endl;
                cout << "Te termina alcanzando y te devora entre terrible sufrimeinto :v" << endl;
                
                TakeDamage("Ser devorado por un Oso", 2);
                ShowLife();
                GameOver(true);
                
                break;
                
            case 'b':
                cout << "Cuando te haces el muerto el oso se hacerca a jugar con tu cuerpo" << endl;
                cout << "El oso te hace daño con sus uñas pero al rato de jugar, se va del lugar." << endl;
                
                TakeDamage("Los raguños del Oso", 1);
                ShowLife();
                
                cout << "Despues de que el oso se vaya encuentras la salida del bosque y vuelves a la civilizacion" << endl;
                GameOver(false);
                
                break;
                
            case 'c':
                cout << "El oso deja de interesarse en ti y lentamente se va del lugar" << endl;
                cout << "Despues de un rato buscando logras salir del bosque y vivir para contarlo" << endl;
                
                ShowLife();
                GameOver(false);
                break;
                
            default:
                cout << "No introduciste ninguna opcion valida. (a,b,c) \n" << endl;
                GameOver(true);
                break;
        }
        
    }
    else if(option == 'C' || option == 'c')
    {
        ShowLife();
        
        cout << "Te mueves por el bosque intentando buscar una salida" << endl;
        cout << "Al caminar por unas horas empiezas a desidratarte, pero en la lejania ves un riachuelo, pero cerca del mismo ves una serpiente gigantesca \n ¿Que haces?" << endl;
        cout << "A. Te acercas silenciosamente a tomar agua. \n B. Te vas por otro lado. \n C. Coges una rama puntiaguada y te dispones a atacar la serpiente." << endl;
        cin >> option;
        
        if(option == 'A' || option == 'a')
        {
            cout << "Te acercas sileciosamente a tomar agua pero la serpiente te ataca" << endl;
            cout << "Con una mordida, lentamente va inyectando veneno." << endl;
            
            TakeDamage("Mordida de serpiente", 2);
            ShowLife();
            cout << "¿Que haces?" << endl;
            cout << "A. Te alejas lentamente y esperas que la serpiente se vaya. \n B. Sales corriendo lejos de la serpiente e intentas succionar el veneno. " << endl;
            cin >> option;
            
            if(option == 'A' || option == 'a')
            {
                cout << "Al espererar unos minutos las serpiente se va del riachuelo. \n ¿Que haces?" << endl;
                cout << "A. Intentas succionar el veneno de la herida. \n B. Huyes del lugar lo mas rapido posible. \n C. Te acercas al riachuelo, tomas agua y intentas curar con agua la herida." << endl;
                cin >> option;
                
                switch (option) {
                    case 'a':
                        cout << "Al intentar succionar el veneno infectas la herida y terminas muriendo." << endl;
                        TakeDamage("Veneno de Serpiente", 1);
                        ShowLife();
                        GameOver(true);
                        break;
                        
                    case 'b':
                        cout << "Mientras corres vas notando lo deshidratado que estas y el veneno va haciendo efecto." << endl;
                        cout << "Te desmayas por la deshidratacion y el veneno." << endl;
                        TakeDamage("Deshidratacion y Veneno", 1);
                        ShowLife();
                        GameOver(true);
                        break;
                        
                    case 'c':
                        cout << "Te rehidratas y limpias la herida con agua." << endl;
                        cout << "Despues de seguir caminando por unos minutos encuentras una la civilizacion y sobrevives la noche" << endl;
                        ShowLife();
                        GameOver(false);
                        break;
                        
                    default:
                        cout << "No introduciste ninguna opcion valida. (a,b,c) \n" << endl;
                        GameOver(true);
                        break;
                }
                
            }
            else if(option == 'B' || option == 'b')
            {
                cout << "Intentar succionar el veneno hace que la herida se infecte." << endl;
                cout << "Mientras corrias te deshidratas mas y terminas muriendo." << endl;
                
                TakeDamage("Deshidratacion e infeccion", 1);
                ShowLife();
                GameOver(true);
            }
        }
        
    }
    

    return 0;
}
