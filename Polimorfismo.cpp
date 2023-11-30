//EJERCICIO 2: POLIMORFISMO
#include<iostream>
#include<stdlib.h>

using namespace std;
class Pelicula {
    private:
    string titulo;

    public:
    Pelicula(string);
    virtual void reproducir();
};

class Cortometraje : public Pelicula {
    private:
    int duracion;

    public:
    Cortometraje(string, int);
    void reproducir();
};

class Documental : public Pelicula {
    private:
    string tema;
    public:
    Documental(string, string);
    void reproducir();
};

class Serie : public Pelicula {
    private:
    int temporadas;
    int capitulos;

    public:
    Serie(string, int, int);
    void reproducir();
};

class Realityshow : public Pelicula {
    private:
    string genero;
    int participantes;

    public:
    Realityshow(string, string, int);
    void reproducir();
};

Pelicula::Pelicula(string _titulo) {
    titulo = _titulo;
}

void Pelicula::reproducir() {
    cout << "Titulo: " << titulo << endl;
}

Cortometraje::Cortometraje(string _titulo, int _duracion) : Pelicula(_titulo) {
    duracion = _duracion;
}

void Cortometraje::reproducir() {
    Pelicula::reproducir();
    cout << "duracion " << duracion << endl;
}

Documental::Documental(string _titulo, string _tema) : Pelicula(_titulo) {
    tema = _tema;
}

void Documental::reproducir() {
    Pelicula::reproducir();
    cout << "Tema: " << tema << endl;
}

Serie::Serie(string _titulo, int _temporadas, int _capitulos) : Pelicula(_titulo) {
    temporadas = _temporadas;
    capitulos = _capitulos;
}

void Serie::reproducir() {
    Pelicula::reproducir();
    cout << "temporadas " << temporadas << endl;
    cout << "capitulos " << capitulos << endl;
}

Realityshow::Realityshow(string _titulo, string _genero, int _participantes) : Pelicula(_titulo) {
    genero = _genero;
    participantes = _participantes;

}

void Realityshow::reproducir() {
    Pelicula::reproducir();
    cout << "genero " << genero << endl;
    cout << "participantes " << participantes << endl;
}

int main() {
    Pelicula* vector[4];
    vector[0] = new Cortometraje("La vida es bella", 15);
    vector[1] = new Documental("El secreto de la felicidad", "Psicología");
    vector[2] = new Serie("Stranger Things", 4, 32);
    vector[3] = new Realityshow("MasterChef", "Cocina", 16);
    vector[0]->reproducir();
    cout << "\n";
    vector[1]->reproducir();
    cout << "\n";
    vector[2]->reproducir();
    cout << "\n";
    vector[3]->reproducir();
    cout << "\n";

    system("pause");
    return 0;
}