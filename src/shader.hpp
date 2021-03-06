#ifndef LOGL_SHADER_HPP
#define LOGL_SHADER_HPP

#include <glm/glm.hpp>

#include <filesystem>

namespace fs = std::filesystem;

class shader {
public:
    shader(fs::path vertex_shader_path, fs::path fragment_shader_path);
    void use() const noexcept;
    void uniform(const std::string& name, float value) const noexcept;
    void uniform(const std::string& name, int value) const noexcept;
    void uniform(const std::string& name, unsigned int value) const noexcept;
    void uniform(const std::string& name, const glm::mat4& matrix) const noexcept;

private:
    unsigned int id;
};

#endif // LOGL_SHADER_HPP
