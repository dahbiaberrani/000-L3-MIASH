package fr.ut2j.tps.tp3;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

import fr.ut2j.tps.Utils;

public class Fraction implements Comparable<Fraction>{
    //attributes
    private int num, den;

    //constructors
    public Fraction(){
        this.num = 0;
        this.den = 1;
    }

    public Fraction(int numerateur, int denominateur){
        if (denominateur == 0) {
           throw new ArithmeticException("le denominateur ne doit pas être = 0");
        }
        this.num = numerateur;
        this.den = denominateur;
        this.simplifier();
    }

    //methods
    public int getNum() {
        return this.num;
    }

    public int getDen() {
        return this.den;
    }

    public int setNum(int numerateur){
        return this.num = numerateur;
    }

    public int setDen(int denomirateur){
        return this.den = denomirateur;
    }

    public Fraction add(Fraction fraction){
        Fraction resultatF3 = new Fraction();
        resultatF3.num = this.num * fraction.den + fraction.num * this.den;
        resultatF3.den = this.den * fraction.den;
        resultatF3.simplifier();
        return (resultatF3);
    }

    public Fraction add(int entier){
        Fraction result = new Fraction();
        result.num = entier * this.den + this.num;
        result.den = this.den;
        result.simplifier();
        return result;
    }

    public Fraction mult(Fraction fraction){
        Fraction resultatF3 = new Fraction();
        resultatF3.num = this.num * fraction.num;
        resultatF3.den = this.den * fraction.den;
        resultatF3.simplifier();
        return resultatF3;
    }

    public  Fraction sub(Fraction fraction){
        Fraction result = this.add(new Fraction(-fraction.num, fraction.den));
        result.simplifier();
        return result;
    }

    public  Fraction div(Fraction fraction){
        Fraction result = this.mult(new Fraction(fraction.den, fraction.num));
        result.simplifier();
        return result;
    }

    public void simplifier() {
        int resultatPgcd = Utils.pgcd(this.num, this.den);
        this.num = this.num / resultatPgcd;
        this.den = this.den / resultatPgcd;
        if (this.den < 0) {
            this.num *= -1;
            this.den *= -1;
        }
    }

    @Override
    public boolean equals(Object obj) {
        Fraction fraction = (Fraction) obj;
        return this.num * fraction.den == fraction.num * this.den;
    }

    @Override
    public String toString(){
        return "(" + this.num + "/" + this.den + ")";
    }

    @Override
    public Fraction clone() throws CloneNotSupportedException {
        return new Fraction(this.num, this.den);
    }

    @Override
    public int compareTo(Fraction fraction) {
            if (this.num * fraction.den > fraction.num * this.den){
                return 1;
            } else {
                if (this.num == fraction.num){
                    return 0;
                } else {
                    return -1;
                }
            }
    }
}
