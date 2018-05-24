#include <org_opencv_samples_tutorial4_NativePart.h>

JNIEXPORT jint JNICALL Java_org_opencv_samples_tutorial4_NativePart_initCL
  (JNIEnv *env, jclass obj){

  }

/*
 * Class:     org_opencv_samples_tutorial4_NativePart
 * Method:    closeCL
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_opencv_samples_tutorial4_NativePart_closeCL
  (JNIEnv *env, jclass obj);

/*
 * Class:     org_opencv_samples_tutorial4_NativePart
 * Method:    processFrame
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_org_opencv_samples_tutorial4_NativePart_processFrame
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);


