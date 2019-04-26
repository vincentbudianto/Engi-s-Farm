import static org.junit.Assert.*;

import org.junit.Test;

public class GrasslandTest {

    @Test
    public void multiplicationOfZeroIntegersShouldReturnZero() {
        Grassland tester = new Grassland(); // MyClass is tested
		if (tester.isGrass()){
			assertEquals("",(char) '#', (char)tester.render() );
			tester.setGrassStatus(false);
			assertEquals("",false, tester.isGrass());
		}
		else{
			assertEquals("",(char) '-', (char)tester.render() );
			tester.setGrassStatus(true);
			assertEquals("",true, tester.isGrass());
		}
    }
}