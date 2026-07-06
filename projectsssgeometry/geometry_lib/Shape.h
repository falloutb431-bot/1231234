#pragma once
#include <string>
#include <vector>

#ifdef _WIN32
#ifdef GEOMETRY_LIB_EXPORTS
#define GEOM_API __declspec(dllexport)
#else
#define GEOM_API __declspec(dllimport)
#endif
#else
#define GEOM_API
#endif

class GEOM_API Shape {
public:
    virtual ~Shape() = default;
    virtual std::string type() const = 0;
    virtual std::string sides() const = 0;
    virtual std::string angles() const = 0;
};