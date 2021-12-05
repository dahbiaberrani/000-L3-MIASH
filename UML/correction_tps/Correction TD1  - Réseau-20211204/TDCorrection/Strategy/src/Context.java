public class Context {
    private IStrategy strategy = new StrategyImpl1();
    public void appliquerStrategy(){
       strategy.appliquer();
    }

    public void setStrategy(IStrategy strategy) {
        this.strategy = strategy;
    }
}
