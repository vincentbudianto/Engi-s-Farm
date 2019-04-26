import static org.junit.Assert.*;

import org.junit.Test;

public class ChickenTest {

    @Test
    public void multiplicationOfZeroIntegersShouldReturnZero() {
        Chicken tester = new Chicken(100,20); // MyClass is tested
		
        // assert statements
		assertEquals("","Chicken 1: Petok",tester.sound());
        assertEquals("must be 1 because its the first chicken\n",1, tester.getId() );
        assertEquals("should be not hungry cos it's just build\n",false, tester.getHunger());
        assertEquals("should be 100 bcoz the petok belom move\n",20, tester.getX() );
    }
}