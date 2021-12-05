public class SConnection {
    private static Connection conn; //unique
    static{
        conn = new Connection();
    }
    private SConnection(){}
    public static Connection getConnection(){
        return(conn);
    }
}
