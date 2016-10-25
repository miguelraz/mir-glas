#ifndef Have_GLASB
#define Have_GLASB
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif

typedef int FortranInt;

int xerbla_(const char *srname, FortranInt *info);

int sscal_(const FortranInt *n, const float *a, float *x, const FortranInt *incx);
int dscal_(const FortranInt *n, const double *a, double *x, const FortranInt *incx);
int csscal_(const FortranInt *n, const float *a, float _Complex *x, const FortranInt *incx);
int cscal_(const FortranInt *n, const float _Complex *a, float _Complex *x, const FortranInt *incx);
int csIscal_(const FortranInt *n, const float *a, float _Complex *x, const FortranInt *incx);
int zdscal_(const FortranInt *n, const double *a, double _Complex *x, const FortranInt *incx);
int zscal_(const FortranInt *n, const double _Complex *a, double _Complex *x, const FortranInt *incx);
int zdIscal_(const FortranInt *n, const double *a, double _Complex *x, const FortranInt *incx);

int sgemm_(const char *transa, const char *transb, const FortranInt *m, const FortranInt *n, const FortranInt *k, const float *alpha, const float *a, const FortranInt *lda, const float *b, const FortranInt *ldb, const float *beta, float *c, const FortranInt *ldc);
int dgemm_(const char *transa, const char *transb, const FortranInt *m, const FortranInt *n, const FortranInt *k, const double *alpha, const double *a, const FortranInt *lda, const double *b, const FortranInt *ldb, const double *beta, double *c, const FortranInt *ldc);
int cgemm_(const char *transa, const char *transb, const FortranInt *m, const FortranInt *n, const FortranInt *k, const float _Complex *alpha, const float _Complex *a, const FortranInt *lda, const float _Complex *b, const FortranInt *ldb, const float _Complex *beta, float _Complex *c, const FortranInt *ldc);
int zgemm_(const char *transa, const char *transb, const FortranInt *m, const FortranInt *n, const FortranInt *k, const double _Complex *alpha, const double _Complex *a, const FortranInt *lda, const double _Complex *b, const FortranInt *ldb, const double _Complex *beta, double _Complex *c, const FortranInt *ldc);

int ssymm_(const char *side, const char *uplo, const FortranInt *m, const FortranInt *n, const float *alpha, const float *a, const FortranInt *lda, const float *b, const FortranInt *ldb, const float *beta, float *c, const FortranInt *ldc);
int dsymm_(const char *side, const char *uplo, const FortranInt *m, const FortranInt *n, const double *alpha, const double *a, const FortranInt *lda, const double *b, const FortranInt *ldb, const double *beta, double *c, const FortranInt *ldc);
int csymm_(const char *side, const char *uplo, const FortranInt *m, const FortranInt *n, const float _Complex *alpha, const float _Complex *a, const FortranInt *lda, const float _Complex *b, const FortranInt *ldb, const float _Complex *beta, float _Complex *c, const FortranInt *ldc);
int zsymm_(const char *side, const char *uplo, const FortranInt *m, const FortranInt *n, const double _Complex *alpha, const double _Complex *a, const FortranInt *lda, const double _Complex *b, const FortranInt *ldb, const double _Complex *beta, double _Complex *c, const FortranInt *ldc);

int chemm_(const char *side, const char *uplo, const FortranInt *m, const FortranInt *n, const float _Complex *alpha, const float _Complex *a, const FortranInt *lda, const float _Complex *b, const FortranInt *ldb, const float _Complex *beta, float _Complex *c, const FortranInt *ldc);
int zhemm_(const char *side, const char *uplo, const FortranInt *m, const FortranInt *n, const double _Complex *alpha, const double _Complex *a, const FortranInt *lda, const double _Complex *b, const FortranInt *ldb, const double _Complex *beta, double _Complex *c, const FortranInt *ldc);

#ifdef __cplusplus
}
#endif
#endif