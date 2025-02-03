// #include <stdio.h> 

// #define mu_assert(message, test) do { if (!(test)) return message; } while (0)

// #define mu_run_test(test) do { char *message = test(); tests_run++; if (message) return message; } while (0)

// int tests_run = 0;

// Exercice 1

// int carre(int a)
// {
//     return a*a;
// }

// static char* test_carre_positif()
// {
//     int c = carre(3);
//     mu_assert("Assert failed carre() : le carre de 3 est 9\n", c==9);
//     return 0;
// }

// static char* test_carre_negatif()
// {
//     int c = carre(-5);
//     mu_assert("Assert failed carre() : le carre de -5 est 25\n", c==25);
//     return 0;
// }

// static char* test_carre_zero()
// {
//     int c = carre(0);
//     mu_assert("Assert failed carre() : le carre de 0 est 0\n", c==0);
//     return 0;
// }

// static char* all_tests()
// {
//     mu_run_test(test_carre_positif); //Lister tous les tests ici
//     mu_run_test(test_carre_negatif);
//     mu_run_test(test_carre_zero);

//     return 0;
// }


// Exercice 2

// const char* categorize_age(int age)
// {
//  if (age < 0) {
//  return "Invalid age";
//  }
//  else if (age < 13) {
//  return "Child";
//  }
//  else if (age < 20) {
//  return "Teenager";
//  }
//  else if (age < 65) {
//  return "Adult";
//  }
//  else {
//  return "Senior";
//  }
// }

// static char* test_categorize_age_child()
// {
//     const char* c = categorize_age(10);
//     mu_assert("Assert failed categorize_age() : 10 ans devrait donner Child\n", c == "Child");
//     return 0;
// }

// static char* test_categorize_age_teenager()
// {
//     const char* c = categorize_age(15);
//     mu_assert("Assert failed categorize_age() : 15 ans devrait donner Teenager\n", c == "Teenager");
//     return 0;
// }

// static char* test_categorize_age_adult()
// {
//     const char* c = categorize_age(30);
//     mu_assert("Assert failed categorize_age() : 30 ans devrait donner Adult\n", c == "Adult");
//     return 0;
// }

// static char* test_categorize_age_senior()
// {
//     const char* c = categorize_age(70);
//     mu_assert("Assert failed categorize_age() : 70 ans devrait donner Senior\n", c == "Senior");
//     return 0;
// }

// static char* test_categorize_age_invalid()
// {
//     const char* c = categorize_age(-5);
//     mu_assert("Assert failed categorize_age() : -5 ans devrait donner Invalid age\n", c == "Invalid age");
//     return 0;
// }

// static char* all_tests()
// {
//     mu_run_test(test_categorize_age_child);
//     mu_run_test(test_categorize_age_teenager);
//     mu_run_test(test_categorize_age_adult);
//     mu_run_test(test_categorize_age_senior);
//     mu_run_test(test_categorize_age_invalid);

//     return 0;
// }

// int main()
// {
//     char *result = all_tests();
//     if (result != 0)
//     {
//         printf("%s\n", result);
//     }
//     else
//     {
//         printf("All tests passed\n");
//     }
//     printf("Tests run: %d\n", tests_run);

//     return result != 0;
// }