package observers;

public class ObserverImpl2 implements Observer {
    private double lastState;
    @Override
    public void update(int etat) {
        // int etat = ((ObservableImpl)observable).getEtat();
        if (etat - lastState > 0)
            System.out.println("Observateur 2 => Augmentation de la pression");
        else if(etat - lastState < 0)
            System.out.println("Observateur 2 => depression...");
        else
            System.out.println("Observateur 2 => Stabilité");
        lastState=etat;
    }
}
