/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_catacombae_hfsexplorer_win32_WritableWin32File */

#ifndef _Included_org_catacombae_hfsexplorer_win32_WritableWin32File
#define _Included_org_catacombae_hfsexplorer_win32_WritableWin32File
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_catacombae_hfsexplorer_win32_WritableWin32File
 * Method:    openNative
 * Signature: (Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_catacombae_hfsexplorer_win32_WritableWin32File_openNative
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_catacombae_hfsexplorer_win32_WritableWin32File
 * Method:    write
 * Signature: ([BII[B)V
 */
JNIEXPORT void JNICALL Java_org_catacombae_hfsexplorer_win32_WritableWin32File_write
  (JNIEnv *, jclass, jbyteArray, jint, jint, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif