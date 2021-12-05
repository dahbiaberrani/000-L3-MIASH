package observers;

public class ObserverImpl1 implements Observer {
    private double somme;
    @Override
    public void update(int etat) {
        // int etat = ((ObservableImpl)observable).getEtat();
        somme+=etat;
        System.out.println("Observateur 1 Somme = " +somme);
    }
}
