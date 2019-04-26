import static org.junit.Assert.*;

import org.junit.Test;

public class BarnTest {

    @Test
    public void multiplicationOfZeroIntegersShouldReturnZero() {
        Barn tester = new Barn(); // MyClass is tested
		if (tester.isGrass()){
			assertEquals("",(char) '@', (char)tester.render() );
			tester.setGrassStatus(false);
			assertEquals("",false, tester.isGrass());
		}
		else{
			assertEquals("",(char) 'x', (char)tester.render() );
			tester.setGrassStatus(true);
			assertEquals("",true, tester.isGrass());
		}
    }
}