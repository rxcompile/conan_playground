from conans import ConanFile, CMake

class ConanPlaygroundConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "cmake"
    default_options = {}

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
        if self.should_test:
            self.run("ctest .")

    def requirements(self):
        self.requires("gtest/1.8.1@bincrafters/stable")
        self.requires("boost/1.68.0@conan/stable")

    def imports(self):
        self.copy("*.dll", dst="bin", src="bin")
        self.copy("*.dylib*", dst="bin", src="lib")
        self.copy("*.so", dst="bin", src="lib")
