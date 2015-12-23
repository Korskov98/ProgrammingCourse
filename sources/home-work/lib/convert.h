#ifndef CONVERT
#define CONVERT
#ifdef __cplusplus
extern "C"{
#endif

struct measure_units{
    int ft;
    int yd;
    int m;
};

void convert(struct measure_units* arg);

#ifdef __cplusplus
}
#endif

#endif // CONVERT

