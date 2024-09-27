#include <vector>
#include <cblas.h>

/* Some maybe useful tips...
* you can get the length of a std::vector, v using v.size()
* you can access the data within it using v.data()
* the cblas_dnrm2 and cblas_ddot functions require "increment" parameters - that's the stepsize
* within your vector. it should be 1 for this case.
*/

double calculateTwoNorm(const std::vector<double>& a) {
  return cblas_dnrm2(a.size(), a.data(), 1);
}

double calculateDotProduct(const std::vector<double>& x, const std::vector<double>& y) {
  return cblas_ddot(x.size(), x.data(), 1, y.data(), 1); 
}

double calculateProjection(const std::vector<double>& x, const std::vector<double>& y) {
  return calculateDotProduct(x, y) / calculateTwoNorm(y); 
}
