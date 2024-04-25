#include <iostream>
using namespace std;

// Función para calcular la posición final en MRU
float calcularMRU(float posicionInicial, float velocidad, float tiempo) {
    return posicionInicial + (velocidad * tiempo);
}

// Función para calcular la posición final en MRUV
float calcularMRUV(float posicionInicial, float velocidadInicial, float aceleracion, float tiempo) {
    return posicionInicial + (velocidadInicial * tiempo) + 0.5 * aceleracion * tiempo * tiempo;
}

int main() {
    float posicionInicial, velocidad, tiempo;
    float velocidadInicial, aceleracion;

    // Solicitar al usuario los valores iniciales
    cout << "Ingrese la posición inicial (en metros): ";
    cin >> posicionInicial;
    cout << "Ingrese la velocidad (en metros por segundo): ";
    cin >> velocidad;
    cout << "Ingrese el tiempo (en segundos): ";
    cin >> tiempo;

    // Calcular y mostrar la posición final en MRU
    float posicionFinalMRU = calcularMRU(posicionInicial, velocidad, tiempo);
    cout << "La posición final en MRU es: " << posicionFinalMRU << " metros" << endl;

    // Solicitar al usuario los valores iniciales adicionales para MRUV
    cout << "\nPara MRUV, ingrese la velocidad inicial (en metros por segundo): ";
    cin >> velocidadInicial;
    cout << "Ingrese la aceleración (en metros por segundo cuadrado): ";
    cin >> aceleracion;

    // Calcular y mostrar la posición final en MRUV
    float posicionFinalMRUV = calcularMRUV(posicionInicial, velocidadInicial, aceleracion, tiempo);
    cout << "La posición final en MRUV es: " << posicionFinalMRUV << " metros" << endl;

    return 0;
}
