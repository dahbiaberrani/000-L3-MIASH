#pragma once 



class  Forme {
    public:
        virtual  void dessiner();
};

class Point {
    private:
        int x;
        int y;

    public:
        Point(int a, int b);
        ~Point();
        void dessiner();
};

class Cercle :public Forme {

    private:
    Point centre;
    float radion;

    public: 
        Cercle(Point a, float r);
        ~Cercle();
        void dessiner();
 
};

class Rectangle : Forme {
    private:
        Point point_superier_droid;
        Point point_inferier_gauche;

    public:
        Rectangle(Point p1, Point p2);
        ~Rectangle();
        void dessiner();
};

class Triangle: Forme {
    private:
        Point p1;
        Point p2;
        Point p3;
    
    public:
        Triangle(Point a, Point b, Point c);
        ~Triangle();
        void dessiner();
};