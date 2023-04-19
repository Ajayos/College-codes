class TwoDshape {
    int length, height;
    TwoDshape(int x, int y) {
        length = x;
        height = y;
    }
    void display() {
        System.out.println("[*] Length " + length + "\n[*] height " + height);
    }
    
}
class squre extends TwoDshape {
    squre(int length) {
        super(length, length);
    }
    boolean isequal ( int sides1, int sides2 ) {
        if(sides1 == sides2) return true;
        else return false;
    }
}

public class Exp9 {
    public static void main(String[] args) {
        squre sq = new squre(6);
        sq.display();
        int sides1 = 11;
        int sides2 = 11;
        boolean result = sq.isequal(sides1, sides2);
        System.out.println("[*] Side1 (" + sides1 + ") Side2 (" + sides2 + ") are rqal = " + result );
    }
}
