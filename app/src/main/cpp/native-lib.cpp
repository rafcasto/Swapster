#include <jni.h>
#include <string>

extern "C"
jstring
Java_nz_co_fanvel_swapster_ListProducts_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
