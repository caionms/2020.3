import javax.swing.*;

public class Aplicacao {
    public static void main(String[] args){
        PoupexGUI p1 = new PoupexGUI();

        p1.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //define o padrão de fechamento da janela
        p1.setSize(480,180); //define o tamanho da janela
        p1.setVisible(true); //define que a janela é visivel
    }
}
