#include <iostream>
#include <vector>
#include <string>

#define println(m) std::cout << m << std::endl;

class prettyprint {
    public:
        template <typename U>
        inline static std::string vec4_to_string(U vec) {
            return "Vec4(" + std::to_string(vec.x) + ", " + std::to_string(vec.y) + ", " + std::to_string(vec.z) + ", " + std::to_string(vec.w) + ")";
        }
        
        template <typename U>
        inline static std::string vec3_to_string(U vec) {
            return "Vec3(" + std::to_string(vec.x) + ", " + std::to_string(vec.y) + ", " + std::to_string(vec.z) + ")";
        }

        template <typename U>
        inline static std::string vec2_to_string(U vec) {
            return "Vec2(" + std::to_string(vec.x) + ", " + std::to_string(vec.y) + ")";
        }

        template <typename U>
        static std::string vector_to_string(const std::vector<U>& vec) {
            std::string result = "[";
            for (std::size_t i = 0; i < vec.size(); ++i) {
                result += std::to_string(vec[i]);
            
                if (i < vec.size() - 1) {
                    result += ", ";
                }
            }

            result += "]";

            return result;
        }

        template <typename U, std::size_t N>
        static std::string array_to_string(const std::array<U, N>& arr) {
            std::string result = "[";
        
            for (std::size_t i = 0; i < N; ++i) {
                result += std::to_string(arr[i]);
                
                if (i < N - 1) {
                    result += ", ";
                }
            }
            
            result += "]";
            
            return result;
        }

        inline static std::string bool_to_string(bool b) {
            return b ? "true" : "false";
        }

        // useless
        inline static std::string null_to_string() {
            return "null";
        }

        inline static std::string to_string(bool b) {
            return bool_to_string(b);
        }

        template <typename U>
        inline static std::string to_string(const std::vector<U>& vec) {
            return vector_to_string(vec);
        }

        template <typename U, std::size_t N>
        inline static std::string to_string(const std::array<U, N>& arr) {
            return array_to_string(arr);
        }

        template <typename U>
        inline static std::string to_string(const U& value) {
            return value->pretty_print();
        }
};
