/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intervigil_micdroid_AutoTalent */

#ifndef _Included_com_intervigil_micdroiddonate_pitch_AutoTalent
#define _Included_com_intervigil_micdroiddonate_pitch_AutoTalent
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intervigil_micdroid_AutoTalent
 * Method:    instantiateAutoTalent
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_intervigil_micdroiddonate_pitch_AutoTalent_instantiateAutoTalent
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_intervigil_micdroid_AutoTalent
 * Method:    initializeAutoTalent
 * Signature: (FCFFFFFIFFFFIIFF)V
 */
JNIEXPORT void JNICALL Java_com_intervigil_micdroiddonate_pitch_AutoTalent_initializeAutoTalent
  (JNIEnv *, jclass, jfloat, jchar, jfloat, jfloat, jfloat, jfloat, jfloat, jint, jfloat, jfloat, jfloat, jfloat, jint, jint, jfloat, jfloat);

/*
 * Class:     com_intervigil_micdroid_AutoTalent
 * Method:    processSamples
 * Signature: ([SI)V
 */
JNIEXPORT void JNICALL Java_com_intervigil_micdroiddonate_pitch_AutoTalent_processSamples
  (JNIEnv *, jclass, jshortArray, jint);

/*
 * Class:     com_intervigil_micdroid_AutoTalent
 * Method:    processMixSamples
 * Signature: ([S[SI)V
 */
JNIEXPORT void JNICALL Java_com_intervigil_micdroid_pitch_AutoTalent_processMixSamples
  (JNIEnv *, jclass, jshortArray, jshortArray, jint);

/*
 * Class:     com_intervigil_micdroid_AutoTalent
 * Method:    destroyAutoTalent
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_intervigil_micdroiddonate_pitch_AutoTalent_destroyAutoTalent
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
