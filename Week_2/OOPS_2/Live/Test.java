package Live;

import music.Playable;
import music.string.veena;
import music.Wind.Saxophone;

public class Test {

    public static void main(String[] args) {

        // Part A
        veena v = new veena();
        v.play();

        // Part B
        Saxophone s = new Saxophone();
        s.play();

        // Part C
        Playable p;

        p = new veena();
        p.play();

        p = new Saxophone();
        p.play();
    }
}
