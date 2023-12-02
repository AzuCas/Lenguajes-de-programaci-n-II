#include <iostream>
#include<conio.h>
#include<string.h>

using namespace std;


// Clase Pelicula 
class Pelicula {
private: // propiedad privada de titulo
    string titulo;
public: // métodos de la clase Pelicula
    Pelicula(); // constructor por defecto
    Pelicula(string titulo); // constructor con parámetro

    string getTitulo(); // getter de titulo
    void setTitulo(string titulo); // setter de titulo
}; // fin de la clase Pelicula

// Métodos de la clase Pelicula 

// Constructor por defecto
Pelicula::Pelicula() {
    titulo = ""; // asigna un valor vacío al titulo
}

// Constructor con parámetro
Pelicula::Pelicula(string titulo) {
    this->titulo = titulo; // asigna el valor del parámetro al titulo
}


// Getter de titulo
string Pelicula::getTitulo() {
    return titulo; // devuelve el valor de titulo
}

// Setter de titulo
void Pelicula::setTitulo(string titulo) {
    this->titulo = titulo; // modifica el valor de titulo
}
// Clase Cortometraje 
class Cortometraje : public Pelicula { // hereda de la clase Pelicula
private: // propiedad de duracion
    int duracion;
public: // métodos de la clase Cortometraje
    Cortometraje(); // constructor por defecto
    Cortometraje(string titulo, int duracion); // constructor con parámetros

    int getDuracion(); // getter de duracion
    void setDuracion(int duracion); // setter de duracion
}; // fin de la clase Cortometraje


// Constructor por defecto
Cortometraje::Cortometraje() : Pelicula() { // llama al constructor por defecto de la clase Pelicula
    duracion = 0; // asigna un valor 0 a la duracion
}

// Constructor con parámetros
Cortometraje::Cortometraje(string titulo, int duracion) : Pelicula(titulo) { // llama al constructor con parámetro de la clase Pelicula
    this->duracion = duracion; // asigna el valor del parámetro a la duracion
}



// Getter de duracion
int Cortometraje::getDuracion() {
    return duracion; // devuelve el valor de duracion
}

// Setter de duracion
void Cortometraje::setDuracion(int duracion) {
    this->duracion = duracion; // modifica el valor de duracion
}

// Clase Documental 
class Documental : public Pelicula { // hereda de la clase Pelicula
private: // propiedad de tema
    string Tema;
public: // métodos de la clase Documental
    Documental(); // constructor por defecto
    Documental(string titulo, string Tema); // constructor con parámetros

    string getTema(); // getter de Tema
    void setTema(string Tema); // setter de Tema
}; // fin de la clase Documental


// Constructor por defecto
Documental::Documental() : Pelicula() { // llama al constructor por defecto de la clase Pelicula
    Tema = ""; // asigna un valor vacío a tema
}

// Constructor con parámetros
Documental::Documental(string titulo, string Tema) : Pelicula(titulo) { // llama al constructor con parámetro de la clase Pelicula
    this->Tema = Tema; // asigna el valor del parámetro de Tema
}



// Getter de duracion
string Documental::getTema() {
    return Tema; // devuelve el valor de Tema
}

// Setter de duracion
void Documental::setTema(string Tema) {
    this->Tema = Tema; // modifica el valor de Tema
}

// Clase Serie
class Serie : public Pelicula { // hereda de la clase Pelicula
private: // propiedad de temporadas y capitulos
    int Temporadas;
    int Capitulos;
public: // métodos de la clase Serie
    Serie(); // constructor por defecto
    Serie(string titulo, int Temporadas, int Capitulos); // constructor con parámetros

    int getTemporadas(); // getter de Temporadas
    void setTemporadas(int Temporadas); // setter de Temporadas
    int getCapitulos(); //getter de Capitulos
    void setCapitulos(int Capitulos); // setter de Capitulos

}; // fin de la clase Serie


// Constructor por defecto
Serie::Serie(): Pelicula() { // llama al constructor por defecto de la clase Pelicula
    Temporadas = 0; // asigna un valor 0 a Temporada
    Capitulos = 0; // asigna un valor 0 a Capitulos
}

// Constructor con parámetros
Serie::Serie(string titulo, int Temporadas, int Capitulos) : Pelicula(titulo) { // llama al constructor con parámetro de la clase Pelicula
    this->Temporadas = Temporadas; // asigna el valor del parámetro de Temporadas
    this->Capitulos = Capitulos; // asigna el valor del parámetro de Capitulos
}



// Getter de Temporadas
int Serie::getTemporadas() {
    return Temporadas; // devuelve el valor de Temporada
}

// Getter de Capitulos
int Serie::getCapitulos() {
    return Capitulos; // devuelve el valor de Capitulos
}

// Setter de Temporadas
void Serie::setTemporadas(int Temporadas) {
    this->Temporadas = Temporadas; // modifica el valor de Temporadas
}

// Setter de Capitulos
void Serie::setCapitulos(int Capitulos) {
    this->Capitulos = Capitulos; // modifica el valor de Capitulos
}

// Clase Realityshow
class Reality : public Pelicula { // hereda de la clase Pelicula
private: // propiedad de genero y participantes
    string Genero;
    int Participantes;
public: // métodos de la clase Realityshow
    Reality(); // constructor por defecto
    Reality(string titulo, string Genero, int Participantes); // constructor con parámetros

    string getGenero(); // getter de Genero
    void setGenero (string Genero); // setter de Genero
    int getParticipantes(); //getter de Participantes
    void setParticipantes (int Participantes); // setter de Participantes

}; // fin de la clase Serie


// Constructor por defecto
Reality::Reality() : Pelicula() { // llama al constructor por defecto de la clase Pelicula
    Genero = ""; // asigna un valor vacío a Genero
    Participantes= 0; // asigna un valor 0 a Participantes
}

// Constructor con parámetros
Reality::Reality(string titulo, string Genero, int Participantes) : Pelicula(titulo) { // llama al constructor con parámetro de la clase Pelicula
    this->Genero = Genero; // asigna el valor del parámetro de Genero
    this->Participantes = Participantes; // asigna el valor del parámetro de Participantes
}



// Getter de Genero
 string Reality::getGenero() {
    return Genero; // devuelve el valor de Genero
}

// Getter de Participantes
int Reality::getParticipantes() {
    return Participantes; // devuelve el valor de Participantes
}

// Setter de Genero
void Reality::setGenero (string Genero) {
    this->Genero = Genero; // modifica el valor de Genero
}

// Setter de Participantes
void Reality::setParticipantes (int Participantes) {
    this->Participantes = Participantes; // modifica el valor de Participantes
}


int main() {
    Pelicula p;
    p.setTitulo("La vida es bella");
    std::cout << "Podemos ver la pelicula de: " << p.getTitulo() << "\n";
    Cortometraje c;
    c.setTitulo("En busca de la felicidad");
    std::cout << "O el cortometraje: " << c.getTitulo() << "\n";
    c.setDuracion(2);
    std::cout << "que dura: " << c.getDuracion() << " horas " << "\n";
    system("pause");
    Documental d;
    d.setTitulo("El secreto de la felicidad");
    std::cout << "tambien pudiera ser el documental de: " << d.getTitulo() << "\n";
    d.setTema("psicologia");
    std::cout << "con tema de: " << d.getTema() << "\n";
    Serie s;
    s.setTitulo("Stranger Things");
    std::cout << "otra opcion tambien seria ver la serie de " << s.getTitulo() << "\n";
    s.setTemporadas(4);
    std::cout << "que tiene " << s.getTemporadas() << " temporadas " << "\n";
    s.setCapitulos(32);
    std::cout << "y cada temporada tiene " << s.getCapitulos() << " capitulos " << "\n";
    Reality r;
    r.setTitulo("Master Chef");
    std::cout << " una opcion mas es " << r.getTitulo() << " un reality ";
    r.setGenero("cocina");
    r.setParticipantes(16);
    std::cout << " de " << r.getGenero() << " en el que participan " << r.getParticipantes() << " personas " << "\n";

    return 0;
}


