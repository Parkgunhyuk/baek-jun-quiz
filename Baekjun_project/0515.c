//#include <stdio.h> //8393번 문제
//
//int main() {
//    int n;
//    int s = 0;
//    scanf("%d", &n);
//    for (int i = 0; i <= n; i++)
//    {
//        s = s + i;
//    }
//    printf("%d", s);
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int x, n, a, b; //25304번 문제
//    int c = 0;
//    scanf("%d %d", &x, &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d %d", &a, &b);
//        c = c + (a * b);
//    }
//    if (x == c)
//    {
//        printf("Yes");
//    }
//    else
//        printf("No");
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int n, c; //25314번 문제
//    scanf("%d", &n);
//    if (n % 4 == 0)
//    {
//        c = n / 4;
//        for (int i = 0; i < c; i++)
//        {
//            printf("long ");
//        }
//        printf("int");
//    }
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int T, A, B; //15552번 문제
//    scanf("%d", &T);
//    for (int i = 0; i < T; i++)
//    {
//        scanf("%d %d", &A, &B);
//        printf("%d\n", A + B);
//
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int T, A, B; //11021번 문제
//    scanf("%d", &T);
//    for (int i = 1; i <= T; i++)
//    {
//        scanf("%d %d", &A, &B);
//        printf("Case #%d: %d\n", i, A + B);
//
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int T, A, B; //11022번 문제
//    scanf("%d", &T);
//    for (int i = 1; i <= T; i++)
//    {
//        scanf("%d %d", &A, &B);
//        printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
//
//    }
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int N; //2438번 문제
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int N; //2439번 문제 
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < N - 1 - i; j++)
//        {
//            printf(" ");
//        }
//        for (int k = -1; k < i; k++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}