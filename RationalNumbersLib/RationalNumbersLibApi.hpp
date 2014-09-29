#ifdef RATIONALNUMBERSLIB_EXPORTS
#define RATIONALNUMBERSLIB_API __declspec(dllexport)
#else
#define RATIONALNUMBERSLIB_API __declspec(dllimport)
#endif