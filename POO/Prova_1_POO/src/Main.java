public class Main {
    public static void main(String[] args){
        Paciente p1 = new Paciente("Caio","0992323023","Rua St Maria","caionms@ufba.br");
        Paciente p2 = new Paciente("Alvaro","203232293");
        System.out.println(p1.imprimirFichaPaciente());
        System.out.println(p2.imprimirFichaPaciente());
        p1.adicionarNovoExame("teste 1","apolinario","123","10/10",true,p1);
        p1.adicionarNovoExame("teste 2","apolinario","123","10/10",true,p1);
        p1.adicionarNovoExame("teste 3","george","321","20/10",true,p1);
        p1.adicionarNovoExame("teste 4","george","321","20/10",false,p1);
        p1.adicionarNovoExame("teste 5","apolinario","123","23/04",true,p1);
        p2.adicionarNovoExame("teste 6","george","321","20/10",true,p2);
        p2.adicionarNovoExame("teste 7","barreto","456","20/10",p2);
        p2.adicionarNovoExame("teste 8","barreto","456","23/10",false,p2);
        System.out.println(p1.imprimirFichaPaciente());
        System.out.println(p1.imprimirFichaPaciente("123"));
        System.out.println(p2.imprimirFichaPaciente());
        System.out.println(p2.imprimirFichaPaciente("1"));

    }
}
