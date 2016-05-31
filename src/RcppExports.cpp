// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/r2arma.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rwishart
arma::mat rwishart(unsigned int df, const arma::mat& S);
RcppExport SEXP r2arma_rwishart(SEXP dfSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< unsigned int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    __result = Rcpp::wrap(rwishart(df, S));
    return __result;
END_RCPP
}
// riwishart
arma::mat riwishart(unsigned int df, const arma::mat& S);
RcppExport SEXP r2arma_riwishart(SEXP dfSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< unsigned int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    __result = Rcpp::wrap(riwishart(df, S));
    return __result;
END_RCPP
}
// get_elements
arma::vec get_elements(const arma::mat& x, const arma::uvec& row_ind, const arma::uvec& col_ind);
RcppExport SEXP r2arma_get_elements(SEXP xSEXP, SEXP row_indSEXP, SEXP col_indSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type row_ind(row_indSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type col_ind(col_indSEXP);
    __result = Rcpp::wrap(get_elements(x, row_ind, col_ind));
    return __result;
END_RCPP
}
// rev_col_subset
arma::mat rev_col_subset(arma::mat x, unsigned int start, unsigned int end);
RcppExport SEXP r2arma_rev_col_subset(SEXP xSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type start(startSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type end(endSEXP);
    __result = Rcpp::wrap(rev_col_subset(x, start, end));
    return __result;
END_RCPP
}
// rev_row_subset
arma::mat rev_row_subset(arma::mat x, unsigned int start, unsigned int end);
RcppExport SEXP r2arma_rev_row_subset(SEXP xSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type start(startSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type end(endSEXP);
    __result = Rcpp::wrap(rev_row_subset(x, start, end));
    return __result;
END_RCPP
}
// reverse_vec
arma::vec reverse_vec(arma::vec x);
RcppExport SEXP r2arma_reverse_vec(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    __result = Rcpp::wrap(reverse_vec(x));
    return __result;
END_RCPP
}
// field_to_matrix
arma::mat field_to_matrix(arma::field<arma::vec> x);
RcppExport SEXP r2arma_field_to_matrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::field<arma::vec> >::type x(xSEXP);
    __result = Rcpp::wrap(field_to_matrix(x));
    return __result;
END_RCPP
}
// sum_field_vec
double sum_field_vec(const arma::field<arma::vec>& x);
RcppExport SEXP r2arma_sum_field_vec(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type x(xSEXP);
    __result = Rcpp::wrap(sum_field_vec(x));
    return __result;
END_RCPP
}
// seq_int
arma::vec seq_int(long int a, long int b);
RcppExport SEXP r2arma_seq_int(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< long int >::type a(aSEXP);
    Rcpp::traits::input_parameter< long int >::type b(bSEXP);
    __result = Rcpp::wrap(seq_int(a, b));
    return __result;
END_RCPP
}
// seq_default
arma::vec seq_default(long double from, long double to, long unsigned int length_out);
RcppExport SEXP r2arma_seq_default(SEXP fromSEXP, SEXP toSEXP, SEXP length_outSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< long double >::type from(fromSEXP);
    Rcpp::traits::input_parameter< long double >::type to(toSEXP);
    Rcpp::traits::input_parameter< long unsigned int >::type length_out(length_outSEXP);
    __result = Rcpp::wrap(seq_default(from, to, length_out));
    return __result;
END_RCPP
}
// seq_default_a
arma::vec seq_default_a(long double a, long double length_out);
RcppExport SEXP r2arma_seq_default_a(SEXP aSEXP, SEXP length_outSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< long double >::type a(aSEXP);
    Rcpp::traits::input_parameter< long double >::type length_out(length_outSEXP);
    __result = Rcpp::wrap(seq_default_a(a, length_out));
    return __result;
END_RCPP
}
// seq_along_cpp
arma::vec seq_along_cpp(const arma::vec& along_with);
RcppExport SEXP r2arma_seq_along_cpp(SEXP along_withSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::vec& >::type along_with(along_withSEXP);
    __result = Rcpp::wrap(seq_along_cpp(along_with));
    return __result;
END_RCPP
}
// seq_len_cpp
arma::vec seq_len_cpp(long unsigned int length_out);
RcppExport SEXP r2arma_seq_len_cpp(SEXP length_outSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< long unsigned int >::type length_out(length_outSEXP);
    __result = Rcpp::wrap(seq_len_cpp(length_out));
    return __result;
END_RCPP
}
// diff_cpp
arma::vec diff_cpp(arma::vec x, unsigned int lag, unsigned int differences);
RcppExport SEXP r2arma_diff_cpp(SEXP xSEXP, SEXP lagSEXP, SEXP differencesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type lag(lagSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type differences(differencesSEXP);
    __result = Rcpp::wrap(diff_cpp(x, lag, differences));
    return __result;
END_RCPP
}
// ARMAtoMA_cpp
arma::vec ARMAtoMA_cpp(arma::vec ar, arma::vec ma, int lag_max);
RcppExport SEXP r2arma_ARMAtoMA_cpp(SEXP arSEXP, SEXP maSEXP, SEXP lag_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type ar(arSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type ma(maSEXP);
    Rcpp::traits::input_parameter< int >::type lag_max(lag_maxSEXP);
    __result = Rcpp::wrap(ARMAtoMA_cpp(ar, ma, lag_max));
    return __result;
END_RCPP
}
// cfilter
arma::vec cfilter(arma::vec x, arma::vec filter, int sides, bool circular);
RcppExport SEXP r2arma_cfilter(SEXP xSEXP, SEXP filterSEXP, SEXP sidesSEXP, SEXP circularSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< int >::type sides(sidesSEXP);
    Rcpp::traits::input_parameter< bool >::type circular(circularSEXP);
    __result = Rcpp::wrap(cfilter(x, filter, sides, circular));
    return __result;
END_RCPP
}
// rfilter
arma::vec rfilter(arma::vec x, arma::vec filter, arma::vec init);
RcppExport SEXP r2arma_rfilter(SEXP xSEXP, SEXP filterSEXP, SEXP initSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    __result = Rcpp::wrap(rfilter(x, filter, init));
    return __result;
END_RCPP
}
// ARMAacf_cpp
arma::vec ARMAacf_cpp(arma::vec ar, arma::vec ma, unsigned int lag_max);
RcppExport SEXP r2arma_ARMAacf_cpp(SEXP arSEXP, SEXP maSEXP, SEXP lag_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type ar(arSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type ma(maSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type lag_max(lag_maxSEXP);
    __result = Rcpp::wrap(ARMAacf_cpp(ar, ma, lag_max));
    return __result;
END_RCPP
}
// dft_acf
arma::vec dft_acf(const arma::vec& x);
RcppExport SEXP r2arma_dft_acf(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    __result = Rcpp::wrap(dft_acf(x));
    return __result;
END_RCPP
}
