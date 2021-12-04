public interface Observable {
    void notifyObservers();
    void subscribe(Observer observer);
    void unsubscribe(Observer observer)
}
