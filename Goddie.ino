//Lembrar que tem que dividir o numero de voltas pelo numero de porcoes que o usuario escolhe
int peso_cachorro = 0;
int peso_gato = 0;
int voltas_gato = 0;
int voltas_cachorro = 0;
int grau_de_atividade = 0;
void setup() {

}

void loop() {
voltas_gato = calculo_gato();         // considerando que uma volta é aproximadamente: 10 gramas
voltas_cachorro = calculo_cachorro(); // considerando que uma volta é aproximadamente: 10 gramas
}

int calculo_gato()
{
  int voltas;
  if(grau_de_atividade == 0)//normal
  {
    voltas = peso_gato;
    return voltas;
    
  }
  else if(grau_de_atividade == 1)//alta atividade
  {
    voltas = peso_gato + 1;
    return voltas;
  }
  else
  {
    voltas = 0;
    return voltas;
  }
}

int calculo_cachorro()
{
  int voltas;
  if(grau_de_atividade == 0)//normal
  {
    if(peso_cachorro <= 3)
    {
      voltas = peso_cachorro*1.7;
      return voltas;
    }
    else if(peso_cachorro > 3 && peso_cachorro < 5)
    {
      voltas = peso_cachorro*1.6;
      return voltas;
    }
    else if(peso_cachorro > 5 && peso_cachorro < 11)
    {
      voltas = peso_cachorro*1.4;
      return voltas;
    }
    else if(peso_cachorro > 11)
    {
      voltas = peso_cachorro*1.2;
      return voltas;
    }
    else
    {
      voltas = 0;
      return voltas;
    }
  }
  if(grau_de_atividade == 1)//alta atividade
  {
    if(peso_cachorro <= 3)
    {
      voltas = peso_cachorro*2.3;
      return voltas;
    }
    else if(peso_cachorro > 3 && peso_cachorro < 5)
    {
      voltas = peso_cachorro*2.1;
      return voltas;
    }
    else if(peso_cachorro > 5 && peso_cachorro < 11)
    {
      voltas = peso_cachorro*1.9;
      return voltas;
    }
    else if(peso_cachorro > 11)
    {
      voltas = peso_cachorro*1.6;
      return voltas;
    }
    else
    {
      voltas = 0;
      return voltas;
    }
  }
  
}
