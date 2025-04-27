# 🧠 Ejercicio 3 — Encontrar el número que más se repite en un array

Este programa encuentra el numero que más veces se repite en un arreglo de numeros enteros, sin ordenar ni usar librerias avanzadas.


## 🧪 Requisitos del programa
- Permitir ingresar el tamaño del arreglo `n` (1 ≤ n ≤ 100).
- Validar la entrada numérica y que `n` esté en el rangon.
- Leer `n` números enteros del usuario.
- Calcular el número que más veces se repite usando complejidad `O(n²)`.
- No usar librerías avanzadas (solo arrays y bucles).
- Imprimir el número más frecuente y su cantidad de apariciones.

## 📥 Entrada esperada

- Un número entero `n ≤ 100`, que representa el tamaño del arreglo.
- Luego, `n` números enteros que se almacenarán en un arreglo.
```yaml
Ingrese el tamanio del arreglo: 7
Ingrese los 7 numeros:
3
9
5
7
9
3
9

```
## 📤 Salida esperada

```yaml
El numero que mas veces se repite es: 9
Numero de apariciones: 3
```

- Si se ingresa un tamaño del arreglo fuera del rango.
```yaml
Fuera del rango (1 - 100)
Ingrese el tamanio del arreglo
```
- Si se ingresa un valor distinto a un número entero.
```yaml
Entrada invalida. Intenta de nuevo
```


<!-- ## 🧮 Ejemplo de ejecución
```bash


``` -->

## 🔍 ¿Cómo encontrar el número que más se repite en un array?
- Tomas el primer número y cuentas cuántas veces aparece en todo el arreglo.
- Guardas esa información (valor y conteo).
- Tomas el segundo número, repites el conteo y comparas con el anterior.
- Siempre mantienes “el ganador” (el que más veces apareció) y sigues hasta el final.
- El ganador al término de todas las comparaciones es el número más frecuente.


## 🎓 Conclusión

Este ejercicio refuerza el manejo de arrays, bucles anidados y validaciones de entrada en C++. Aprendimos a:

- Diseñar una solución de O(n²) que, aunque no es óptima para grandes volúmenes, es adecuada para problemas básicos.
- Validar robustamente las entradas del usuario.
- Modularizar el código en funciones claras.

En futuras lecciones, mejoraremos la complejidad a O(n) usando estructuras de datos como mapas o arrays de frecuencia.


## 🧠 Conocimientos aplicados

- Validación de entradas con cin.fail(), cin.clear(), y cin.ignore().
- Uso de arrays estáticos y manejo de su tamaño con constantes.
- Bucles anidados para conteo de repeticiones (doble for).
- Variables de contador y de estado (numeroMasVisto, numeroApariciones).
- Modularidad en C++: separar la lógica de lectura y proceso en funciones.


## ✅ Lista de verificación técnica

| Requisito                                               | Estado     |
|----------------------------------------------------------|------------|
|Leer el tamaño del arreglo	| ✅ Cumplido |
|Validar tamaño ≤ 100	| ✅ Cumplido |
|Validar entradas numéricas	| ✅ Cumplido |
|Leer todos los elementos del arreglo	| ✅ Cumplido |
|Encontrar el número más frecuente	| ✅ Cumplido |
|Imprimir el número y su frecuencia	| ✅ Cumplido |
|Complejidad O(n²) con bucles anidados	| ✅ Cumplido (aunque se podría optimizar) |
|No usar librerías avanzadas	| ✅ Cumplido |

