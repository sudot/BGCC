/***********************************************************************
  * Copyright (c) 2012, Baidu Inc. All rights reserved.
  * 
  * Licensed under the BSD License
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  * 
  *      license.txt
  *********************************************************************/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bgcc_Protocol */

#ifndef _Included_bgcc_Protocol
#define _Included_bgcc_Protocol
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bgcc_Protocol
 * Method:    destroy
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_destroy
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeBool
 * Signature: (Z)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeBool
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     bgcc_Protocol
 * Method:    readBool
 * Signature: (Lbgcc/BooleanHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readBool__Lbgcc_BooleanHolder_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readBool
 * Signature: (JILbgcc/BooleanHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readBool__JILbgcc_BooleanHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeByte
 * Signature: (B)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeByte
  (JNIEnv *, jobject, jbyte);

/*
 * Class:     bgcc_Protocol
 * Method:    readByte
 * Signature: (Lbgcc/ByteHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readByte__Lbgcc_ByteHolder_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readByte
 * Signature: (JILbgcc/ByteHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readByte__JILbgcc_ByteHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeShort
 * Signature: (S)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeShort
  (JNIEnv *, jobject, jshort);

/*
 * Class:     bgcc_Protocol
 * Method:    readShort
 * Signature: (Lbgcc/ShortHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readShort__Lbgcc_ShortHolder_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readShort
 * Signature: (JILbgcc/ShortHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readShort__JILbgcc_ShortHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeInt
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeInt
  (JNIEnv *, jobject, jint);

/*
 * Class:     bgcc_Protocol
 * Method:    readInt
 * Signature: (Lbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readInt__Lbgcc_IntHolder_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readInt
 * Signature: (JILbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readInt__JILbgcc_IntHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeLong
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeLong
  (JNIEnv *, jobject, jlong);

/*
 * Class:     bgcc_Protocol
 * Method:    readLong
 * Signature: (Lbgcc/LongHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readLong__Lbgcc_LongHolder_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readLong
 * Signature: (JILbgcc/LongHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readLong__JILbgcc_LongHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeString
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeString
  (JNIEnv *, jobject, jstring);

/*
 * Class:     bgcc_Protocol
 * Method:    readString
 * Signature: (Lbgcc/StringHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readString__Lbgcc_StringHolder_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readString
 * Signature: (JILbgcc/StringHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readString__JILbgcc_StringHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeBinary
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeBinary
  (JNIEnv *, jobject, jstring);

/*
 * Class:     bgcc_Protocol
 * Method:    readBinary
 * Signature: (Lbgcc/StringHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readBinary__Lbgcc_StringHolder_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readBinary
 * Signature: (JILbgcc/StringHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readBinary__JILbgcc_StringHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeFloat
 * Signature: (F)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeFloat
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     bgcc_Protocol
 * Method:    readFloat
 * Signature: (Lbgcc/FloatHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readFloat__Lbgcc_FloatHolder_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readFloat
 * Signature: (JILbgcc/FloatHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readFloat__JILbgcc_FloatHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeMessageBegin
 * Signature: (Ljava/lang/String;Ljava/lang/String;Lbgcc/MessageType;I)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeMessageBegin
  (JNIEnv *, jobject, jstring, jstring, jobject, jint);

/*
 * Class:     bgcc_Protocol
 * Method:    readMessageBegin
 * Signature: (Lbgcc/StringHolder;Lbgcc/MessageTypeHolder;Lbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readMessageBegin__Lbgcc_StringHolder_2Lbgcc_MessageTypeHolder_2Lbgcc_IntHolder_2
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readMessageBegin
 * Signature: (JILbgcc/StringHolder;Lbgcc/MessageTypeHolder;Lbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readMessageBegin__JILbgcc_StringHolder_2Lbgcc_MessageTypeHolder_2Lbgcc_IntHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeMessageEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeMessageEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readMessageEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readMessageEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeStructBegin
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeStructBegin
  (JNIEnv *, jobject, jstring);

/*
 * Class:     bgcc_Protocol
 * Method:    readStructBegin
 * Signature: (Lbgcc/StringHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readStructBegin__Lbgcc_StringHolder_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readStructBegin
 * Signature: (JILbgcc/StringHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readStructBegin__JILbgcc_StringHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeStructEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeStructEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readStructEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readStructEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeFieldBegin
 * Signature: (Ljava/lang/String;Lbgcc/DataType;I)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeFieldBegin
  (JNIEnv *, jobject, jstring, jobject, jint);

/*
 * Class:     bgcc_Protocol
 * Method:    writeFieldEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeFieldEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readFieldBegin
 * Signature: (Lbgcc/StringHolder;Lbgcc/DataTypeHolder;Lbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readFieldBegin__Lbgcc_StringHolder_2Lbgcc_DataTypeHolder_2Lbgcc_IntHolder_2
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readFieldBegin
 * Signature: (JILbgcc/StringHolder;Lbgcc/DataTypeHolder;Lbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readFieldBegin__JILbgcc_StringHolder_2Lbgcc_DataTypeHolder_2Lbgcc_IntHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readFieldEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readFieldEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeFieldStop
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeFieldStop
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeMapBegin
 * Signature: (Lbgcc/DataType;Lbgcc/DataType;I)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeMapBegin
  (JNIEnv *, jobject, jobject, jobject, jint);

/*
 * Class:     bgcc_Protocol
 * Method:    writeMapEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeMapEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readMapBegin
 * Signature: (Lbgcc/DataTypeHolder;Lbgcc/DataTypeHolder;Lbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readMapBegin__Lbgcc_DataTypeHolder_2Lbgcc_DataTypeHolder_2Lbgcc_IntHolder_2
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readMapBegin
 * Signature: (JILbgcc/DataTypeHolder;Lbgcc/DataTypeHolder;Lbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readMapBegin__JILbgcc_DataTypeHolder_2Lbgcc_DataTypeHolder_2Lbgcc_IntHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readMapEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readMapEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeSetBegin
 * Signature: (Lbgcc/DataType;I)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeSetBegin
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     bgcc_Protocol
 * Method:    readSetBegin
 * Signature: (Lbgcc/DataTypeHolder;Lbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readSetBegin__Lbgcc_DataTypeHolder_2Lbgcc_IntHolder_2
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readSetBegin
 * Signature: (JILbgcc/DataTypeHolder;Lbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readSetBegin__JILbgcc_DataTypeHolder_2Lbgcc_IntHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeSetEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeSetEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readSetEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readSetEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeListBegin
 * Signature: (Lbgcc/DataType;I)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeListBegin
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     bgcc_Protocol
 * Method:    readListBegin
 * Signature: (Lbgcc/DataTypeHolder;Lbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readListBegin__Lbgcc_DataTypeHolder_2Lbgcc_IntHolder_2
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readListBegin
 * Signature: (JILbgcc/DataTypeHolder;Lbgcc/IntHolder;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readListBegin__JILbgcc_DataTypeHolder_2Lbgcc_IntHolder_2
  (JNIEnv *, jobject, jlong, jint, jobject, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    writeListEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_writeListEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    readListEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_readListEnd
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Protocol
 * Method:    skip
 * Signature: (Lbgcc/DataType;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Protocol_skip
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif