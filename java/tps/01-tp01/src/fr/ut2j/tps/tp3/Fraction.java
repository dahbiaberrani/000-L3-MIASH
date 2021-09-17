package fr.ut2j.tps.tp3;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class Fraction {
    //attributes
    private int numerateur, denominateur;

    //constructors
    public Fraction(){
        this.numerateur = 0;
        this.denominateur = 1;
    }

    public Fraction(int numerateur, int denominateur){
        this.numerateur = numerateur;
        this.denominateur = denominateur;
    }

    //methods
    // getters
    public int getNum() {
        return this.numerateur;
    }

    public int getDen() {
        return this.denominateur;
    }

    //setters
    public int setNumerateur(int numerateur){
        return this.numerateur = numerateur;
    }

    public int setDenominateur(int denomirateur){
        return this.denominateur = denomirateur;
    }

    public Fraction add(Fraction fraction){
        int a,b;
        b = this.numerateur * fraction.denominateur;
        a = (this.denominateur * fraction.denominateur) + (fraction.numerateur * this.denominateur);
        Fraction fractadd = new Fraction (a,b);
        return fractadd;

    }
    public Fraction sup(Fraction fraction){
        int a,b;
        b = this.numerateur * fraction.denominateur;
        a = (this.denominateur * fraction.denominateur) - (fraction.numerateur * this.denominateur);
        Fraction fractsup = new Fraction (a,b);
        return fractsup;

    }
    public Fraction mult(Fraction fraction) {
        int a,b;
        b = this.denominateur * fraction.denominateur;
        a =  this.numerateur * fraction.numerateur;
        Fraction fractmult = new Fraction (a,b);
        return fractmult;

    }

    @Override
    public String toString() {
        return ("(" + this.numerateur + "/" + this.denominateur + ")");
    }

    public static void main(String[] args) {

    }
}
