/**
 * Truck.java
 * <p>
 * File berisi interface Truck
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

import java.io.*;
import java.lang.*;
import java.util.*;
import java.time.Instant;
import java.time.Duration;

/**
 * <p>
 * Class for rendering object to Truck
 * </p>
 */
public class Truck extends Facility
{
	private Instant latestTime;
	private boolean firstTime;
	/**
	 * Truck constructor
	 * @param y
	 * @param x
	 * @return Character
	 */
	public Truck(int y, int x){
		setY(y);
		setX(x);
		latestTime = Instant.now();
		firstTime = true;
	}

	/**
	 * Render Truck to map
	 * @return Character
	 */
	public Character render(){
		return 'T';
	}

	/**
	 * Check truck avaliablity
	 * @return boolean
	 */
	public boolean isAvailable(){
		Instant nowTime = Instant.now();
		Duration timeElapsed = Duration.between(latestTime, nowTime);

		return (timeElapsed.toMinutes() >= 1 || firstTime);
	}

	/**
	 * Set latestTime attribute
	 */
	public void setLastTime(){
		latestTime = Instant.now();
	}

	/**
	 * Method for trasacting
	 * @return boolean
	 */
	public boolean transact(){
		boolean valid = isAvailable();
		if(valid){
			setLastTime();
			firstTime = false;
		}
		return valid;
	}
}
