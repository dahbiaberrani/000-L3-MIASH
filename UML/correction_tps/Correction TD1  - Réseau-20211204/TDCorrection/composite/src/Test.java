public class Test {
    public static void main(String[] args) {
        Folder root = new Folder("Design Patterns");
        Folder d1 = (Folder) root.addComponent(new Folder("Comportement"));
        Folder d2 = (Folder) root.addComponent(new Folder("Structure"));
        Folder d3 = (Folder) root.addComponent(new Folder("Création"));

        d1.addComponent(new File("Strategy"));
        d1.addComponent(new File("Observer"));
        d2.addComponent(new File("Decorator"));
        d2.addComponent(new File("Composite"));
        d3.addComponent(new File("Singleton"));

        root.show();
    }
}
