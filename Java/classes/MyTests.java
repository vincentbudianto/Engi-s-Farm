import static org.junit.Assert.*;

import org.junit.Test;

public class MyTests {

    @Test
    public void multiplicationOfZeroIntegersShouldReturnZero() {
        Chicken tester = new Chicken(100,20); // MyClass is tested
		
        // assert statements
		
        assertEquals("must be 1 because its the first chicken",1, tester.getId() );
        assertEquals("should be not hungry cos it's just build",false, tester.getHunger());
        assertEquals("should be 100 bcoz the petok belom move",20, tester.getX() );
    }
}