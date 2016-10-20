// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// floyd
arma::mat floyd(arma::mat data);
RcppExport SEXP KODAMA_floyd(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    __result = Rcpp::wrap(floyd(data));
    return __result;
END_RCPP
}
// knn_kodama_C
arma::imat knn_kodama_c(arma::mat Xtrain, arma::ivec Ytrain, arma::mat Xtest, int k);
RcppExport SEXP KODAMA_knn_kodama_c(SEXP XtrainSEXP, SEXP YtrainSEXP, SEXP XtestSEXP, SEXP kSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< arma::mat >::type Xtrain(XtrainSEXP);
  Rcpp::traits::input_parameter< arma::ivec >::type Ytrain(YtrainSEXP);
  Rcpp::traits::input_parameter< arma::mat >::type Xtest(XtestSEXP);
  Rcpp::traits::input_parameter< int >::type k(kSEXP);
  __result = Rcpp::wrap(knn_kodama_c(Xtrain, Ytrain, Xtest, k));
  return __result;
  END_RCPP
}
// knn_kodama_r
arma::mat knn_kodama_r(arma::mat Xtrain, arma::vec Ytrain, arma::mat Xtest, int k);
RcppExport SEXP KODAMA_knn_kodama_r(SEXP XtrainSEXP, SEXP YtrainSEXP, SEXP XtestSEXP, SEXP kSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< arma::mat >::type Xtrain(XtrainSEXP);
  Rcpp::traits::input_parameter< arma::vec >::type Ytrain(YtrainSEXP);
  Rcpp::traits::input_parameter< arma::mat >::type Xtest(XtestSEXP);
  Rcpp::traits::input_parameter< int >::type k(kSEXP);
  __result = Rcpp::wrap(knn_kodama_r(Xtrain, Ytrain, Xtest, k));
  return __result;
  END_RCPP
}
// samm_cpp
arma::mat samm_cpp(arma::mat x, arma::mat y, int k);
RcppExport SEXP KODAMA_samm_cpp(SEXP xSEXP, SEXP ySEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    __result = Rcpp::wrap(samm_cpp(x, y, k));
    return __result;
END_RCPP
}
// KNNCV
arma::ivec KNNCV(arma::mat x, arma::ivec cl, arma::ivec constrain, int k);
RcppExport SEXP KODAMA_KNNCV(SEXP xSEXP, SEXP clSEXP, SEXP constrainSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type cl(clSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type constrain(constrainSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    __result = Rcpp::wrap(KNNCV(x, cl, constrain, k));
    return __result;
END_RCPP
}
// transformy
arma::mat transformy(arma::ivec y);
RcppExport SEXP KODAMA_transformy(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::ivec >::type y(ySEXP);
    __result = Rcpp::wrap(transformy(y));
    return __result;
END_RCPP
}
// PLSDACV
arma::ivec PLSDACV(arma::mat x, arma::ivec cl, arma::ivec constrain, int k);
RcppExport SEXP KODAMA_PLSDACV(SEXP xSEXP, SEXP clSEXP, SEXP constrainSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type cl(clSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type constrain(constrainSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    __result = Rcpp::wrap(PLSDACV(x, cl, constrain, k));
    return __result;
END_RCPP
}
// pls_kodama
List pls_kodama(arma::mat Xtrain, arma::mat Ytrain, arma::mat Xtest, int ncomp);
RcppExport SEXP KODAMA_pls_kodama(SEXP XtrainSEXP, SEXP YtrainSEXP, SEXP XtestSEXP, SEXP ncompSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type Xtrain(XtrainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Ytrain(YtrainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter< int >::type ncomp(ncompSEXP);
    __result = Rcpp::wrap(pls_kodama(Xtrain, Ytrain, Xtest, ncomp));
    return __result;
END_RCPP
}
// unic
int unic(arma::mat x);
RcppExport SEXP KODAMA_unic(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    __result = Rcpp::wrap(unic(x));
    return __result;
END_RCPP
}
// optim_pls_cv
List optim_pls_cv(arma::mat x, arma::mat clmatrix, arma::ivec constrain, int ncomp);
RcppExport SEXP KODAMA_optim_pls_cv(SEXP xSEXP, SEXP clmatrixSEXP, SEXP constrainSEXP, SEXP ncompSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
  Rcpp::traits::input_parameter< arma::mat >::type clmatrix(clmatrixSEXP);
  Rcpp::traits::input_parameter< arma::ivec >::type constrain(constrainSEXP);
  Rcpp::traits::input_parameter< int >::type ncomp(ncompSEXP);
  __result = Rcpp::wrap(optim_pls_cv(x, clmatrix, constrain, ncomp));
  return __result;
  END_RCPP
}
// optim_knn_r_cv
List optim_knn_r_cv(arma::mat x, arma::vec clmatrix, arma::ivec constrain, int ncomp);
RcppExport SEXP KODAMA_optim_knn_r_cv(SEXP xSEXP, SEXP clmatrixSEXP, SEXP constrainSEXP, SEXP ncompSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
  Rcpp::traits::input_parameter< arma::vec >::type clmatrix(clmatrixSEXP);
  Rcpp::traits::input_parameter< arma::ivec >::type constrain(constrainSEXP);
  Rcpp::traits::input_parameter< int >::type ncomp(ncompSEXP);
  __result = Rcpp::wrap(optim_knn_r_cv(x, clmatrix, constrain, ncomp));
  return __result;
  END_RCPP
}
// optim_knn_c_cv
List optim_knn_c_cv(arma::mat x, arma::ivec clmatrix, arma::ivec constrain, int ncomp);
RcppExport SEXP KODAMA_optim_knn_c_cv(SEXP xSEXP, SEXP clmatrixSEXP, SEXP constrainSEXP, SEXP ncompSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
  Rcpp::traits::input_parameter< arma::ivec >::type clmatrix(clmatrixSEXP);
  Rcpp::traits::input_parameter< arma::ivec >::type constrain(constrainSEXP);
  Rcpp::traits::input_parameter< int >::type ncomp(ncompSEXP);
  __result = Rcpp::wrap(optim_knn_c_cv(x, clmatrix, constrain, ncomp));
  return __result;
  END_RCPP
}
// double_pls_cv
List double_pls_cv(arma::mat x, arma::mat y, arma::ivec constrain, int type, int verbose, int compmax);
RcppExport SEXP KODAMA_double_pls_cv(SEXP xSEXP, SEXP ySEXP, SEXP constrainSEXP, SEXP typeSEXP, SEXP verboseSEXP, SEXP compmaxSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
  Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
  Rcpp::traits::input_parameter< arma::ivec >::type constrain(constrainSEXP);
  Rcpp::traits::input_parameter< int >::type type(typeSEXP);
  Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
  Rcpp::traits::input_parameter< int >::type compmax(compmaxSEXP);
  __result = Rcpp::wrap(double_pls_cv(x, y, constrain, type, verbose, compmax));
  return __result;
  END_RCPP
}
// double_knn_cv
List double_knn_cv(arma::mat x, arma::vec yy, arma::ivec constrain, int type, int verbose, int compmax);
RcppExport SEXP KODAMA_double_knn_cv(SEXP xSEXP, SEXP yySEXP, SEXP constrainSEXP, SEXP typeSEXP, SEXP verboseSEXP, SEXP compmaxSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
  Rcpp::traits::input_parameter< arma::vec >::type yy(yySEXP);
  Rcpp::traits::input_parameter< arma::ivec >::type constrain(constrainSEXP);
  Rcpp::traits::input_parameter< int >::type type(typeSEXP);
  Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
  Rcpp::traits::input_parameter< int >::type compmax(compmaxSEXP);
  __result = Rcpp::wrap(double_knn_cv(x, yy, constrain, type, verbose, compmax));
  return __result;
  END_RCPP
}
// fit_pls
double fit_pls(arma::mat x, arma::mat y, int type);
RcppExport SEXP KODAMA_fit_pls(SEXP xSEXP, SEXP ySEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    __result = Rcpp::wrap(fit_pls(x, y, type));
    return __result;
END_RCPP
}
// corecpp
List corecpp(arma::mat x, arma::mat xTdata, arma::ivec clbest, const int Tcycle, int FUN, int fpar, arma::ivec constrain, NumericVector fix, bool shake, int proj);
RcppExport SEXP KODAMA_corecpp(SEXP xSEXP, SEXP xTdataSEXP, SEXP clbestSEXP, SEXP TcycleSEXP, SEXP FUNSEXP, SEXP fparSEXP, SEXP constrainSEXP, SEXP fixSEXP, SEXP shakeSEXP, SEXP projSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xTdata(xTdataSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type clbest(clbestSEXP);
    Rcpp::traits::input_parameter< const int >::type Tcycle(TcycleSEXP);
    Rcpp::traits::input_parameter< int >::type FUN(FUNSEXP);
    Rcpp::traits::input_parameter< int >::type fpar(fparSEXP);
    Rcpp::traits::input_parameter< arma::ivec >::type constrain(constrainSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fix(fixSEXP);
    Rcpp::traits::input_parameter< bool >::type shake(shakeSEXP);
    Rcpp::traits::input_parameter< int >::type proj(projSEXP);
    __result = Rcpp::wrap(corecpp(x, xTdata, clbest, Tcycle, FUN, fpar, constrain, fix, shake, proj));
    return __result;
END_RCPP
}
// another
List another(arma::mat pptrain, arma::mat xtrain, arma::mat xtest, arma::mat res, arma::mat Xlink, double epsilon);
RcppExport SEXP KODAMA_another(SEXP pptrainSEXP, SEXP xtrainSEXP, SEXP xtestSEXP, SEXP resSEXP, SEXP XlinkSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type pptrain(pptrainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xtrain(xtrainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xtest(xtestSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type res(resSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xlink(XlinkSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    __result = Rcpp::wrap(another(pptrain, xtrain, xtest, res, Xlink, epsilon));
    return __result;
END_RCPP
}
