# Práctica 5: El mayor de tres números

> **En esta práctica todo es tuyo:** el análisis, la receta, el código y las pruebas. Llena cada sección en la fase que se indica.

## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

en est programa va a decir de 3 numeros cual es el numero mayor, donde nos ayudaria a saber en que area se vendio mas comida etc.

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
Número 1 (double) Es el primer número que se va a comparar.
Número 2 (double) Es el segundo número que se va a comparar.
Número 3 (double) Es el tercer número que se va a comparar.

**Salida:**
1. El número mayor (double) — Es el valor más grande de los tres números.

**¿Muestro el valor del mayor o cuál de los tres fue (primero, segundo o tercero)? ¿Por qué?**
Muestro el valor del mayor porque el objetivo principal es saber cuál es la cantidad más grande. Si hay un empate, se puede mostrar el mismo valor mayor sin importar en qué posición apareció.

**¿Qué función de `utilerias.h` uso para leer los números? ¿Por qué esa y no la otra?**
Uso la función para leer números double, porque el programa debe aceptar números decimales y negativos. No usaría la función para leer enteros porque no permitiría números como 2.5.

## 3. Restricciones e invariante (Fases 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- Se deben ingresar tres números.
- Los tres datos deben ser números válidos.

**¿Hace falta validar el rango de los números (por ejemplo, rechazar el 0 o los negativos)? ¿Por qué?**
No hace falta validar un rango porque el número puede ser positivo, negativo o cero. El programa solamente necesita comparar los tres valores.

**¿Qué hace mi programa cuando dos números son iguales y son los mayores? ¿Y cuando los tres son iguales?**
Cuando dos números son iguales y son los mayores, muestra ese valor como el mayor. Cuando los tres son iguales, muestra ese mismo valor.

**¿Quién detecta cada error?** (¿qué revisa la función de `utilerias.h` y qué reviso yo?)
La función de utilerias.h revisa que el dato ingresado tenga el tipo correcto y vuelve a pedirlo si se escribe algo que no es un número. Yo reviso que los tres números sean comparados correctamente para encontrar el mayor.

**Invariante** (justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que voy a mostrar?):
Es seguro que el valor que voy a mostrar es mayor o igual que los otros dos números.

## 4. Casos resueltos a mano (Fase 1)

| Caso | Número 1 | Número 2 | Número 3 | Mayor calculado a mano |
|---|---|---|---|---|
| 1 (el mayor en primera posición) | 9 | 4 | 2 | 9 |
| 2 (el mayor en segunda posición) | 4 | 9 | 2 | 9 |
| 3 (el mayor en tercera posición) | 2 | 4 | 9 | 9 |
| 4 (con un empate) | 7 | 7 | 3 | 7 |
| 5 (con negativos) | -4 | -9 | -1 | -1 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con mis 5 casos?** Sí / No
**¿Tuve que corregirla? ¿Qué cambié?** no
**¿Cuántas versiones de mi receta escribí hasta la final?** 2
**¿Se me ocurrió otra forma de resolver el problema? ¿Cuál? ¿Por qué elegí la que usé?**
Sí. Podía comparar los tres números con varias condiciones. Elegí comparar cada número con los otros dos porque es una forma sencilla de entender y programar el problema.

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso de empate (por ejemplo 7, 7 y 3). -->

```
Programa para encontrar el numero mayor

Ingresa el primer numero: 35
Ingresa el segundo numero: 52
Ingresa el tercer numero: 6

El numero mayor es: 52
```

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de TU receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. Agrega las filas que necesites. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1. Mensaje de bienvenida | cout << "Programa para encontrar el numero mayor"; |
| 2. Pedir el primer número | double a = leerDouble("Ingresa el primer numero: "); |
| 3. Pedir el segundo número | double b = leerDouble("Ingresa el segundo numero: "); |
| 4. Pedir el tercer número | double c = leerDouble("Ingresa el tercer numero: "); |
| 5. Comparar los tres números | if (a >= b && a >= c) |
|6. Mostrar el número mayor | cout << "El numero mayor es: " << mayor; |

**¿Hubo algún paso de mi receta que me costó traducir a C++? ¿Cuál y por qué?**
Sí, me costó traducir la comparación de los tres números porque tuve que aprender a usar correctamente los operadores > o >= y &&.

## 9. Experimentos (Fase 3)

**Experimento A: ¿qué te dijo el compilador con `if (a > b > c)`? ¿Qué mostró el programa con 3, 2 y 1? ¿Por qué?**
El compilador puede aceptar la expresión, pero no funciona como una comparación matemática entre los tres números. Con 3, 2 y 1 puede dar un resultado incorrecto porque C++ evalúa primero a > b como true o false y después compara ese resultado con c.

**Experimento B: al cambiar `>=` por `>` (o al revés), ¿qué mostró el programa con 7, 7, 3 y con 5, 5, 5? ¿Por qué?**
Con >=, los empates funcionan correctamente porque permite que un número sea mayor o igual que los otros. Con >, también puede encontrar el mayor en algunos casos, pero las condiciones no manejan los empates de la misma manera.

**Experimento C (opcional): con `if (a = b)`, ¿qué te dijo el compilador? ¿Qué le pasó al valor de `a`?**
La expresión a = b no compara los valores. Asigna el valor de b a a. Por eso el valor de a cambia y la condición puede comportarse de manera diferente a lo esperado.

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mayor primero | 9, 4, 2 | 9 | 9 | si |
| Mayor en medio | 4, 9, 2 | 9 | 9 | si |
| Mayor al final | 2, 4, 9 | 9 | 9 | si |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | 7 | 7 | si |
| Empate arriba (1.º y 3.º) | 7, 3, 7 | 7 | 7 | si |
| Empate abajo | 8, 3, 3 | 8 | 8 | si |
| Los tres iguales | 5, 5, 5 | 5 | 5 | si |
| Todos negativos | -4, -1, -9 | -1 | -1 | si |
| Con cero | -2, 0, -5 | 0 | 0 | si |
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 | 2.7 | si |
| Texto | `abc` (luego 3), 1, 2 | vuelve a pedir el dato; 3 | 3 | si |
| Caso propio 1 | Mayor primero | 9,4,2 | 9 | 9 |si
| Caso propio 2 | Mayor tercero | 4,2,7 | 7 | 7 |si

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | Las condiciones podían dar problemas con los empates. | Usé >= para manejar los valores iguales. | si |
| 2 | Quería aceptar números decimales. | Usé variables de tipo double. | si |

**Reto elegido (opcional):** no elegi reto

## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| ¿Cuál es la mejor forma de comparar tres números sin repetir tantas condiciones? | Probé usando if, operadores >= y &&. |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
Aprendí a comparar tres números usando condiciones if, operadores de comparación y operadores lógicos. También aprendí que los empates deben tomarse en cuenta al hacer las condiciones.

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Primero haría más casos a mano, especialmente con empates, negativos y decimales, antes de escribir el código.

**¿Qué fue lo más difícil y cómo lo resolví?**
Lo más difícil fue hacer correctamente las comparaciones entre los tres números. Lo resolví haciendo varios ejemplos a mano y probando diferentes condiciones.

**¿Qué pregunta me quedó sin responder?**
Me quedó la duda de cuál es la forma más corta y eficiente de encontrar el mayor de tres números.

**¿Qué fue más fácil para mí: la Práctica 3 (receta propia con un paso de ejemplo), la 4 (receta ajena) o esta (todo desde cero)? ¿Por qué?**
La Práctica 3 fue más fácil porque ya tenía un ejemplo que podía seguir. Esta práctica fue más difícil porque tuve que pensar en el problema desde cero.

**¿Pensé en los empates antes de programar o los descubrí al probar?**
Los pensé al probar los diferentes casos, porque al principio estaba concentrado solamente en encontrar cuál número era mayor.

## 14. Lista de verificación antes de entregar (Fase 5)

- [listo] Llené las secciones 1 a 13 (no quedan `_____`)
- [listo] Escribí mi receta completa en `RECETA.md` antes de programar
- [listo] Cada bloque de `main.cpp` tiene su comentario `// Paso N`, de acuerdo con mi receta
- [listo] Mi programa compila sin advertencias
- [listo] Probé todos los casos de la tabla, incluidos los empates
- [listo] Hice los Experimentos A y B y dejé el código correcto al terminar
- [listo] No modifiqué `utilerias.h`
- [listo] Hice al menos 3 commits con mensajes claros
- [listo] Hice `git push` y verifiqué mi fork en GitHub
- [listo] Mi fork se llama `ulsa_ime_1_dp_numero_mayor` y el código está en `main.cpp`
- [listo] Entregué el enlace de mi fork en Classroom