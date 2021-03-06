// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// make_V_star
arma::sp_mat make_V_star(arma::sp_mat Z, arma::sp_mat Z0, arma::sp_mat Z1, arma::sp_mat wtr);
RcppExport SEXP _didimputation_make_V_star(SEXP ZSEXP, SEXP Z0SEXP, SEXP Z1SEXP, SEXP wtrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Z0(Z0SEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Z1(Z1SEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type wtr(wtrSEXP);
    rcpp_result_gen = Rcpp::wrap(make_V_star(Z, Z0, Z1, wtr));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_didimputation_make_V_star", (DL_FUNC) &_didimputation_make_V_star, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_didimputation(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
