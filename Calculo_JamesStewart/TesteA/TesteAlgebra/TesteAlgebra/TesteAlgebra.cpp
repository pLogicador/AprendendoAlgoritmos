/*

Revisão de álgebra:



// ------------------------------------------------------------------
POTENCIAÇÃO
1. Avalie cada expressão sem usar uma calculadora
   a) (-3)^4              b)-3^4              c) 3^-4
   d) 5^23/5^21           e)(2/3)^-2          f) 16^-3/4

       Resolução passo a passo da letra a:

       DICA: (base)^expoente
       - Se você tem uma potência de base negativa e um expoente par(positivo) o resultado sempre será positivo.
         Em outro caso, se o expoente for ímpar e a base negativa o resultado também será negativo.

       Ra)
         1. (-3)^4  =  (-3) * (-3) * (-3) * (-3)

         2.             -   *  -   *  -   *  -   = +(Resultado Positivo)

         3.             3   *  3   *  3   *  3   = 81
         R. 81;

            

      Resolução passo a passo da letra b:
      Rb)
        1. -3^4  =  -( 3 * 3  3 * 3 ) = -81

        R. -81;

      Resolução passo a passo da letra c:

      DICA: Para uma potência com um expoente negativo
      Fórmula: [ a^-n  =  1/a^n ]
    
      Rc)
        1. 3^-4   =  1/3^4

        2. 1/3^4  =  1/81         (pois 3^4 = 81)

        R. 1/81


      Resolução passo a passo da letra d:

      DICA: Para Divisão de potências de mesma base
      Fórmula: [ a^n/a^m  =  a^n-m ]

      Rd)
        1. 5^23/5^21 = 5^2

        2. 5^2 = 25

        R. 25;


       Resolução passo a passo da letra e:

       DICA1: Inverte a base e troca o sinal do expoente
       fórumla: [ (a/b)^-n  =  (b/a)^n ]

       DICA2: A potência do cociente é o cociente das potências
       fórmula: [ (a/b)^n  =  a^n/b^n ]

       Re)
         1. (2/3)^-2  =  (3/2)^2

         2. (3/2)^2   =  3^2/2^2

         3. 3^2/2^2   =  9/4        (pois 3^2 = 9 e 2^2 = 4)

         R. 9/4;


       Resolução passo a passo da letra f:

       DICA1: fatoração
           16 | 2
           8  | 2
           4  | 2
           2  | 2
           1    = 2^4

       DICA2: Potência de Potência
       fórmula: [  (a^n)^m  =  a^n*m  ]

       Rf)
         1. 16^-3/4     =   (2^4)^-3/4   (pois 16 = 2^4)

         2. 2^4*(-3/4)  =   2^-3         (pois simplificou 4 por 4)

         3. 2^-3        =   1/2^3

         4. 1/2^3       =   1/8          (pois 2^3 = 8)

         R. 1/8
         
         
 // ------------------------------------------------------------------        
 2. Simplifique cada expressão. Escreva sua resposta sem expoentes negativos. 
     a) √200 - √32 
     b) (3a^3 * b^3) * (4ab^2)^2
     c) ( (3x^(3/2) * y^3)/(x^2 * y^(-1/2)) )^(-2)
         
 
        Resolução passo a passo da letra a:

        DICA1: Fatoração
        200 | 2
        100 | 2
        50  | 2
        25  | 5
        5   | 5
        1      = 2^2 * 2 * 5^2 (pois é uma raíz quadrada)

        32 | 2
        16 | 2
        8  | 2
        4  | 2
        2  | 2
        1     =  2^2 * 2^2 * 2 

        DICA2: O que está elevado ao quadrado dentro da raíz quadrada deve sair da raíz (apenas se houver
        produtos dentro da própria raíz)

        Ra)
          1. √200 - √32  =  √2^2*2*5^2  -  √2^2*2^2*2

          2. √2^2*2*5^2  -  √2^2*2^2*2  =  2*5√2  -  2*2√2

          3. 2*5√2  -  2*2√2  =  10√2  - 4√2

          4. 10√2  - 4√2  = 6√2   (pois 10x - 4x = 6x)


        Resolução passo a passo da letra b:

        DICA1: A potência do produto é o produto das potências mas a potência da soma não é soma das potências
        fórmula: [ (a*b)^n  =  a^n * b^n  ]

        DICA2: Multiplicação de potências com mesma base(repete a base e soma os expoentes)

        Rb)
          1. (3a^3 * b^3) * (4ab^2)^2               =  3a^3 * b^3  *  4^2 * a^2 * (b^2)^2

          2. 3a^3 * b^3  *  4^2 * a^2 * (b^2)^2     =  3 * a^5 * b^3   *   16 * b^4     (pois a^3 * a^2 = a^3+2; 4^4 = 16 ; (b^2)^2 = b^2*2)

          3. 3 * a^5 * b^3   *   16 * b^4           =  48a^5 * b^7   (pois 3*16 = 48; b^3 * b^4 = b^3+4)

          R. 48a^5 * b^7  
 
 

        Resolução passo a passo da letra c:

        DICA: A potência do produto é o produto das potências
        fórmula: [ (a*b)^n = a^n * b^n ]

        Rc)
          1. ((3x^3/2 * y^3)/ (x^2 * y^-1/2))^-2       =  ( 3 * x^3/2 - 2  * y^3 - (-1/2) )^-2

          2. ( 3 * x^3/2 - 2  * y^3 - (-1/2) )^-2   =  ( 3x^-1/2 * y^3 + 1/2 )^-2          (pois no x o exp 3/2 - 2 = 2*(-2) = -4 + 3 = -1)

          3. (3x^-1/2 * y^3 + 1/2)^2                =  ( 3x^-1/2 * y^7/2 )^-2              (pois no y o exp 3 + 1/2 = 2*3=6+1 = 7)

          4. ( 3x^-1/2 * y^7/2 )^-2                 =  3^-2 * (x^-1/2)^-2 * (y^7/2 )^-2  

          5. 3^-2 * (x^-1/2)^-2 * (y^7/2 )^-2       =  3^-2 * x * y^-7                     (pois no x o exp -1/2 * -2 = 1; pois no y o exp 7/2 * -2 = -7  )

          6. 3^-2 * x * y^-7                        =  1/3^2 * x * 1/3^7                   (pois invertemos a base)

          7. 1/3^2 * x * 1/3^7                      =  x/9y^7                              (pois 1 * x * 1 = x)


// ------------------------------------------------------------------
Distributiva
3. Expanda e simplifique.
    a) 3(x + 6) + 4(2x - 5)                  b) (x + 3)(4x - 5)
    c) (√a + √b)(√a - √b)                    d) (2x + 3)^2
    e) (x + 2)^3



    Resolução passo a passo da letra a:

    Ra)
      1. 3(x + 6) + 4(2x - 5)       =       3x + 18 + 8x - 20          (pois 3*x= 3x; 3*6= 18; 4*2x= 8x; 4*5= 20 )

      2. 3x + 18 + 8x - 20          =       11x - 2                    (pois 3x+8x = 11x; 18-20= -2  )

      R. 11x - 2;



    Resolução passo a passo da letra b:

    Rb)
      1. (x + 3)(4x - 5)            =       (4x^2) - 5x + 12x - 15          (pois  x*4x= (4x^2); x*(-5)= -5x; 3*4x= 12x; 3*(-5)= -15)

      2. (4x^2) - 5x + 12x - 15     =       (4x^2) + 7x - 15                (pois -5x + 12x= 7x;) 

      R. (4x^2) + 7x - 15;



    Resolução passo a passo da letra c: 
    
    DICA: PRODUTO NOTÁVEL: para quando temos um produto de uma soma por uma diferença
    fórumla: [ (x + y)(x - y) = x^2 - y^2  ]

    Rc)
      1. (√a + √b)(√a - √b)         =   a - b                  (pois a (√a^2) - (√b^2) = a )
      R. a-b;



    Resolução passo a passo da letra d:

    DICA: PRODUTO NOTÁVEL (QUADRADO DA SOMA)
    fórmula: [ (a + b)^2  = (a^2) + 2ab + b^2  ]        OBS: O quadrado da soma não é a soma dos quadrados. 
                                                             Ou seja, (a + b)^2  !=  (a^2) + (b^2). Porém o
                                                             quadrado do produto é o produto dos quadrados.
                                                             Ou seja, (a * b)^2  =  (a^2) * (b^2).


    Rd)
      1. (2x + 3)^2                 =       ((2x)^2) + 2*2x*3 + 3^2

      2. (2x^2) + 2*2*3 + 3^2       =       4x + 12x + 9

      R. 4x + 12x + 9;



    Resolução passo a passo da letra e:

    DICA: PRODUTO NOTÁVEL

    Re)
      1. (x + 2)^3                                   =       (x^3) + (3x^2) * 2 + 3x * (2^2) + 2^3

      2. (x^3) + (3x^2) * 2 + 3x * (2^2) + 2^3       =       (x^3) + (6x^2) * 12x + 8

      R. (x^3) + (6x^2) * 12x + 8;


// ------------------------------------------------------------------
FATORAÇÃO(transformando em produto)
4. Fatore cada expressão.
a) (4x^2) - 25                          b) (2x^2) + 5x - 12
c) (x^3) - (3x^2) - 4x + 12             d) (x^4) + 27x
e) (3x^3/2) - (9x^1/2) + 6x^(-1/2)      f) (x^3)y - 4xy



    
    Resolução passo a passo da letra a:

    DICA: PRODUTO NOTÁVEL 
    fórmula: [ (a^2) - (b^2) = (a+b)*(a-b) ]

    Ra)
      1. (4x^2) - 25        =    (2x^2) - 5^2

      2. (2x^2) - 5^2       =    (2x + 5)(2x - 5) 

      R. (2x + 5)(2x - 5);



    Resolução passo a passo da letra b:

    Rb)
      1. (2x^2) + 5x - 12           =       (2x^2) + 8x - 3x - 12

      2. (2x^2) + 8x - 3x - 12      =       2x (x + 4) -3(x + 4)         (pois colocamos 2x (da primeira parcela) em evidência e calcula:
                                                                         (2x^2) / 2x= x; 
                                                                             8x / 2x= 4; Agora da segunda parcela:
                                                                            -3x / -3= x; 
                                                                            -3x / -12= 4                                                )

      3. 2x (x + 4) -3(x + 4)       = (x + 4)(2x - 3 )                  (pois colocamos (x+4) em evidência e divide a primeira parcela toda por x+4= 2x;
                                                                        logo depois dividimos a segunda parcela por x+4= -3                            )

      R. (x + 4)(2x - 3 );




    Resolução passo a passo da letra c:

    DICA: PRODUTO NOTÁVEL
    fórmula: [ (a^2) - (b^2) = (a+b)*(a-b) ]

    Rc)
      1. (x^3) - (3x^2) - 4x + 12       =       x^(2)(x - 3) -4(x - 3)            (pois colocamos o (x^2) em evidência pois é incomum e
                                                                                  calculamos: (x^3) / (x^2)=x; 
                                                                                              (3x^2) / (x^2)= 3; logo depois, 
                                                                                  para obtermos outra parcela colocamos o -4 em evidência e
                                                                                  calculamos: -4x / -4= x; 
                                                                                               12 / -4= -3;                               )

      2. x^(2)(x - 3) -4(x - 3)         =  (x - 3)( (x^2) - 4 )                   (pois colocamos (x-3) em evidência e calculamos a primeira e segunda parcela por (x-3)
                                                                                   o que resulta= ( (x^2) - 4 );                                                       )

      3. (x - 3)( (x^2) - 4 )           = (x - 3)(x + 2)(x - 2)                 (pois na segunda parcela(( (x^2) - 4 ) ) temos 
                                                                                (x^2) - (2^2) e seguimos a dica para transformamos 
                                                                                toda a equação                                  )

      R. (x - 3)(x + 2)(x - 2)



      Resolução passo a passo da letra d:

      DICA: PRODUTO NOTÁVEL
      fórmula: [  (a^3) + (b^3)  = (a + b)( (a^2) - ab + b^2 )  ]


      Rd)
        1. (x^4) + 27x              = x( (x^3) + 3^3 )                  (pois colocamos o x em evidência e calculamos: 
                                                                        (x^4) / x= x^3;
                                                                          27x / x= 27;
                                                                           27 == 3^3                                 )

        2.  x( (x^3) + 3^3 )        = x(x + 3) ( (x^2) - 3x + 9  )

        R. x(x + 3) ( (x^2) - 3x + 9  );





      Resolução passo a passo da letra e:


      Re)
        1. (3x^3/2) - (9x^1/2) + 6x^(-1/2)      = (3x^1/2) ( (x^2) - 3x + 2 )              (pois colocamos (3x^3/2) em evidência e calculamos: 
                                                                                           (3x^3/2) / (3x^1/2) = x^(3/2 + 1/2) = 4^4/2 = x^2;
                                                                                           logo depois calculamos: -(9x^1/2) / 3x^(-1/2) = -3x^1;
                                                                                           logo depois calculamos: 6x^(-1/2) / 3x^(-1/2) = 2; )

        2. (3x^1/2) ( (x^2) - 3x + 2 )          = (3x^1/2) ( (x^2) - x - 2x + 2 )           

        3. (3x^1/2) ( (x^2) - x - 2x + 2 )      = (3x^1/2) [ x(x - 1) - 2 (x - 1) ]        (pois colocamos o x em evidência e calculamos:
                                                                                           (x^2) / x= x; 
                                                                                           x / x= -1
                                                                                           ... e assim por diante                       )

        4. (3x^1/2) (x - 1) (x - 2)                                                         (pois colocamos x -1 em evidência e calculamos:
                                                                                            a primeira parcela dividido por x - 1= x;
                                                                                            a segunda parcela dividido por x - 1= 2       )

        R. (3x^1/2) (x - 1) (x - 2);




      Resolução passo a passo da letra f:

      DICA: PRODUTO NOTÁVEL
      fórmula: [ (a^2) - (b^2) = (a+b)*(a-b) ]


      Rf)
        1. (x^3)y - 4xy         =  xy ((x^2) - 4)                                     (pois colocamos xy em evidência e calculamos:
                                                                                      (x^3)y / xy= x^2;
                                                                                         4xy / xy= 4                              )

        2. xy ((x^2) - 4)       = xy ((x^2) - 2^2)

        3. xy ((x^2) - 2^2)     = xy (x + 2)(x - 2)                                 (pois utiliza a regra do produto notável)


        R. xy (x + 2)(x - 2);



// ------------------------------------------------------------------       CÁLCULO DE LIMITES
5. Simplifique as expressões racionais.
a) ((x^2) + 3x + 2 ) / ((x^2) - x - 2)               b) ( ((2x^2) - x - 1 ) / ((x^2) - 9) ) * ( x + 3) / (2x + 1 )

c) ( (x^2) / (x^2) - 4 ) - ((x + 1) / x + 2 )       d) (y/x - x/y) / (1/y - 1/x)


      


      Resolução passo a passo da letra a:

      Dica1:
      fórmula: [ (ax^2) + bx + c = 0   =    a(x - x1) (x - x2) = 0 ]

      DICA2: utilize a fórmula de Baskhara:  [  x= ( -b(+/-) √(b^2) - 4ac ) / 2a  ] ou siga a dica 3(conforme os requisitos)

      DICA3: Atalho para achar x1 e x2: Apenas se na equação do 2Grau o parâmetra a = 1;
             Soma    = A soma tem que resultar no valor de b(com o sinal invertido)
             Produto = O produto tem que resultar no valor exato de c


      Ra)
        1.  ((x^2) + 3x + 2 ) / ((x^2) - x - 2)             =  Parte superior ->           (x^2) + 3x + 2  = 0 
                                                               Parte superior fatorada ->  1(x+1)(x+2)     = 0     

        2.                                                   = Parte inferior ->           (x^2) - x - 2  = 0  
                                                             = Parte inferior fatorada ->  (x - 2)(x + 1) = 0

        3. (1(x+1)(x+2)) / ((x - 2)(x + 1))

        4. (1(x+1)(x+2)) / ((x - 2)(x + 1))                 = (x + 2) / (x - 2)

        R. (x + 2) / (x - 2);




      Resolução passo a passo da letra b:

      DICA:
      fórmula de Baskhara: [  x= ( -b(+/-) √(b^2) - 4ac ) / 2a  ]

      DICA: PRODUTO NOTÁVEL
      fórumla: (a^2) - (b^2) = (a + b)(a - b)

      Rb)
        1. ( ((2x^2) - x - 1 ) / ((x^2) - 9) ) * ( x + 3) / (2x + 1 )           = Parte superior esquerdo ->         (2x^2) - x - 1 = 0
                                                                                    
        2.                                                                      = fatorando ->   x = ( 1 (+/-) √1 + 8 ) / 4                                                                                             
                                                                                                 x = ( 1 (+/-) 3 ) / 4 
                                                                                                 x1 = 4/4 = 1;
                                                                                                 x2 = -2/4 = -1/2; 

        3.                                                                      =  Parte superior esquerdo fatorado -> 2(x - 1)(x + 1/2) = 0             

        4. ( ((2x^2) - x - 1 ) / ((x^2) - 9) ) * ( x + 3) / (2x + 1 )           = ( (2(x - 1)(x + 1/2)) / (x + 3)(x - 3) ) *  x+3 /2x+1

        5. ( (2(x - 1)(x + 1/2)) / (x + 3)(x - 3) ) *  x+3 /2x+1                = (x - 1)(2x + 1) / (x - 3) (2x + 1)

        6. (x - 1)(2x + 1) / (x - 3) (2x + 1)                                   = x - 1/x - 3 

        R. x - 1/x - 3;




        Resolução passo a passo da letra c:

        Dica: Necessário tirar o mínimo e logo depois dividir pelo denominador e multiplica pelo numerador e logo depois a distributiva


        Rc)
          1. ( (x^2) / (x^2) - 4 ) - ((x + 1) / x + 2 )                 =          ((x^2) / (x + 2)(x - 2)) - x + 1/x + 2

          2. ((x^2) / (x + 2)(x - 2)) - x + 1/x + 2                     =          (x^2) - (x - 2)(x + 1) / (x+2) * (x-2)


          3. (x^2) - (x - 2)(x + 1) / (x+2) * (x-2)                     =          (x^2) - (x^2) - x + 2x + 2 / (x+2) * (x-2)


          4. (x^2) - (x^2) - x + 2x + 2 / (x+2) * (x-2)                 =          x + 2 / (x+2) * (x-2)        =       1 / (x-2) 

          R; 1 / (x-2);


      Resolução passo a passo da letra d:

      DICA: Em uma divisão de 2 frações repetimos a primeira fração e multiplicamos pelo inverso da segunda expressão

      Rc)
        1. (y/x - x/y) / (1/y - 1/x)                            =                       ( (y^2) - (x^2)/ xy ) /  ( x-y /xy ) 

        2. ( (y^2) - (x^2)/ xy ) /  ( x-y /xy )                 =                   (y^2) - (x^2) / x-y     = ((y+x) * (y-x)) / x-y

        3. (y^2) - (x^2) / x-y     = ((y+x) * (y-x)) / x-y      =                   -(y + x)

        R. -(y + x);







// ------------------------------------------------------------------       CÁLCULO DE LIMITES
 6. Racionalize a expressão e simplifique.
 a) √10 / √5 - 2                    b) √4+h-2 / h




       (racionalizando o denominador)
       Resolução passo a passo da letra a:

       DICA1: PRODUTO NOTÁVEL
       fórmula: (a+b)(a-b) = (a^2) + (b^2)

       DICA2: DISTRIBUTIVA (POR RAÍZ)

       Ra)
         1. √10 / √5 - 2                        =    ( √10 / √5-2 ) * (√5+2 / √5+2)

         2. ( √10 / √5-2 ) * (√5+2 / √5+2)      =    (√50 + 2√10 ) / ( 5-4 )

         3. (√50 + 2√10) / (5-4)                =    5√2 + 2√10

         R. 5√2 + 2√10;



       (racionalizando o numerador)
       Resolução passo a passo da letra b:


       Rb)
         1. √4+h-2 / h                                          =          ( √4+h - 2 / h ) * ( √4+h + 2 / √4+h + 2  )   

                                                                    (observe que agora temos um produto de uma soma por uma diferença). 
                                                                    

         2. ( √4+h - 2 / h ) * ( √4+h + 2 / √4+h + 2  )         =           4+h - 4 / h( √4+h + 2 ) 

         2. 4+h - 4 / h( √4+h + 2 )                             =           h / h(√4+h + 2)     =  simplificando->  1 / √4+h + 2

         R. 1 / √4+h + 2;






// ------------------------------------------------------------------
7. Reescreva, completando o quadrado.
a) (x^2) + x + 1            b) (2x^2) - 12x + 11





       Resolução passo a passo da letra a:

       DICA: O QUADRADO DA SOMA
       fórmula: [   (x+a)^2 = (x^2) + 2ax + (a^2)   ]

       O valor de a é o número que está multiplicando o 'x'(o dobro de a)
       Ao achar o valor divida por 2 para encontrar o dobro

       Ra)
         1. (x^2) + x + 1                   =           (x^2) + x + (1/4 - 1/4) + 1

         2. (x^2) + x + (1/4 - 1/4) + 1     =           ((x + 1/2)^2) + 3/4

         R. ((x + 1/2)^2) + 3/4;




       Resolução passo a passo da letra b:


       Rb)
         1. (2x^2) - 12x + 11               =               2 ( (x^2) - 6x ) + 11 

         2. 2 ( (x^2) -6x ) + 11            =               2 ((x^2) - 6x + 9 - 9) + 11 

         3. 2 ((x^2) - 6x + 9 - 9) + 11     =               2[ (((x-3)^2 ) - 9) +  11 ]

         4. 2[ (((x-3)^2 ) - 9) +  11 ]     =               (2(x-3)^2) -18 + 11       (pois foi feito a distributiva: 
                                                                                    2 * (x-3)^2= (x-3)^2;
                                                                                    2*(-9)= -18                   )

        5. (2(x-3)^2) -18 + 11                =               (2(x-3)^2) - 7 

        R. (2(x-3)^2) - 7;





// ------------------------------------------------------------------
8. Resolva a equação. (Encontre apenas as soluções reais.)
a) x + 5 = 14 - (1/2)x                       b) 2x /x + 1 = 2x - 1 / x

c) x^(2) - x - 12 = 0                        d) 2x^(2) + 4x + 1 = 0

e) x^(4) - 3x^(2) + 2 = 0                    f) 3 | x - 4 | = 10

g) 2x(4 - x)^(-1/2) - 3√4 - x = 0                      





       Resolução passo a passo da letra a:

       DICA: Ao tirar o mínimo de partes da equação ela ainda se mantém na equação, caso tire o mínimo de toda a equação então você pode cortá-la

       Ra)
         1. x + 5 = 14 - (1/2)x             =           x + 5 = 14 - x/2

         2. x + 5 = 14 - x/2                =          2x + 10 = 28 - x   (pois tira o mínimo de 2 dividindo - o em todos os denominadores da equação multiplicando com o numerador)

         3.  2x + 10 = 28 - x               =           2x + x = 28 - 10  (pois separa cada membro em seu devido lugar)

         4. 2x + x = 28 - 10                =           3x = 18

         5. 3x = 18                         =           x = 18/3      =      6

         R. s = { 6 };




       Resolução passo a passo da letra b:

       DICA: Apenas em uma igualdade de duas frações
       fórmula: [  a/b = c/d <--> ad = bc  ]

       Rb)
         1. 2x /x+1 = 2x-1 / x              =        2x^(2)  =  (x+1) (2x-1)                (pois 2x * x= 2x^2; )        

         2. 2x^(2)  =  (x+1) (2x-1)         =        2x^(2)  =  2x^(2) - x + 2x - 1         (pois foi realizado a distributiva)

         3. 2x^(2)  =  2x^(2) - x + 2x - 1  =       0 = x - 1 

         4. 0 = x - 1                       =       1 = x   || x = 1

         R. s = { 1 };






       Resolução passo a passo da letra c:

       DICA: Para equações de 2Grau utilize a fórmula de baskhara
       fórmula: [  x= ( -b(+/-) √(b^2) - 4ac ) / 2a  ]

       Rc)
         1. x^(2) - x - 12 = 0              =    x = (1 (+/-) 7) / 2   (após a utilização da fórmula)       

         2. x = (1 (+/-) 7) / 2             =    x1 = 4 && x2 = -3 

         R. S = {-3, 4};




       Resolução passo a passo da letra d:

       DICA: Aplica-se a fórmula de baskhara
       DICA: fatore números que não possuem um resultado exato para a raíz quadrada

       Rd)
         1. 2x^(2) + 4x + 1 = 0             =       x = ( - 4 (+/-) √8 ) / 4      

         2. x = ( - 4 (+/-) √8 ) / 4        =       x = ( - 4 (+/-) 2√2 ) / 4       (pois a raíz do 8 foi fatorada em 2√2 )

         3. x = ( - 4 (+/-) 2√2 ) / 4       =       x = ( -4/4 ) +/- ( 2√2/4 )

         4. x = ( -4/4 ) +/- ( 2√2/4 )      =       x = -1 (+/-) 1/2(√2)

         R.  x = -1 (+/-) 1/2(√2)





       Resolução passo a passo da letra e:

       DICA1: ax^(4) + bx^(2) + c = 0  == Equação bi quadrada
       Se [x^(2) = y] = x^(4) = (x^2)^(2) = y^2

       DICA2: após tranformar em uma equação do 2Grau utilize a fórmula de baskhara ou 
       siga o método da soma e produto (apenas no requisito de a = 1)

       Re)
         1. x^(4) - 3x^(2) + 2 = 0          =       y^(2) - 3y + 2 = 0

         2. y^(2) - 3y + 2 = 0              =       Determinado os valores de y: 
                                                    y = 1;              y = 2 


                                                    Determinado os valores de x:
                                                    x^(2) = 1             x^(2) = 2
                                                    x = +/- √1            x = +/- √2
                                                    x = +/- 1            

        R. S = {(+/-) 1, (+/-) 2};



       Resolução passo a passo da letra f:

       DICA: Divisão de módulo
       fórmula: |x| = { x, se x >= 0
                       -x, se x < 0  }

       Conclusão: |x| = a, a >= 0 -> x = +/- a
                                            


       Rf)
         1. 3 | x - 4 | = 10                =       |x-4| = 10/3

         2. |x-4| = 10/3                    =       x-4 = 10/3   || x-4 = -10/3

         3. x-4 = 10/3   || x-4 = -10/3     =       x = (10/3) + 4   ==  x = 22/3          

         4. x-4 = 10/3   || x-4 = -10/3     =       x = (-10/3) + 4  ==  x = 2/3

         R. x = 22/3 || x = 2/3;



       Resolução passo a passo da letra g:

       DICA: Ao encontrar um expoente com expoente negativo para torná-lo positivo deve-se inverter a base e trocar o sinal do expoente.
       fórmula: [ a^(-n) = 1/a^n  ]

       DICA: Ao nos depararmos com uma potência que possui um expoente em fração isso significa que equivale a uma raíz cujo índice é o denominador da fração
       fórmula: [ a^(p/q) = (q)^√a^(p) ]

       Rg)
         1. 2x(4 - x)^(-1/2) - 3√4 - x = 0              =       2x * ( 1 / (4-x)^(1/2)) - 3√4 - x = 0

         2. 2x * ( 1 / (4-x)^(1/2)) - 3√4 - x = 0       =       (2x / √4-x) - 3√4-x = 0


         3. Convencionando: √4-x == y   ->  4 - x  = y^2  ->  -x = y^(2) - 4  ->  x = 4 - y^2       (Agora substitua a nova convenção na expressão)

         Retorne ao cálculo
         4. (2x / √4-x) - 3√4-x = 0                     =       ( 2(4 - y^2) / y ) - 3y = 0

         5. (2(4 - y^2) / y) - 3y = 0                   =       ( 2(4 - y^2) - 3y^(2) ) = 0         (pois foi tirado o mínimo)

         6. ( 2(4 - y^2) - 3y^(2) ) = 0                 =       8 - 2y^(2) - 3y^(2) = 0             (pois multiplicamos o 2 por 4, por y^2)

         7. 8 - 2y^(2) - 3y^(2) = 0                     =       8 - 5y^(2) = 0                      (pois isolamos o y^2)

         8. 8 - 5y^(2) = 0                              =       5y^2 = 8  ->        y^2 = 8/5       ->      y = +/- √8/5

         9. y = +/- √8/5                                =       √4-x = √8/5

         10. √4-x = √8/5    -> Elevando ao quadrado obtemos:     4-x = 8/5   ->     20 - 5x = 8     ->      -5x = -12       ->      x = 12/5

         R. x = 12/5;






// ------------------------------------------------------------------
Inequação Simultânia
9. Resolva cada desigualdade. Escreva sua resposta usando a notação de intervalos
(a) -4 < 5 - 3x <= 17           (b) x^(2) < 2x + 8

(c) x(x - 1)(x + 2) > 0         (d) |x- 4| < 3

(e) ( 2x-3 / x+1 ) <= 1






       Resolução passo a passo da letra a:


       DICA: Quando multiplicamos uma desigualdade por um número negativo devemos trocar o sinal
       a < b =>{ ac < bc, se c > 0
                 ac > bc, se c < 0 }


       Ra)
         1. -4 < 5 - 3x <= 17                           =           -5 - 4 < -5 + 5 - 3x <= -5 + 17

         2. -5 - 4 < -5 + 5 - 3x <= -5 + 17             =          -9 < -3x <= 12

         3. -9 < -3x <= 12                              =          -1/3 * (-9) > -1/3 * (-3x) >= -1/3 * 12                    (pois multiplicamos por -1/3)

         4. -1/3 * (-9) > -1/3 * (-3x) >= -1/3 * 12     =           3 > x >= -4

         5. 3 > x >= -4                                 =           escrevendo na notação de intervalo => [-4, 3[ 

         R. [-4, 3[     ou      [-4, 3);






       Resolução passo a passo da letra b:

       DICA: Para resolvermos uma inequação do 2Grau devemos considerar o primeiro membro como uma f(x) e em seguida fazemos o estudo do sinal da função
       Como estudar o sinal da função ? 
       1Providencia: calcular as raízes da função
         
       Rb)
         1. x^(2) < 2x + 8                          =            x^(2) - 2x - 8 < 0

         2. x^(2) - 2x - 8 < 0                      =           x1= -2    &&    x2= 4

         R. ]-2, 4[ ou (-2,4);










       Resolução passo a passo da letra c: Inequação Produto

       DICA: É considerado uma Inequação Produto quando no primeiro membro da inequação temos produto de funções e no segundo membro o zero
       Primeiro você precisa estudar o sinal de cada função separadamente
       Segundo você precisa fazer o quadro de sinais


       Rc)
         1. x(x - 1)(x + 2) > 0                     =               (-2,0) U (1, + infinito )       


         R. (-2,0) U (1, + infinito );










       Resolução passo a passo da letra d: Inequação modular


       DICA: Inequação modular
       fórumula: |x| < a ={ a >= 0    <=>   -a < x < a }

        Rd)
         1. |x- 4| < 3              =           -3 < x-4 < 3       

         2. -3 < x-4 < 3            =           4-3 < 4 + x-4 < 4+3

         3. 4-3 < 4 + x-4 < 4+3     =           1 < x < 7

         R. (1,7) ou ]1,7[;








       Resolução passo a passo da letra e: Não é Inequação quociente

       DICA: É uma Inequação quociente tal que no peimeiro membro temos uma fração (com o numerador composto por produto de funções e o denominador também) e no
       segundo membro temos o zero. O que fazer ? Estudar o sinal de cada função separadamente; Fazer o quadro de sinais, dispondo os sinais de cada função




        Re)
          1. ( 2x-3 / x+1 ) <= 1            =           ( 2x-3 / x+1 ) -  1 <= 0         (pois estamos tornando em uma inequação quociente)

          2. ( 2x-3 / x+1 ) -  1 <= 0       =           (2x-3 - x - 1 )/ (x+1)  <= 0  

          3. (2x-3 - x - 1 )/ (x+1)  <= 0   =           (x-4)/(x+1) <= 0                (aqui já temos uma inequação quociente)

          4. (x-4)/(x+1) <= 0               =           (-1, 4]                         (chegamos a essa resposta após o estudo e o equadro de sinais)

          R. (-1, 4] ou ]-1,4];         (Detalhe: o -1 não pode fzer parte da solução pois o denominador é zerado se x = -1)










// ------------------------------------------------------------------
10. Diga se cada equação é verdadeira ou falsa.
a) ( p + q )^(2) = p^(2) + q^(2)                b) √ab = √a √b

c) √a^(2) + b^(2) = a + b                       d) (1+TC)/C = 1 + T

e) 1/x-y = 1/x - 1/y                            f) (1/x)/(a/x - b/x) = 1/a-b




        Resolução passo a passo da letra a:

        Ra) Falso, pois o quadrado da soma não é a soma dos quadrados mas o quadrado do produto é o produto dos quadrados.
        Ou seja, ( p + q )^(2) = p^(2) + 2pq + q^2





        Resolução passo a passo da letra b:

        Rb) Verdadeiro. A raíz do produto(positivo) é o produto das raízes mas a raíz da soma não é a soma das raízes






       Resolução passo a passo da letra c:

        Rc) Falso, pois seria possível apenas no caso de produto. Ou seja, √a^(2) * b^(2) = a * b 






       Resolução passo a passo da letra d:

        Rd) Falso. Seria possível apenas no caso de produto. 







       Resolução passo a passo da letra e:

        Re) Falso. 






       Resolução passo a passo da letra f:

        Rf) Verdadeiro. 

 */

#include <iostream>

using namespace std;



int main()
{
    cout << "Teste de álgebra \n";
}
