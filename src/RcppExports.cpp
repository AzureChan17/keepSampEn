// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// KeepNASampEn
void KeepNASampEn(String cmdstrp);
RcppExport SEXP _keepSampEn_KeepNASampEn(SEXP cmdstrpSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type cmdstrp(cmdstrpSEXP);
    KeepNASampEn(cmdstrp);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_keepSampEn_KeepNASampEn", (DL_FUNC) &_keepSampEn_KeepNASampEn, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_keepSampEn(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
