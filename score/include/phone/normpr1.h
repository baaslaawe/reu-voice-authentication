/* File normpr1.h                             */
/* Fnorm[i] is the cumulative standard normal */
/*probability of znorm[i]. Probabilities are  */
/* from Winkler & Hays, pp. xiii.             */

#ifndef NORMPROB1_HEADER
#define NORMPROB1_HEADER

  static int n_normp = 35;
  static double znorm[35] =
    {0.00,
     0.01,
     0.20,
     0.30,
     0.40,
     0.50,
     0.60,
     0.70,
     0.80,
     0.90,
     1.00,
     1.10,
     1.20,
     1.30,
     1.40,
     1.50,
     1.60,
     1.70,
     1.80,
     1.90,
     2.00,
     2.10,
     2.20,
     2.30,
     2.40,
     2.50,
     3.00,
     3.20,
     3.40,
     3.60,
     3.80,
     4.00,
     4.50,
     5.00,
     5.50
    };
  static double Fnorm[35] =
    {.5000000,
     .5398278,
     .5792597,
     .6179114,
     .6554217,
     .6914625,
     .7257469,
     .7580363,
     .7881446,
     .8159399,
     .8413447,
     .8643339,
     .8849303,
     .9031995,
     .9192433,
     .9331928,
     .9452007,
     .9554345,
     .9640697,
     .9712834,
     .9772499,
     .9821356,
     .9860966,
     .9892759,
     .9918025,
     .9937903,
     .9986501,
     .9993129,
     .9996631,
     .9998409,
     .9999277,
     .9999683,
     .9999966,
     .9999997,
     .9999999
    };

#endif
