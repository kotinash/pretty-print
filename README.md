# pretty-print

A C++ library for pretty printing

## Example usage

```cpp
int main() {
    struct Vec2 {
        float x, y;
    };

    struct Vec3 {
        float x, y, z;
    };

    struct Vec4 {
        float x, y, z, w;
    };

    Vec2 v2 = Vec2();
    Vec3 v3 = Vec3();
    Vec4 v4 = Vec4();

    // there's also prettyprint::to_string() which will only work for vectors, arrays and booleans

    println(prettyprint::bool_to_string(true));
    println(prettyprint::bool_to_string(false));
    println(prettyprint::vec2_to_string(v2));
    println(prettyprint::vec3_to_string(v3));
    println(prettyprint::vec4_to_string(v4));

    return 0;
}
```
