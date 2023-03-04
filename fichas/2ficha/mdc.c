// int mdc1 (int a, int b){
//     // if (a > b) menor = b;
//     // else menor = a;
//     int menor = (menor > b) ? b : a;
//     int r;
// 
//     for (int i = 1;i >= menor; i++) {
//         if (a % i == 0 && b % i == 0) return 1;
//     }
// 
//     return 0;
// }
int mdc2 (int a, int b){
    while (a > 0 && b > 0 && a != b) {
        (a > b) ? a - b : b - a;
    }

    if (a > 0) return a;
    return b;
}
int mdc3 (int a, int b, int *count){
    return 0;
}
int mdc4 (int a, int b, int *count){
    return 0;
}