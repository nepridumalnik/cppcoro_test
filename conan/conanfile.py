# -*- coding: utf-8 -*-

from conans import ConanFile
from conans import CMake


class CppCoroProgram(ConanFile):
    settings = 'os', 'arch', 'compiler', 'build_type'
    generators = ['CMakeDeps', 'CMakeToolchain']

    def requirements(self) -> None:
        self.requires('andreasbuhr-cppcoro/cci.20210113')

    
    def build(self) -> None:
        cmake: CMake = CMake(self)

        cmake.configure()
        cmake.build()
