#include "mytest.h"
JNIEXPORT jint JNICALL Java_com_example_day0714_13jni_MainActivity_add
  (JNIEnv * env, jobject obj, jint x, jint y){
	return x+y;
}
