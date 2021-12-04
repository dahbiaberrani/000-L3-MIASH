import java.sql.SQLOutput;

public class File {
    public File(String name) {
        super(name);
    }
    @Override
    public void show() {
        System.out.println(tab());
    }
}
