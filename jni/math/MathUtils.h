/** DO NOT EDIT THIS FILE - it is machine generated */
#include "../global/functions.h"
/** Header for class org_ice1000_util_MathUtils */

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#ifndef _Included_org_ice1000_math_MathUtils
#define _Included_org_ice1000_math_MathUtils

#ifdef __cplusplus
extern "C" {
#endif /// __cplusplus

#undef org_ice1000_math_MathUtils_E
#define org_ice1000_math_MathUtils_E 2.718281828459045

#undef org_ice1000_math_MathUtils_PI
#define org_ice1000_math_MathUtils_PI 3.141592653589793

/// 0x5F3759DF thank you Carmack
#undef org_ice1000_math_MathUtils_MAGIC_NUMBER
#define org_ice1000_math_MathUtils_MAGIC_NUMBER 1597463007L

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    gcd
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_math_MathUtils_gcd(
		JNIEnv *,
		jclass,
		jlong,
		jlong
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    exgcd
 * Signature: ([JJ)J
 */
JNIEXPORT jlongArray JNICALL Java_org_ice1000_math_MathUtils_exgcdJni(
		JNIEnv *,
		jclass,
		jlong,
		jlong
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    gcdStein
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_math_MathUtils_gcdStein(
		JNIEnv *,
		jclass,
		jlong,
		jlong
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    sqrtCarmark
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_math_MathUtils_sqrtCarmark(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    sqrt
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_math_MathUtils_sqrt(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    fastPlus
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_math_MathUtils_fastPlus(
		JNIEnv *,
		jclass,
		jlong,
		jlong,
		jlong
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    fastPower
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_math_MathUtils_fastPower(
		JNIEnv *,
		jclass,
		jlong,
		jlong,
		jlong
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    abs
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_math_MathUtils_abs__D(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    abs
 * Signature: (F)F
 */
JNIEXPORT jfloat JNICALL Java_org_ice1000_math_MathUtils_abs__F(
		JNIEnv *,
		jclass,
		jfloat
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    abs
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_ice1000_math_MathUtils_abs__I(
		JNIEnv *,
		jclass,
		jint
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    abs
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_math_MathUtils_abs__J(
		JNIEnv *,
		jclass,
		jlong
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    max
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_math_MathUtils_max__JJ(
		JNIEnv *,
		jclass,
		jlong,
    jlong
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:		max
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_math_MathUtils_max__II(
		JNIEnv *,
		jclass,
    jint,
    jint
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    max
 * Signature: (FF)F
 */
JNIEXPORT jfloat JNICALL Java_org_ice1000_math_MathUtils_max__FF(
		JNIEnv *,
		jclass,
		jfloat,
		jfloat
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    max
 * Signature: (DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_math_MathUtils_max__DD(
		JNIEnv *,
		jclass,
		jdouble,
		jdouble
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    min
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_ice1000_math_MathUtils_min__II(
		JNIEnv *,
		jclass,
		jint,
		jint
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    min
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_ice1000_math_MathUtils_min__JJ(
		JNIEnv *,
		jclass,
		jlong,
		jlong
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    min
 * Signature: (FF)F
 */
JNIEXPORT jfloat JNICALL Java_org_ice1000_math_MathUtils_min__FF(
		JNIEnv *,
		jclass,
		jfloat,
		jfloat
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    min
 * Signature: (DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_math_MathUtils_min__DD(
		JNIEnv *,
		jclass,
		jdouble,
		jdouble
);


/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    ln
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_math_MathUtils_ln(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    lg
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_org_ice1000_math_MathUtils_lg(
		JNIEnv *,
		jclass,
		jdouble
);

/**
 * Class:     org_ice1000_math_MathUtils
 * Method:    isPrime
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_ice1000_math_MathUtils_isPrime(
		JNIEnv *,
		jclass,
		jlong
);


#ifdef __cplusplus
}
#endif /// __cplusplus

#endif /// _Included_org_ice1000_math_MathUtils

#pragma clang diagnostic pop