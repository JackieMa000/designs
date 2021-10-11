#include <stdio.h>
#include <assert.h>
#include <string.h>

int main() {
    void *ary[5];

    int i = 1;
    char *s = "hi";
    float f = 3.14f;
    double d = 3.14;

    struct Person {
      char *name;
      int age;
    };
    struct Person person = {"John", 34};

    ary[0] = &i;
    ary[1] = s;
    ary[2] = &f;
    ary[3] = &d;
    ary[4] = &person;

//    test int
    int *p_int = (int *) ary[0];
    printf("%d\n", *p_int);
    assert(p_int == &i);
    assert(*p_int == i);

//    test string
    char *p_str = (char *) ary[1];
    printf("%s\n", p_str);
    assert(p_str == s);
    assert(strcmp(p_str, s) == 0);

//    test float
    float *p_float = (float *) ary[2];
    printf("%f\n", *p_float);
    assert(p_float == &f);
    assert(*p_float == f);

//    test double
    double *p_double = ary[3];
    printf("%f\n", *p_double);
    assert(p_double == &d);
    assert(*p_double == d);

//    test struct
    struct Person *pp = ary[4];
    printf("%s, %d\n", pp->name, pp->age);
    assert(pp = &person);
    assert(strcmp(pp->name, person.name) == 0);
    assert(pp->age = person.age);

    return 0;
}