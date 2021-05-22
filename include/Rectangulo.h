#ifndef RECTANGULO_H
#define RECTANGULO_H

// Editado por Bryce
class Rectangulo {
   public:
    Rectangulo();
    int area();
    Rectangulo(int alto, int ancho);
    virtual ~Rectangulo();

   protected:
   private:
    int alto;
    int ancho;
};

#endif  // RECTANGULO_H
