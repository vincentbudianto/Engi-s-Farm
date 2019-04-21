/**
 * View.java
 * <p>
 * File berisi implementasi GUI JavaSwing untuk Engi's Farm
 * </p>
 * @author 13515125/Muhammad Rafid Amrullah, 13517092/Michael Ray, 13517113/Juro Sutantra, 13517137/Vincent Budianto
 * @version 2.0
 * @since 2019-04-21
 */

import animal.*;
import facility.*;
import farmproduct.*;
import land.*;
import resource.*;
import sideproduct.*;
import java.util.*;

import java.awt.Dimension;
import java.awt.Color;

import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JSplitPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.border.TitledBorder;


/**
 * <p>
 * Class for JavaSwing GUI
 * </p>
 */
public class View {

	public View() {
		// Create views swing UI components 
		JTextField searchTermTextField = new JTextField(26);
		
		//JButton upButton = new JButton("▲");
		JButton upButton = new JButton("U");
		//JButton downButton = new JButton("▼");
		JButton downButton = new JButton("D");
		//JButton leftButton = new JButton("◄");
		JButton leftButton = new JButton("L");
		//JButton rightButton = new JButton("►");
		JButton rightButton = new JButton("R");
		JButton talkButton = new JButton("T");
		JButton interactButton = new JButton("I");
		JButton killButton = new JButton("K");
		JButton growButton = new JButton("G");
		JButton stayButton = new JButton("S");
		
		JTable table = new JTable();
		JTable inventoryTable = new JTable();
		JTable legendTable = new JTable();
		JTable resourceTable = new JTable();

		// Create model + controller
		resource.Map map = new resource.Map();
		table.setModel(map);

		Inventory inventory = new resource.Inventory();
		inventoryTable.setModel(inventory);

		Legend legend = new resource.Legend();
		legendTable.setModel(legend);
		
		Resource resource = new resource.Resource();
		resourceTable.setModel(resource);

		Player player = new resource.Player("Mr. Hari-H Jadi");
		Cell [][] cell = new resource.Cell[map.DATA.length][map.DATA[0].length];
		ArrayList<animal.FarmAnimal> animal = new ArrayList<>();
		ArrayList<facility.Facility> facility = new ArrayList<>();

		Initializer initializer = new Initializer();
		initializer.initCell(cell, map);
		initializer.initAnimal(animal, map);
		initializer.initPlayer(player, map);
		initializer.initInventory(player, inventory);
		initializer.initResource(player, animal, resource);
		initializer.initFacility(facility, map);

		CommandListener listener = new CommandListener(map, player, cell, animal, inventory, resource, facility);
		upButton.addActionListener(listener);
		downButton.addActionListener(listener);
		leftButton.addActionListener(listener);
		rightButton.addActionListener(listener);
		talkButton.addActionListener(listener);
		interactButton.addActionListener(listener);
		killButton.addActionListener(listener);
		growButton.addActionListener(listener);
		stayButton.addActionListener(listener);

		// Header layout
		JPanel actionPane1 = new JPanel();
		actionPane1.add(interactButton);
		actionPane1.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Interact", TitledBorder.CENTER, TitledBorder.TOP));
		JPanel actionPane2 = new JPanel();
		actionPane2.add(killButton);
		actionPane2.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Kill", TitledBorder.CENTER, TitledBorder.TOP));
		JPanel actionPane3 = new JPanel();
		actionPane3.add(talkButton);
		actionPane3.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Talk", TitledBorder.CENTER, TitledBorder.TOP));
		JPanel actionPane4 = new JPanel();
		actionPane4.add(growButton);
		actionPane4.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Grow", TitledBorder.CENTER, TitledBorder.TOP));
		
		JPanel movePane1 = new JPanel();
		movePane1.add(upButton);
		movePane1.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Up", TitledBorder.CENTER, TitledBorder.TOP));
		JPanel movePane2 = new JPanel();
		movePane2.add(leftButton);
		movePane2.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Left", TitledBorder.CENTER, TitledBorder.TOP));
		JPanel movePane3 = new JPanel();
		movePane3.add(stayButton);
		movePane3.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Stay", TitledBorder.CENTER, TitledBorder.TOP));
		JPanel movePane4 = new JPanel();
		movePane4.add(rightButton);
		movePane4.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Right", TitledBorder.CENTER, TitledBorder.TOP));
		JPanel movePane5 = new JPanel();
		movePane5.add(downButton);
		movePane5.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Down", TitledBorder.CENTER, TitledBorder.TOP));

		// Control layout
		JSplitPane semiActionPane1 = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT, actionPane1, actionPane2);
		semiActionPane1.setDividerLocation(65);
		
		JSplitPane semiActionPane2 = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT, actionPane3, actionPane4);
		semiActionPane2.setDividerLocation(65);
		
		JSplitPane actionPane = new JSplitPane(JSplitPane.VERTICAL_SPLIT, semiActionPane1, semiActionPane2);
		actionPane.setDividerLocation(93);
		
		JSplitPane halfMovePane = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT, movePane2, movePane3);
		halfMovePane.setDividerLocation(70);
		
		JSplitPane midMovePane = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT, halfMovePane, movePane4);
		midMovePane.setDividerLocation(150);
		
		JSplitPane semiMovePane = new JSplitPane(JSplitPane.VERTICAL_SPLIT, movePane1, midMovePane);
		semiMovePane.setDividerLocation(57);
		
		JSplitPane movePane = new JSplitPane(JSplitPane.VERTICAL_SPLIT, semiMovePane, movePane5);
		movePane.setDividerLocation(131);
		
		JSplitPane ctrlPane = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT, actionPane, movePane);
		ctrlPane.setDividerLocation(150);
		ctrlPane.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Controller", TitledBorder.CENTER, TitledBorder.TOP));

		// Status bar layout
        JScrollPane inventoryPane = new JScrollPane(inventoryTable);
		inventoryPane.setPreferredSize(new Dimension(125, 200));
		
		JScrollPane resourcePane = new JScrollPane(resourceTable);
		resourcePane.setPreferredSize(new Dimension(125, 50));
		resourcePane.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), player.getName(), TitledBorder.CENTER, TitledBorder.TOP));

		JSplitPane barPane = new JSplitPane(JSplitPane.VERTICAL_SPLIT, inventoryPane, resourcePane);
		barPane.setDividerLocation(225);
				
		// Main farm layout
		JScrollPane tableScrollPane = new JScrollPane(table);
		tableScrollPane.setPreferredSize(new Dimension(400, 300));
		tableScrollPane.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Engi's Farm Java", TitledBorder.CENTER, TitledBorder.TOP));
		
		JSplitPane splitPane = new JSplitPane(JSplitPane.VERTICAL_SPLIT, tableScrollPane, ctrlPane);
		splitPane.setDividerLocation(225);
		splitPane.setEnabled(false);

        JSplitPane fullPane = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT, barPane, splitPane);
        fullPane.setDividerLocation(150);
        
		JScrollPane legendPane = new JScrollPane(legendTable);
		legendPane.setPreferredSize(new Dimension(100, 250));
		legendPane.setBorder(BorderFactory.createTitledBorder(BorderFactory.createEtchedBorder(), "Legend", TitledBorder.CENTER, TitledBorder.TOP));

		
        JSplitPane completePane = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT, fullPane, legendPane);
        completePane.setDividerLocation(565);

		// Display
		JFrame frame = new JFrame("Engi's Farm Java");
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.add(completePane);
		frame.pack();
		frame.setLocationRelativeTo(null);
		frame.setSize(800,500);
		frame.setVisible(true);
	}

}
