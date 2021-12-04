public class Context {
    private RouteStrategy strategy = new RouteStrategy(){

        public void appliqueStrategie() {
            strategy.applique();
        }
    };

    public Context() {}

    public void setStrategy(RouteStrategy strategy) {
        this.strategy = strategy;
    }

    public void doSomething() {

    }
}
