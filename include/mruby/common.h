/**
** @file common.h - mruby common platform definition"
**
** See Copyright Notice in mruby.h
*/

#ifndef MRUBY_COMMON_H
#define MRUBY_COMMON_H

#ifdef __APPLE__
  #ifndef __TARGETCONDITIONALS__
  #include "TargetConditionals.h"
  #endif
#endif

/** Start declarations in C mode */
# define MRB_BEGIN_DECL
/** End declarations in C mode */
# define MRB_END_DECL

/**
 * Shared compiler macros
 */
MRB_BEGIN_DECL

/** Declare a function that never returns. */
#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 201112L
# define mrb_noreturn _Noreturn
#elif defined __GNUC__ && !defined __STRICT_ANSI__
# define mrb_noreturn __attribute__((noreturn))
#elif defined _MSC_VER
# define mrb_noreturn __declspec(noreturn)
#else
# define mrb_noreturn
#endif

/** Mark a function as deprecated. */
#if defined __GNUC__ && !defined __STRICT_ANSI__
# define mrb_deprecated __attribute__((deprecated))
#elif defined _MSC_VER
# define mrb_deprecated __declspec(deprecated)
#else
# define mrb_deprecated
#endif

/** Declare a function as always inlined. */
#if defined _MSC_VER && _MSC_VER < 1900
# ifndef __cplusplus
#  define inline __inline
# endif
#endif
#define MRB_INLINE static inline

/** Declare a public MRuby API function. */
#ifndef MRB_API
#if defined(MRB_BUILD_AS_DLL)
#if defined(MRB_CORE) || defined(MRB_LIB)
# define MRB_API __declspec(dllexport)
#else
# define MRB_API __declspec(dllimport)
#endif
#else
# define MRB_API extern
#endif
#endif

MRB_END_DECL

#endif  /* MRUBY_COMMON_H */
