import static org.junit.Assert.*;

import org.junit.Test;

public class WellTest {

    @Test
    public void multiplicationOfZeroIntegersShouldReturnZero() {
        Well tester = new Well(5,7); // MyClass is tested
		assertEquals("",(char) 'W',(char) tester.render());
		assertEquals("", 7, tester.getX());
		assertEquals("", 5, tester.getY());
		//assertEquals("", 0 , tester.prio);
		//tester.prio = 15;
		//assertEquals("", 15 , tester.prio);
        // assert statements
		//assertEquals("","Goat 1: Mbeee",tester.sound());
      //  assertEquals("must be 1 because its the first goat\n",1, tester.getId() );
      //  assertEquals("should be not hungry cos it's just build\n",false, tester.getHunger());
      //  assertEquals("should be 100 bcoz the goat belom move\n",20, tester.getX() );
    }
}