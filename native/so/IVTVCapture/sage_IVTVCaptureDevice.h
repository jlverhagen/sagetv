/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sage_IVTVCaptureDevice */

#ifndef _Included_sage_IVTVCaptureDevice
#define _Included_sage_IVTVCaptureDevice
#ifdef __cplusplus
extern "C" {
#endif
#undef sage_IVTVCaptureDevice_SM2210_ENCODER_MASK
#define sage_IVTVCaptureDevice_SM2210_ENCODER_MASK 1L
#undef sage_IVTVCaptureDevice_PYTHON2_ENCODER_MASK
#define sage_IVTVCaptureDevice_PYTHON2_ENCODER_MASK 2L
#undef sage_IVTVCaptureDevice_VBDVCR_ENCODER_MASK
#define sage_IVTVCaptureDevice_VBDVCR_ENCODER_MASK 4L
#undef sage_IVTVCaptureDevice_MICRONAS_AUDIO_MASK
#define sage_IVTVCaptureDevice_MICRONAS_AUDIO_MASK 8L
#undef sage_IVTVCaptureDevice_HCW_CAPTURE_MASK
#define sage_IVTVCaptureDevice_HCW_CAPTURE_MASK 16L
#undef sage_IVTVCaptureDevice_BLACKBIRD_CAPTURE_MASK
#define sage_IVTVCaptureDevice_BLACKBIRD_CAPTURE_MASK 32L
#undef sage_IVTVCaptureDevice_NEC61051_ENCODER_MASK
#define sage_IVTVCaptureDevice_NEC61051_ENCODER_MASK 64L
#undef sage_IVTVCaptureDevice_WISGO7007_ENCODER_MASK
#define sage_IVTVCaptureDevice_WISGO7007_ENCODER_MASK 128L
/*
 * Class:     sage_IVTVCaptureDevice
 * Method:    createEncoder0
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_sage_IVTVCaptureDevice_createEncoder0
  (JNIEnv *, jobject, jstring);

/*
 * Class:     sage_IVTVCaptureDevice
 * Method:    setupEncoding0
 * Signature: (JLjava/lang/String;J)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_IVTVCaptureDevice_setupEncoding0
  (JNIEnv *, jobject, jlong, jstring, jlong);

/*
 * Class:     sage_IVTVCaptureDevice
 * Method:    switchEncoding0
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_IVTVCaptureDevice_switchEncoding0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     sage_IVTVCaptureDevice
 * Method:    closeEncoding0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_IVTVCaptureDevice_closeEncoding0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_IVTVCaptureDevice
 * Method:    destroyEncoder0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sage_IVTVCaptureDevice_destroyEncoder0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_IVTVCaptureDevice
 * Method:    eatEncoderData0
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_sage_IVTVCaptureDevice_eatEncoderData0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_IVTVCaptureDevice
 * Method:    setChannel0
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_IVTVCaptureDevice_setChannel0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     sage_IVTVCaptureDevice
 * Method:    setInput0
 * Signature: (JIILjava/lang/String;II)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_IVTVCaptureDevice_setInput0
  (JNIEnv *, jobject, jlong, jint, jint, jstring, jint, jint);

/*
 * Class:     sage_IVTVCaptureDevice
 * Method:    setEncoding0
 * Signature: (JLjava/lang/String;Ljava/util/Map;)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_IVTVCaptureDevice_setEncoding0
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     sage_IVTVCaptureDevice
 * Method:    updateColors0
 * Signature: (JIIIII)[I
 */
JNIEXPORT jintArray JNICALL Java_sage_IVTVCaptureDevice_updateColors0
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint);

JNIEXPORT jint JNICALL Java_sage_LinuxIVTVCaptureManager_getCardI2CForDevice
  (JNIEnv *env, jclass c, jstring jdevName);

#ifdef __cplusplus
}
#endif
#endif
