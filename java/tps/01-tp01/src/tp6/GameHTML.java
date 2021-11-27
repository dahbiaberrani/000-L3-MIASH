package tp6;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public class GameHTML extends Game implements  Webable{

    public GameHTML(int nbLigs, int nbCols) {
        super(nbLigs, nbCols);
    }

    public GameHTML(Coord[] listeInitiale, int nbLigs, int nbCols) {
        super(listeInitiale, nbLigs, nbCols);
    }
    @Override
    public String initHtml() {
        return "<html>\n" +
                "<head>\n" +
                "<meta http-equiv=\"Content-Type\" content=\"text/html\" ; charset=\"utf-8\">\n" +
                "<title>Jeu de la vie</title>\n" +
                "</head><body style=\"background:yellow;\">\n" +
                "\"<h1 align=\"center\">Le jeu de la vie</h1>\n";

    }

    @Override
    public String toHtml() {
        String body = "";
        body += "<table border = \"1\" style= \"color:white;\">\n" +
                "<tbody><tr>\n";
        for (int line = 0; line < this.getNbLigs(); line++) {
            body += "<tr>";
            for (int row = 0; row < this.getNbCols();row++) {
                body += "<td>";
                Coord courant = new Coord(line,row);
                if(this.getDamier().contains(courant)) {
                    body += "<td width=\"20 \" style= \" background:red;\">&nbsp;</td>\n";
                } else {
                    body += "<td width=\"20 \" style= \" background:white;\">&nbsp;</td>\n";
                }
            }
            body += "</tr>\n";
        }
        body += "\n</tbody>";
        body += "\n</table>\n";
        return body;

    }

    @Override
    public String endHtml() {
        return "</html>";
    }
}
