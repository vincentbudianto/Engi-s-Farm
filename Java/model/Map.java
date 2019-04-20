/**
 * Map.java
 * <p>
 * File berisi map Engi's Farm
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

import javax.swing.table.DefaultTableModel;

@SuppressWarnings("serial")

/**
 * <p>
 * Class for Engi's Farm map
 * </p>
 */
public class Map extends DefaultTableModel {

	public static Character[] TABLE_HEADER = { ' ', ' ',
			' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

	public static Character[][] DATA = {
			{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
			{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
			{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
			{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
			{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
			{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
			{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
			{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
			{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
			{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
			{ ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' } };

	public Map() {
		super(DATA, TABLE_HEADER);
	}

}
