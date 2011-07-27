/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ca_halsafar_snesdroid_Emulator */

#ifndef _Included_ca_halsafar_snesdroid_Emulator
#define _Included_ca_halsafar_snesdroid_Emulator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    init
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ca_halsafar_snesdroid_Emulator_init
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setPaths
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ca_halsafar_snesdroid_Emulator_setPaths
  (JNIEnv *, jclass, jstring, jstring, jstring, jstring, jstring);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    initGraphics
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ca_halsafar_snesdroid_Emulator_initGraphics
  (JNIEnv *, jclass);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    initAudioBuffer
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_ca_halsafar_snesdroid_Emulator_initAudioBuffer
  (JNIEnv *, jclass, jint);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    loadRom
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ca_halsafar_snesdroid_Emulator_loadRom
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    isRomLoaded
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ca_halsafar_snesdroid_Emulator_isRomLoaded
  (JNIEnv *, jclass);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    onTouchDown
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_onTouchDown
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    onTouchUp
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_onTouchUp
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    onTouchMove
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_onTouchMove
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    onKeyDown
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_onKeyDown
  (JNIEnv *, jclass, jint);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    onKeyUp
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_onKeyUp
  (JNIEnv *, jclass, jint);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    mixAudioBuffer
 * Signature: ([S)I
 */
JNIEXPORT jint JNICALL Java_ca_halsafar_snesdroid_Emulator_mixAudioBuffer
  (JNIEnv *, jclass, jshortArray);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setAudioSampleRate
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setAudioSampleRate
  (JNIEnv *, jclass, jint);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setAudioEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setAudioEnabled
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setSensitivity
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setSensitivity
  (JNIEnv *, jclass, jfloat, jfloat);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setButton
 * Signature: (IFFFFIZ)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setButton
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat, jfloat, jint, jboolean);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setAnalog
 * Signature: (FFFFIIIIZ)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setAnalog
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jfloat, jint, jint, jint, jint, jboolean);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setShaderFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setShaderFile
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setSmoothFiltering
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setSmoothFiltering
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setViewport
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setViewport
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    saveState
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_saveState
  (JNIEnv *, jclass, jint);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    loadState
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_loadState
  (JNIEnv *, jclass, jint);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    selectState
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_selectState
  (JNIEnv *, jclass, jint);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setEnableRewind
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setEnableRewind
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    resetGame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_resetGame
  (JNIEnv *, jclass);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    unzipFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_unzipFile
  (JNIEnv *, jclass, jstring, jstring, jstring);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setAspectRatio
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setAspectRatio
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setFrameSkip
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setFrameSkip
  (JNIEnv *, jclass, jint);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    setGameGenie
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_setGameGenie
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_destroy
  (JNIEnv *, jclass);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    step
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_step
  (JNIEnv *, jclass);

/*
 * Class:     ca_halsafar_snesdroid_Emulator
 * Method:    draw
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ca_halsafar_snesdroid_Emulator_draw
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
