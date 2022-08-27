#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
//Random account value!
//Password and account number entered are yours!
struct account{

long int number, value,password;
int verfcode;
};

//clean console on every OS.
void flush(){

  puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

//time to process.
void delay(){

   puts("Processando...\n");

  sleep(3);
}
//machine cash design/organization.
void separate(){
  puts("\n");
  puts("==========================\n");
  puts("\n");
};

//password tester to verify the user.
void passwordtest( struct account *d){
  long int password=0;
  puts("Insira sua senha:\n");
  
  while(password!= d->password){
    scanf("%ld", &password);
    if(password!= d->password){
      puts("Senha incorreta, reinsira\n");
    }
  }
}

//Random cash inserted in account.
void accountvalue(struct account *d){
  srand(time(NULL));

  d->value= rand() % 100000;
    
}

//select an option - machine cash menu.
int toselect(struct account a){
  separate();
  int selectt=0;
printf ("Selecione qual opção gostaria de realizar:\n");
  printf ("1-Saque\n");
  printf ("2-Transação\n");
  printf ("3-Depósito\n");
  printf ("4-Ver dados da conta\n");
  printf ("5-Sair\n");

  scanf ("%d", &selectt );

  return selectt;
  }
//withdraw with the least amount of money bill.
void withdraw(struct account *d){
  delay();
  separate();

  int value=5000, valueaux;

  printf("Você tem R$%ld em conta\n", d->value);

  puts("Quanto você gostaria de sacar?\n");
  puts("Somente é permitido saques de até R$1000 em caixa eletrônico.\n");
  while(value>1000){
    scanf("%d", &value);
    if(value>1000){
      puts("Não é permitido um saque nessa quantia\n");
      puts("Insira outro valor:\n");
    }
  }
  
  passwordtest(d);
  valueaux=value;
  delay();

  separate();
  puts("Você recebeu:\n");
  if(value>=100){
    printf (" %d nota(s) de 100\n", value/100);
  value=(value-(100*(value/100)));
  }
  if(value>=50){
    printf (" %d nota(s) de 50\n", value/50);
  value=(value-(50*(value/50)));
  }
  if(value>=20){
    printf (" %d nota(s) de 20\n", value/20);
  value=(value-(20*(value/20)));
  }
  if(value>=10){
    printf (" %d nota(s) de 10\n", value/10);
  value=(value-(10*(value/10)));
    }
  if(value>=5){
    printf (" %d nota(s) de 5\n", value/5);
  value=(value-(5*(value/5)));
    }
  if(value>=2){
    printf (" %d nota(s) de 2\n", value/2);
  value=(value-(2*(value%2)));
    }
  separate();

  
d->value=(d->value-valueaux);
  printf("Agora seu saldo em conta é de: %ld\n", d->value);
  
}
//deposit.
void deposit(struct account *d){
  delay();
  separate();
int deposit=5000,decision=0;
  
printf("Seu saldo em conta é de: %ld\n", d->value);
puts("Somente é permitido depositos de até R$1000 em caixa eletrônico.\n");

puts("Qual é o valor que você gostaria de depositar?\n");

   while(deposit>1000){
    scanf("%d", &deposit);
    if(deposit>1000){
      puts("Não é permitido um deposito nessa quantia\n");
      puts("Insira outro valor:\n");
}
     }
printf("Gostaria mesmo de realizar o deposito de R$%d?\n", deposit);

  puts("1-sim\n");
   puts("2-não\n");

  scanf("%d", &decision);


  switch(decision){

    case 1:{

      delay();
      passwordtest(d);
separate();
  printf("Deposito realizado com sucesso!\n");
  d->value=d->value+deposit;
  printf("Agora seu saldo em conta é de %ld\n", d->value);
      break;
    }
    case 2:{
      delay();
      break;
    }
  }

  }
// enter number and password for your account.
void inputaccount(struct account *d){
  int flag=0;

 puts("Olá!\n");

  puts("Seja bem vindo ao banco em C!\n");

  printf("\n");

  puts("Insira o número da sua conta:(8 números)\n");
  
while(flag!=1){
  scanf("%ld", &d->number);
  if(d->number>9999999){
   if(d->number<100000000){
     flag=1;
   }else{
     puts("Número de conta incorreto, por favor reinsira:\n");
   }
  }else{
     puts("Número de conta incorreto, por favor reinsira:\n");
  }
}
  flag=0;
  puts("Insira a senha:(6 números)\n");
 while(flag!=1){
  scanf("%ld", &d->password);
  if(d->password>99999){
   if(d->password<1000000){
     flag=1;
   }else{
     puts("Senha incorreta, por favor reinsira:\n");
   }
  }else{
     puts("Senha incorreta, por favor reinsira:\n");
  }
}

  delay();

  //daria um flush()?
  
}
//transactions
void transaction(struct account *d){
  delay();
separate();
  long int account,value;
  int decision=0;
  puts("Para qual conta você gostaria de realizar a transação?\n");

  scanf("%ld", &account);

  puts("Qual seria o valor da transação?\n");

  scanf("%ld", &value);

  printf("Gostaria mesmo de realizar a transação para a conta %ld no valor de R$%ld?\n", account, value);

  puts("1-sim\n");
   puts("2-não\n");

  scanf("%d", &decision);

  switch(decision){

    case 1:{

      delay();
      passwordtest(d);
      separate();
      d->value=d->value-value;
      puts("Transação realizada com sucesso!\n");
      printf("Agora sua conta tem saldo de: %ld\n", d->value);
      break;
    }
    case 2:{
      delay();
      break;
    }
  }
}
//account stats.
void account(struct account d){
  delay();

  separate();

  printf("Número da conta: %ld\n", a.number);

  printf("Saldo em conta: %ld\n", a.value);

  separate();
}
//finish the cash machine
void end(){
  
  delay();
  flush();
  puts("Todos seus dados foram excluídos!\n");
  puts("Obrigado por usar o banco em C!\n");
  puts("Tenha um ótimo dia!\n");
}

int main(void) {
int select=0;
 struct account d;

inputaccount(&a);

accountvalue(&a);

  while(select!=5){
    select=toselect(a);
    if(select==1){
      withdraw(&a);
    }
    if(select==3){
      deposit(&a);
    }
    if(select==2){
      transaction(&a);
    }
    if(select==4){
      account(a);
    }
  }

  end();
 
  }
