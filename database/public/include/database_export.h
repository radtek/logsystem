/*

*/

#ifndef DATABASE_EXPORT_H_
#define DATABASE_EXPORT_H_

#if defined(DATABASE_IMPLEMENTATION)
#define DATABASE_EXPORT               SYMBOL_EXPORT
#define DATABASE_EXPORT_PRIVATE       SYMBOL_EXPORT
#else
#define DATABASE_EXPORT
#define DATABASE_EXPORT_PRIVATE
#endif  // defined(DATABASE_IMPLEMENTATION)

#endif // DATABASE_EXPORT_H_
