import static org.junit.Assert.*;

import org.junit.Test;

public class CowTest {

    @Test
    public void multiplicationOfZeroIntegersShouldReturnZero() {
        Goat tester = new Goat(100,20); // MyClass is tested
		
        // assert statements
		assertEquals("","Cow 1: Mbeee",tester.sound());
        assertEquals("must be 1 because its the first goat\n",1, tester.getId() );
        assertEquals("should be not hungry cos it's just build\n",false, tester.getHunger());
        assertEquals("should be 100 bcoz the goat belom move\n",20, tester.getX() );
    }
}