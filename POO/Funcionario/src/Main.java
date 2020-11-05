public class Main {
    public static void main(String[] args){
        Funcionario f1 = new Funcionario("Caio","Alagoinhas","75991736842",2000,"18/03/2001");
        Funcionario f2 = new Funcionario("Marcos","Salvador","8290919091","21/05/1999");
        Funcionario f3 = new Funcionario("Damiao","Alagoinhas","2390922315",1300);
        Funcionario f4 = new Funcionario("Lipe","7693999510","5699230044");
        f1.imprimir();
        f2.imprimir();
        f3.imprimir();
        f4.imprimir();
        f1.demitirFuncionario("04/10/2020");
        f2.demitirFuncionario();
        f3.promoverFuncionario(10);
        f4.promoverFuncionario();
        f1.imprimir();
        f2.imprimir();
        f3.imprimir();
        f4.imprimir();
    }
}
