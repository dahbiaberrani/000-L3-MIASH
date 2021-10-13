package tp6;
/*
 * Université Toulouse 2 Jean Jaures
 * L3 MIASHS 2021-2022
 * BERRANI Dahbia
 * berrani.dehbia1993@gmail.com
 */

public interface Webable {

    String initHtml(); // Un seul appel : pour initialiser la page web
    String toHtml(); // Correspond à un toString() en HTML
    String endHtml(); // Un seul appel : pour terminer la page web
}
