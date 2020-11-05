public class Main {
    public static void main(String[] args) {
        Professor p1 = new Professor("Roberto", "DCC", "19/03", "213123");
        p1.imprimir();
        p1.setDepartamento(2);
        p1.imprimir();
        p1.setDepartamento("teste");
        p1.imprimir();
    }
}
