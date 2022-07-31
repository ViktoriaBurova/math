#include <check.h>
#include <math.h>
#include "stdlib.h"
#include "s21_math.h"

START_TEST(s21_ceil_f) {
  double arg1 = 7.666;
  ck_assert_uint_eq(s21_ceil(arg1), ceil(arg1));
  double arg2 = 0.00001;
  ck_assert_uint_eq(s21_ceil(arg2), ceil(arg2));
  double arg3 = -15.01;
  ck_assert_uint_eq(s21_ceil(arg3), ceil(arg3));
  double arg4 = -0;
  ck_assert_uint_eq(s21_ceil(arg4), ceil(arg4));
  double arg5 = 777777;
  ck_assert_uint_eq(s21_ceil(arg5), ceil(arg5));
}
END_TEST

START_TEST(s21_floor_f) {
  double arg1 = 2.77;
  ck_assert_uint_eq(s21_floor(arg1), floor(arg1));
  double arg2 = 0.005;
  ck_assert_uint_eq(s21_floor(arg2), floor(arg2));
  double arg3 = -31.01;
  ck_assert_uint_eq(s21_floor(arg3), floor(arg3));
  double arg4 = -0.001;
  ck_assert_uint_eq(s21_floor(arg4), floor(arg4));
  double arg5 = -0.;
  ck_assert_uint_eq(s21_floor(arg5), floor(arg5));
}
END_TEST

START_TEST(s21_tan_f) {
  double arg1 = 0.123;
  ck_assert_uint_eq(s21_tan(arg1), tan(arg1));
  double arg2 = 324567;
  ck_assert_uint_eq(s21_tan(arg2), tan(arg2));
  double arg3 = -234248;
  ck_assert_uint_eq(s21_tan(arg3), tan(arg3));
  for (double i = -100; i < 100; i += 2) {
    ck_assert_uint_eq(s21_tan(i), tan(i));
  }
  for (double i = -1; i < 1; i += 0.02) {
    ck_assert_uint_eq(s21_tan(i), tan(i));
  }
  double arg4 = s21_INF;
  ck_assert_uint_eq(s21_tan(arg4), tan(arg4));
  double arg5 = s21_PI_2;
  ck_assert_uint_eq(s21_tan(arg5), tan(arg5));
  for (double i = -s21_PI; i < s21_PI; i += 0.001) {
    ck_assert_ldouble_eq_tol(s21_tan(i), tanl(i), 1e-7);
  }
}
END_TEST

START_TEST(s21_cos_f) {
  double arg1 = 0;
  ck_assert_uint_eq(s21_cos(arg1), cos(arg1));
  double arg2 = 123234;
  ck_assert_uint_eq(s21_cos(arg2), cos(arg2));
  double arg3 = -7654325;
  ck_assert_uint_eq(s21_cos(arg3), cos(arg3));
  for (double i = -s21_PI; i < s21_PI; i += 0.01) {
    ck_assert_uint_eq(s21_cos(i), cos(i));
  }
  double arg4 = 1;
  ck_assert_ldouble_eq_tol(s21_cos(arg4), cosl(arg4), 1e-7);
  double arg5 = 0.123456;
  ck_assert_ldouble_eq_tol(s21_cos(arg5), cosl(arg5), 1e-7);
  double arg6 = 0.999999;
  ck_assert_ldouble_eq_tol(s21_cos(arg6), cosl(arg6), 1e-7);
  for (double i = -s21_PI; i < s21_PI; i += 0.001) {
    ck_assert_ldouble_eq_tol(s21_cos(i), cosl(i), 1e-7);
  }
  double arg7 = s21_INF;
  ck_assert_uint_eq(s21_cos(arg7), cos(arg7));
}
END_TEST

START_TEST(s21_sin_f) {
  double arg1 = 0;
  ck_assert_uint_eq(s21_sin(arg1), sin(arg1));
  double arg2 = 1234567;
  ck_assert_uint_eq(s21_sin(arg2), sin(arg2));
  double arg3 = -3234567;
  ck_assert_uint_eq(s21_sin(arg3), sin(arg3));
  for (double i = -s21_PI; i < s21_PI; i += 0.01) {
    ck_assert_uint_eq(s21_sin(i), sin(i));
  }
}
END_TEST

START_TEST(s21_abs_f) {
  int arg1 = -4;
  ck_assert_int_eq(s21_abs(arg1), abs(arg1));
  int arg2 = -123;
  ck_assert_int_eq(s21_abs(arg2), abs(arg2));
  for (int i = -1234567; i < 123456; i += 10) {
    ck_assert_int_eq(s21_abs(i), abs(i));
  }
}
END_TEST

START_TEST(s21_atan_f) {
  double arg1 = 0.43;
  ck_assert_uint_eq(s21_atan(arg1), atan(arg1));
  double arg2 = 0.12;
  ck_assert_uint_eq(s21_atan(arg2), atan(arg2));
  double arg3 = 1;
  ck_assert_uint_eq(s21_atan(arg3), atan(arg3));
  double arg4 = -1;
  ck_assert_uint_eq(s21_atan(arg4), atan(arg4));
  double arg5 = 0;
  ck_assert_uint_eq(s21_atan(arg5), atan(arg5));
  double arg6 = 12345;
  ck_assert_uint_eq(s21_atan(arg6), atan(arg6));
  double arg7 = 0.001;
  ck_assert_uint_eq(s21_atan(arg7), atan(arg7));
  double arg8 = -12345;
  ck_assert_uint_eq(s21_atan(arg8), atan(arg8));
  for (double i = -1; i <= 1; i += 0.01) {
    ck_assert_uint_eq(s21_atan(i), atan(i));
  }
  double arg9 = s21_INF;
  ck_assert_uint_eq(s21_atan(arg9), atan(arg9));
  double arg10 = -s21_INF;
  ck_assert_uint_eq(s21_atan(arg10), atan(arg10));
}
END_TEST

START_TEST(s21_acos_f) {
  double arg1 = 0.43;
  ck_assert_uint_eq(s21_acos(arg1), acos(arg1));
  double arg2 = -1;
  ck_assert_uint_eq(s21_acos(arg2), acos(arg2));
  double arg3 = -0.999;
  ck_assert_uint_eq(s21_acos(arg3), acos(arg3));
  for (double i = -10.; i < 10.; i += 1.) {
    ck_assert_uint_eq(s21_acos(i), acos(i));
  }
  for (double i = -1; i < 1; i += 0.01) {
    ck_assert_uint_eq(s21_acos(i), acos(i));
  }
}
END_TEST

START_TEST(s21_asin_f) {
  double arg1 = 0.43;
  ck_assert_uint_eq(s21_asin(arg1), asin(arg1));
  double arg2 = 0.12;
  ck_assert_uint_eq(s21_asin(arg2), asin(arg2));
  for (double i = 0.; i < 2; i += 1) {
    ck_assert_uint_eq(s21_asin(i), asin(i));
  }
  for (double i = -1; i < 5; i += 0.01) {
    ck_assert_uint_eq(s21_asin(i), asin(i));
  }
}
END_TEST

START_TEST(s21_fmod_f) {
  ck_assert_uint_eq(s21_fmod(4.1, 1.7), fmod(4.1, 1.7));
  ck_assert_uint_eq(s21_fmod(456.87678, 3.7), fmod(456.87678, 3.7));
  ck_assert_uint_eq(s21_fmod(36677.546546, 4.1), fmod(36677.546546, 4.1));
  ck_assert_uint_eq(s21_fmod(23.456, 4.355), fmod(23.456, 4.355));
}
END_TEST

START_TEST(s21_exp_f) {
  ck_assert_uint_eq(s21_exp(s21_INF), exp(s21_INF));
  ck_assert_uint_eq(s21_exp(-s21_INF), exp(-s21_INF));
  ck_assert_uint_eq(s21_exp(5), exp(5));
  ck_assert_uint_eq(s21_exp(-2), exp(-2));
  ck_assert_uint_eq(s21_exp(1234567), exp(1234567));
  ck_assert_uint_eq(s21_exp(-1234567), exp(-1234567));
  for (double i = -10; i < 10; i++) {
    ck_assert_uint_eq(s21_exp(i), exp(i));
  }
}
END_TEST

START_TEST(s21_log_f) {
  ck_assert_uint_eq(s21_log(12356), log(12356));
  ck_assert_uint_eq(s21_log(1.1), log(1.1));
  for (double i = -1.; i < 10; i += 0.1) {
    ck_assert_uint_eq(s21_log(i), log(i));
  }
  for (double i = 0.; i < 2; i += 0.01) {
    ck_assert_uint_eq(s21_log(i), log(i));
  }
}
END_TEST

START_TEST(s21_sqrt_f) {
  ck_assert_uint_eq(s21_sqrt(16.0), sqrt(16.0));
  ck_assert_uint_eq(s21_sqrt(45.35), sqrt(45.35));
  ck_assert_uint_eq(s21_sqrt(5.0), sqrt(5.0));
  for (double i = -1.; i < 100000; i += 10) {
    ck_assert_uint_eq(s21_sqrt(i), sqrt(i));
  }
  for (double i = 0; i < 1; i += 0.001) {
    ck_assert_uint_eq(s21_sqrt(i), sqrt(i));
  }
}
END_TEST

START_TEST(s21_pow_f) {
  ck_assert_uint_eq(s21_pow(1.0, 0.0), pow(1.0, 0.0));
  ck_assert_uint_eq(s21_pow(0.0, 0.0), pow(0.0, 0.0));
  ck_assert_uint_eq(s21_pow(0.0, -s21_INF), pow(0.0, -s21_INF));
  ck_assert_uint_eq(s21_pow(-3.0, -s21_INF), pow(-3.0, -s21_INF));
  ck_assert_uint_eq(s21_pow(-1.0, s21_INF), pow(-1.0, s21_INF));
  ck_assert_uint_eq(s21_pow(-0.5, s21_INF), pow(-0.5, s21_INF));
  ck_assert_uint_eq(s21_pow(-3.0, s21_INF), pow(-3.0, s21_INF));
  ck_assert_uint_eq(s21_pow(-3.0, 0.0), pow(-3.0, 0.0));
  ck_assert_uint_eq(s21_pow(-3.0, -14.0), pow(-3.0, -14.0));
  ck_assert_uint_eq(s21_pow(-3.0, 14.0), pow(-3.0, 14.0));
  ck_assert_uint_eq(s21_pow(2.6, 3.45), pow(2.6, 3.45));
  ck_assert_uint_eq(s21_pow(3.0, 14.0), pow(3.0, 14.0));
  ck_assert_uint_eq(s21_pow(31.456, 4.3), pow(31.456, 4.3));
  ck_assert_uint_eq(s21_pow(31.456, 0.3), pow(31.456, 0.3));
  ck_assert_uint_eq(s21_pow(4.3, 4.3), pow(4.3, 4.3));
  ck_assert_uint_eq(s21_pow(-1234, 4.3), pow(-1234, 4.3));
  ck_assert_uint_eq(s21_pow(-1234, -4.3), pow(-1234, -4.3));
  ck_assert_uint_eq(s21_pow(1234, -4.3), pow(1234, -4.3));
  ck_assert_uint_eq(s21_pow(1234, 0.0), pow(1234, 0.0));
  ck_assert_uint_eq(s21_pow(1234, -14.0), pow(1234, -14.0));
}
END_TEST

START_TEST(s21_fabs_f) {
  ck_assert_uint_eq(s21_fabs(-612367.54783), fabs(-612367.54783));
  ck_assert_uint_eq(s21_fabs(-45.345), fabs(-45.345));
  ck_assert_uint_eq(s21_fabs(1.0), fabs(1.0));
}
END_TEST

Suite *lib_suite(void) {
  Suite *s;
  s = suite_create("Func Check");

  TCase *tc_ceil;
  TCase *tc_floor;
  TCase *tc_tan;
  TCase *tc_cos;
  TCase *tc_sin;
  TCase *tc_abs;
  TCase *tc_atan;
  TCase *tc_acos;
  TCase *tc_asin;
  TCase *tc_fmod;
  TCase *tc_exp;
  TCase *tc_log;
  TCase *tc_sqrt;
  TCase *tc_pow;
  TCase *tc_fabs;

  tc_fabs = tcase_create("Fabs func");
  suite_add_tcase(s, tc_fabs);
  tcase_add_test(tc_fabs, s21_fabs_f);

  tc_pow = tcase_create("Pow func");
  suite_add_tcase(s, tc_pow);
  tcase_add_test(tc_pow, s21_pow_f);

  tc_sqrt = tcase_create("Sqrt func");
  suite_add_tcase(s, tc_sqrt);
  tcase_add_test(tc_sqrt, s21_sqrt_f);

  tc_log = tcase_create("Log func");
  suite_add_tcase(s, tc_log);
  tcase_add_test(tc_log, s21_log_f);

  tc_exp = tcase_create("Exp func");
  suite_add_tcase(s, tc_exp);
  tcase_add_test(tc_exp, s21_exp_f);

  tc_fmod = tcase_create("Fmod func");
  suite_add_tcase(s, tc_fmod);
  tcase_add_test(tc_fmod, s21_fmod_f);

  tc_asin = tcase_create("Asin func");
  suite_add_tcase(s, tc_asin);
  tcase_add_test(tc_asin, s21_asin_f);

  tc_acos = tcase_create("Acos func");
  suite_add_tcase(s, tc_acos);
  tcase_add_test(tc_acos, s21_acos_f);

  tc_atan = tcase_create("Atan func");
  suite_add_tcase(s, tc_atan);
  tcase_add_test(tc_atan, s21_atan_f);

  tc_abs = tcase_create("Abs func");
  suite_add_tcase(s, tc_abs);
  tcase_add_test(tc_abs, s21_abs_f);

  tc_sin = tcase_create("Sin func");
  suite_add_tcase(s, tc_sin);
  tcase_add_test(tc_sin, s21_sin_f);

  tc_cos = tcase_create("Cos func");
  suite_add_tcase(s, tc_cos);
  tcase_add_test(tc_cos, s21_cos_f);

  tc_tan = tcase_create("Tan func");
  suite_add_tcase(s, tc_tan);
  tcase_add_test(tc_tan, s21_tan_f);

  tc_floor = tcase_create("Floor func");
  suite_add_tcase(s, tc_floor);
  tcase_add_test(tc_floor, s21_floor_f);

  tc_ceil = tcase_create("Ceil func");
  suite_add_tcase(s, tc_ceil);
  tcase_add_test(tc_ceil, s21_ceil_f);

  return s;
}

int main(void) {
  Suite *s;
  SRunner *sr;

  s = lib_suite();
  sr = srunner_create(s);
  srunner_run_all(sr, CK_VERBOSE);
  srunner_free(sr);
  return 0;
}
