#ifndef NIRYO_ONE_MSGS__VISIBILITY_CONTROL_H_
#define NIRYO_ONE_MSGS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define NIRYO_ONE_MSGS_EXPORT __attribute__ ((dllexport))
    #define NIRYO_ONE_MSGS_IMPORT __attribute__ ((dllimport))
  #else
    #define NIRYO_ONE_MSGS_EXPORT __declspec(dllexport)
    #define NIRYO_ONE_MSGS_IMPORT __declspec(dllimport)
  #endif
  #ifdef NIRYO_ONE_MSGS_BUILDING_LIBRARY
    #define NIRYO_ONE_MSGS_PUBLIC NIRYO_ONE_MSGS_EXPORT
  #else
    #define NIRYO_ONE_MSGS_PUBLIC NIRYO_ONE_MSGS_IMPORT
  #endif
  #define NIRYO_ONE_MSGS_PUBLIC_TYPE NIRYO_ONE_MSGS_PUBLIC
  #define NIRYO_ONE_MSGS_LOCAL
#else
  #define NIRYO_ONE_MSGS_EXPORT __attribute__ ((visibility("default")))
  #define NIRYO_ONE_MSGS_IMPORT
  #if __GNUC__ >= 4
    #define NIRYO_ONE_MSGS_PUBLIC __attribute__ ((visibility("default")))
    #define NIRYO_ONE_MSGS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define NIRYO_ONE_MSGS_PUBLIC
    #define NIRYO_ONE_MSGS_LOCAL
  #endif
  #define NIRYO_ONE_MSGS_PUBLIC_TYPE
#endif
#endif  // NIRYO_ONE_MSGS__VISIBILITY_CONTROL_H_
// Generated 26-Apr-2021 12:58:38
// Copyright 2019-2020 The MathWorks, Inc.
