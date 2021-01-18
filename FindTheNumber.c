#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <time.h>
#include <Windows.h>

int Max=0;

int random(){
  int x;
  do {
    srand(time(NULL));
    int lowerLimit = 1, upperLimit = 1000;
        x =  lowerLimit + rand() % (upperLimit - lowerLimit);
  } while((x>=1000)&&(x<=1));
}

char DifficultyLevel(char Difficulty[2]){
  printf("--> Chose The Diffuculty Level! <--\n");
  printf("--> [Hard |><| H]  [Medium |><| M]  [Easy |><| E] <--\n");
  bool x;
    do {
      scanf("%s",&Difficulty);
      if ((Difficulty[0]=='H')){
        x=true;
        Max=2;
        printf("--> You Have x2 Tries <--\n");
        break;
    }
    else if (Difficulty[0]=='M'){
      x=true;
      Max=4;
      printf("--> You Have x4 Tries <--\n");
      break;
    }
    else if (Difficulty[0]=='E'){
      x=true;
      Max=6;
      printf("--> You Have x6 Tries <--\n");
      break;
    }
    else {
      printf("\t\t--> H for HARD |><| M for MEDIUM |><| E for EASY <--\n");
        x=false;
        }
    } while(((Max==2)||(Max==4)||(Max==6))&&(x=true));
}


int MainGame(int deviner, int proposition, int nb_trys, int Max){
  nb_trys=0;
  printf("\t\t\t--> I've Chose A Number It's Your Turn To Guess It Now x) <-- \n");
  do {
    printf("\t\t\t\t--> Your Proposition <--\n");
    printf("\t\t\t-->");
    scanf("%d",&proposition);
    if(proposition>deviner){
      printf("\t\t\t\t--- Way Too Big! ---\n");
    }
    else if(proposition<deviner){
        printf("\t\t\t\t--- Way Too Small! ---\n");
      }
    else{
      printf("\t\t\t\t--- Yayy You Got it! ---\n");
      break;
    }
    nb_trys++;
  } while((proposition=deviner)&&(nb_trys<Max));
}


int main(){
  int proposition;
  int nb_trys;
  char Difficulty[2];
    int deviner=random();
    printf("\t                                                                                     \n");
    printf("\t                                                                                     \n");
    printf("\t                                                    )                                \n");
    sleep(1);
    printf("\t (                            *   )    )         ( /(                   )            \n");
    sleep(1);
    printf("\t )  )      (     (          ` )  /( ( /(    (    ) ())   (      )    ( /(    (   (   \n");
    sleep(1);
    printf("\t(()/(     ))    ))  (   (    ( )(_))) ())  ))   ((_)    ))     (     ) ())  ))   )(  \n");
    sleep(1);
    printf("\t /(_))_  /((_) /((_))   )   (_(_())((_)   /((_)  _((_) /((_)   )   '((_)   /((_)(()  \n");
    sleep(1);
    printf("\t(_)) __|(_))( (_)) ((_)((_) |_   _|| |(_)(_))   |  | |(_))(  _((_)) | |(_)(_))   ((_)\n");
    sleep(1);
    printf("\t  | (_ || || |/ -_)(_-<(_-<   | |  | '   / -_)  | .` || || || '   ()| '_  / -_) | '_|\n");
    sleep(1);
    printf("\t    ___|  _,_| ___|/__//__/   |_|  |_||_| ___|  |_| _|  _,_||_|_|_| |_.__/ ___| |_|  \n");
    sleep(1);
    printf("\t                                                                                     \n");
    printf("\t                                                                                     \n");
    printf("\t\t\t--> Chose The Diffuculty Level! <--\n");
    printf("\t\t--> [Hard |><| H]  [Medium |><| M]  [Easy |><| E] <--\n");
    bool x;
      do {
        scanf("%s",&Difficulty);
        if ((Difficulty[0]=='H')){
          x=true;
          Max=2;
          printf("\t\t\t\t  -->G O O D  L U C K<--\n");
          printf("\t\t\t--> You Have x%d Tries <--\n",Max);
          printf(" \n");
          break;
      }
      else if (Difficulty[0]=='M'){
        x=true;
        Max=4;
        printf("\t\t\t\t  -->G O O D  L U C K<--\n");
        printf("\t\t\t--> You Have x%d Tries <--\n",Max);
        printf(" \n");
        break;
      }
      else if (Difficulty[0]=='E'){
        x=true;
        Max=6;
        printf("\t\t\t\t  -->G O O D  L U C K<--\n");
        printf("\t\t\t--> You Have x%d Tries <--\n",Max);
        printf(" \n");
        break;
      }
      else {
        printf("\t\t--> H for HARD |><| M for MEDIUM |><| E for EASY <--\n");
          x=false;
          }
      } while(((Max=2)||(Max=4)||(Max=6))&&(x=true));
    MainGame(deviner,proposition,nb_trys,Max);
}
