/** DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/** Header for class org_ice1000_seg_SegmentTree */

#ifndef _Included_org_ice1000_seg_SegmentTree
#define _Included_org_ice1000_seg_SegmentTree

#ifdef __cplusplus
extern "C" {
#endif /// __cplusplus

/**
 * Class:     org_ice1000_seg_SegmentTree
 * Method:    build
 * Signature: ([J[JI)V
 */
JNIEXPORT void JNICALL Java_org_ice1000_seg_SegmentTree_build___3J_3JI(
  JNIEnv *,
  jobject,
  jlongArray,
  jlongArray,
  jint
);

/**
 * Class:     org_ice1000_seg_SegmentTree
 * Method:    build
 * Signature: ([JI)V
 */
JNIEXPORT void JNICALL Java_org_ice1000_seg_SegmentTree_build___3JI(
  JNIEnv *,
  jobject,
  jlongArray,
  jint
);

/**
 * Class:     org_ice1000_seg_SegmentTree
 * Method:    query
 * Signature: ([JIIII)V
 */
JNIEXPORT void JNICALL Java_org_ice1000_seg_SegmentTree_query(
  JNIEnv *,
  jobject,
  jlongArray,
  jint,
  jint,
  jint,
  jint
);

/**
 * Class:     org_ice1000_seg_SegmentTree
 * Method:    update
 * Signature: ([JI)V
 */
JNIEXPORT void JNICALL Java_org_ice1000_seg_SegmentTree_update(
  JNIEnv *,
  jobject,
  jlongArray,
  jint
);

#ifdef __cplusplus
}
#endif /// __cplusplus

#endif /// _Included_org_ice1000_seg_SegmentTree

