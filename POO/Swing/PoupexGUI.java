
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class PoupexGUI extends JFrame { //JFrame - janela da aplicação
    //campo para preencher, precisa ser declarado na classe para botar modificar depois
    private JTextField jurosField; //campo de juros
    private JTextField anosField; //campo de anos
    private JTextField depositoField; //campo de deposito
    private JLabel totalPoupadoLabel; //label que vai mostrar o resultado

    public PoupexGUI(){
        super("Poupex"); //chama o construtor do JFrame e passa o nome da janela

        //criarMenu(); //chama a função pra criar o menu
        criarFormulario(); //chama a função pra criar o formulario
    }

    private void criarMenu(){
        JMenu menuAjuda = new JMenu("Ajuda"); //cria a opção no menu com nome Ajuda

        AjudaAction ajudaAction = new AjudaAction(); //objeto que faz a ação

        JMenuItem menuItemSobre = new JMenuItem("Sobre..."); //cria um item na opção Ajuda
        menuItemSobre.addActionListener(ajudaAction); //objeto ajudaAction faz açao
        menuAjuda.add(menuItemSobre); //adiciona o item na opção Ajuda

        /*
        JMenuItem menuItemFechar = new JMenuItem("Fechar"); //cria um item na opção Ajuda
        menuAjuda.add(menuItemFechar); //adiciona o item na opção Ajuda
        */

        JMenuBar barra = new JMenuBar(); //cria uma barra de menu
        setJMenuBar(barra); //define a barra como a que foi criada
        barra.add(menuAjuda); //adiciona a opção Ajuda na barra

    }

    private void criarFormulario(){
        setLayout(new BorderLayout()); //escolhe o layout

        /*
        JPanel panelTitulo = new JPanel(); //cria o primeiro painel que será para o titulo
        panelTitulo.setLayout(new FlowLayout()); //escolhe o layout para o painel criado

        JLabel titulo = new JLabel("Calculadora Poupança"); //cria um label
        titulo.setFont(new Font("Verdana", Font.PLAIN, 16)); //escolhe a fonte do tipo verdana, regular, de tamanho 16

        panelTitulo.add(titulo); //adiciona no painel o label titulo
         */

        JPanel panelDados = new JPanel(); //cria o painel que vai ter o preenchimento de dados
        panelDados.setLayout(new BoxLayout(panelDados, BoxLayout.Y_AXIS)); //boxlayout ordenando pelo eixo y

        JPanel panelaux1 = new JPanel(); //cria o painel que vai ter o preenchimento de dados
        panelaux1.setLayout(new BorderLayout()); //escolhe o layout para o painel criado

        JPanel panelaux2 = new JPanel(); //cria o painel que vai ter o preenchimento de dados
        panelaux2.setLayout(new BorderLayout()); //escolhe o layout para o painel criado

        JPanel panelaux3 = new JPanel(); //cria o painel que vai ter o preenchimento de dados
        panelaux3.setLayout(new BorderLayout()); //escolhe o layout para o painel criado

        JPanel panelaux4 = new JPanel(); //cria o painel que vai ter o preenchimento de dados
        panelaux4.setLayout(new BorderLayout()); //escolhe o layout para o painel criado


        JLabel jurosLabel = new JLabel("Juros ao mês %:"); //cria um label
        jurosField = new JTextField(25); //cria o campo para preenchimento passando o tamanho dele

        JLabel anosLabel = new JLabel("Num. de anos:"); //cria um label
        anosField = new JTextField(25); //cria o campo para preenchimento passando o tamanho dele

        JLabel depositoLabel = new JLabel("Depósito mensal R$:"); //cria um label
        depositoField = new JTextField(25); //cria o campo para preenchimento passando o tamanho dele

        JLabel totalLabel = new JLabel("Total poupado R$:"); //cria um label
        totalPoupadoLabel = new JLabel(); //label para preencher com resultado

        panelaux1.add(jurosLabel, BorderLayout.WEST); //adiciona no painel o label no canto esquerdo
        panelaux1.add(jurosField, BorderLayout.EAST); //adiciona no panel o campo no canto direito
        panelaux2.add(anosLabel, BorderLayout.WEST);
        panelaux2.add(anosField, BorderLayout.EAST);
        panelaux3.add(depositoLabel, BorderLayout.WEST);
        panelaux3.add(depositoField, BorderLayout.EAST);
        panelaux4.add(totalLabel, BorderLayout.WEST);
        panelaux4.add(totalPoupadoLabel, BorderLayout.EAST);

        panelDados.add(panelaux1); //adiciona os 4 paineis na vertical no boxlayout para ficarem ordenados
        panelDados.add(panelaux2);
        panelDados.add(panelaux3);
        panelDados.add(panelaux4);

        JPanel panelBotao = new JPanel(); //cria o painel do botao
        panelBotao.setLayout(new BorderLayout()); //define o layout do painel

        OkAction okAction = new OkAction();
        JButton botaoOK = new JButton("OK"); //cria o botao OK
        botaoOK.setPreferredSize(new Dimension(280,25)); //mudar o tamanho do botão - 280/23 com menu
        botaoOK.addActionListener(okAction); //objeto ajudaAction faz açao


        panelBotao.add(botaoOK, BorderLayout.EAST); //adiciona o botao no leste do painel botao
        /*
        add(panelTitulo, BorderLayout.NORTH); //adiciona o painel no norte
         */
        add(panelDados, BorderLayout.CENTER); //adiciona o painel no centro
        add(panelBotao, BorderLayout.SOUTH); //adiciona o painel no sul
    }

    private class AjudaAction implements ActionListener{ //classe pra criar o objeto que ira fazer a ação

        @Override
        public void actionPerformed(ActionEvent e) { //recebe um evento
            JOptionPane.showMessageDialog(null, "Atividade de fixação 9.1 - Caio Nery Matos Santos", "Sobre", JOptionPane.PLAIN_MESSAGE);
        }
    }

    private class OkAction implements ActionListener{ //classe pra criar o objeto que ira fazer a ação

        @Override
        public void actionPerformed(ActionEvent e) {
            String juros, anos, deposito, total, nova;
            int a, d;
            float j = 0, poupado;
            juros = jurosField.getText(); //lendo o que ta escrito no field
            if ((juros != null) && (juros.length() > 0)) {
                nova = juros.substring(0, juros.length() - 1); //removendo o % do final da string
                j = Integer.parseInt(nova); //transformando em int para poder calcular
                j /= 100;
            }
            anos = anosField.getText(); //lendo o que ta escrito no field
            a = Integer.parseInt(anos); //transformando em int para poder calcular
            deposito = depositoField.getText(); //lendo o que ta escrito no field
            d = Integer.parseInt(deposito); //transformando em int para poder calcular
            poupado = (d*j)*(12*a);
            total = Float.toString(poupado);
            totalPoupadoLabel.setText(total);
        }
    }
}
