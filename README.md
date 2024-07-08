# control-de-velocidades
Ejercicio programa con C
Se solicita desarrollar un programa para el control de velocidades de
camiones que transportan combustible.
Como datos de un programa de simulación, se tienen las tomas de
velocidades de los camiones, cada una hora. El operador carga a mano
dichas tomas, que son las siguientes:
Campo 1: hora numérico.
Campo 2: minutos numérico.
Campo 3: velocidad en kmxhora numérico.
Campo 4: código de camión numérico, de 1 a 3.
La flota está compuesta por 3 camiones.
Hacer un menú, con las siguientes opciones:
 1 – Ingresar y cargar vectores con datos de simulación.
 2 – Emitir reportes.
 3 – Salir.
1 – Ingresar y guardar datos de simulación:
Cada vez que el operador seleccione esta opción, el programa deberá
recibir por teclado los datos de una toma de velocidad. Llamar a una
función, cuyos parámetros sean los datos de una toma de velocidad y cuatro
vectores, y cargue esos datos en los vectores respectivamente, utilizando
aritmética de punteros.
2 – Emitir reportes:
Cuando el operador seleccione esta opción al finalizar el día, llamar a una
función, a la que se le pasen como parámetros los cuatro vectores por
referencia cargados en la opción 1, que informe por pantalla los datos del
camión 2 y la máxima velocidad registrada del mismo. Para recorrer los
vectores usar aritmética de punteros.
Evitar el uso de variables globales. Estimar el tamaño de los vectores en 50
posiciones.
