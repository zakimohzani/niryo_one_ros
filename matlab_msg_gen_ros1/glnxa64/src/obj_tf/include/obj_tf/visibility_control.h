#ifndef OBJ_TF__VISIBILITY_CONTROL_H_
#define OBJ_TF__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define OBJ_TF_EXPORT __attribute__ ((dllexport))
    #define OBJ_TF_IMPORT __attribute__ ((dllimport))
  #else
    #define OBJ_TF_EXPORT __declspec(dllexport)
    #define OBJ_TF_IMPORT __declspec(dllimport)
  #endif
  #ifdef OBJ_TF_BUILDING_LIBRARY
    #define OBJ_TF_PUBLIC OBJ_TF_EXPORT
  #else
    #define OBJ_TF_PUBLIC OBJ_TF_IMPORT
  #endif
  #define OBJ_TF_PUBLIC_TYPE OBJ_TF_PUBLIC
  #define OBJ_TF_LOCAL
#else
  #define OBJ_TF_EXPORT __attribute__ ((visibility("default")))
  #define OBJ_TF_IMPORT
  #if __GNUC__ >= 4
    #define OBJ_TF_PUBLIC __attribute__ ((visibility("default")))
    #define OBJ_TF_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define OBJ_TF_PUBLIC
    #define OBJ_TF_LOCAL
  #endif
  #define OBJ_TF_PUBLIC_TYPE
#endif
#endif  // OBJ_TF__VISIBILITY_CONTROL_H_
// Generated 26-Apr-2021 12:58:39
// Copyright 2019-2020 The MathWorks, Inc.
