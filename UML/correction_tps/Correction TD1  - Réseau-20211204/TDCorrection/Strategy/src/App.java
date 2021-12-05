public class App {
    public static void main(String[] args) {
        Context context = new Context();
        context.appliquerStrategy();
        context.setStrategy(new StrategyImpl1());
        context.appliquerStrategy();

        context.setStrategy(new StrategyImpl2());
        context.appliquerStrategy();

        context.setStrategy(new StrategyImpl3());
        context.appliquerStrategy();
    }
}
