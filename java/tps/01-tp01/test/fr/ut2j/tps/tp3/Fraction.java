package fr.ut2j.tps.tp3;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Fraction {
    //attributs
    private int x,y;

    //constrictor
    public Fraction(int numerateur ,int denomerateur){this.x = numerateur ;this.y = denomerateur};
    public Fraction(){this.x = 0 ; this.y = 1;}

    //methods
    // getter
    public int getX() {
        return this.x;
    }
    public int getY() {
        return this.y;
    }
    //setter
    public int setX(int numerateur){
        return this.x = numerateur;
    }
    public int setY(int denomirateur){
        return this.y= denomirateur;
    }
    
    public Fraction add(int fraction1 , int fraction2){
        Fraction f1 = new Fraction();
        Fraction f2 = new Fraction();
        Fraction f3= new Fraction();

        if (f1.y == f2.y){
            f3.x = (f1.x)+(f2.x);
            f3.y = f1.y ;
        } else {
            f3.x = (f1.x) * (f2.y);
            f3.y = (f1.y) * (f2.y);
        }
        return f3;
    }

    public static void main(String[] args) {

    }

}
@Override
