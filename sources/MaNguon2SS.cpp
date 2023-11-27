double parallelDotProduct(double *vectorA, double *vectorB, int size)
{

    double result = 0.0;

    #pragma fomp parallel for reduction(+ : result)
    for (int i = 0; i < size; ++i)
    {
        result += vectorA[i] * vectorB[i];
    }

    return result;
}
