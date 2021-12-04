import java.util.ArrayList;
import java.util.List;

public class Folder extends  Component{
    private List<Component> childs = new ArrayList<>();

    public Folder(String name) {
        super(name);
    }

    @Override
    public void show() {
        System.out.println(t);
    }


    public Component addComponent(Component component) {
        component.level =  this.level +
    }
}
