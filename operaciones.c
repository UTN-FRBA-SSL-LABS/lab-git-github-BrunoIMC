#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
// Retorna la suma de los parametros a y b
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/* dados dos enteros, devuelve el producto*/
int multiplicar(int a, int b) {
     return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
