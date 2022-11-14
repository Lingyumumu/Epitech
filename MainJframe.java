import javax.swing.*;
import java.awt.*;

public class MainJframe {

    public static void main(String[] args) {
        JFrame jFrame = new JFrame("Interface");//donne le titre
        jFrame.setResizable(false);// impossible de changer la taille
        //obtenir la taille de l'ecran actuelle
        Toolkit defaultToolkit = Toolkit.getDefaultToolkit();
        // donner la dimension de l'ecran a screenSize
        Dimension screenSize = defaultToolkit.getScreenSize();
        // parametrer la taille de la fenetre tout l'ecran
        jFrame.setSize(400,700);
        // mettre au milieu la fenetre
        jFrame.setLocationRelativeTo(null);
        // creer un bouton fermer
        jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        // afficher la fenetre
        jFrame.setVisible(true);
//        JFrame jFrame = new JFrame();
//        System.out.println(jFrame);

        //Create button lancer une partie
        JButton btn = new JButton("Lancer une partie");
        //Set button position
        btn.setBounds(50,100,300,50);
        //Add button to frame
        jFrame.add(btn);
        // mise en page
        jFrame.setLayout(null);
        // afficher
        jFrame.setVisible(true);

        // bouton chapitre
        JButton btn1 = new JButton("choisir le chapitre");
        //Set button position
        btn1.setBounds(50,170,300,50);
        //Add button to frame
        jFrame.add(btn1);
        // mise en page
        jFrame.setLayout(null);
        jFrame.setVisible(true);


        // bouton option
        JButton btn2 = new JButton("Option");
        //Set button position
        btn2.setBounds(50,240,300,50);
        //Add button to frame
        jFrame.add(btn2);
        // mise en page
        jFrame.setLayout(null);
        jFrame.setVisible(true);


        // bouton statistique
        JButton btn3 = new JButton("Statistique");
        //Set button position
        btn3.setBounds(50,310,300,50);
        //Add button to frame
        jFrame.add(btn3);
        // mise en page
        jFrame.setLayout(null);
        jFrame.setVisible(true);


        // bouton mod
        JButton btn4 = new JButton("Mod");
        //Set button position
        btn4.setBounds(50,380,300,50);
        //Add button to frame
        jFrame.add(btn4);
        // mise en page
        jFrame.setLayout(null);
        jFrame.setVisible(true);

        // bouton quitter
        JButton btn5 = new JButton("Quitter");
        //Set button position
        btn5.setBounds(50,450,300,50);
        //Add button to frame
        jFrame.add(btn5);
        // mise en page
        jFrame.setLayout(null);
        jFrame.setVisible(true);


    }
}
