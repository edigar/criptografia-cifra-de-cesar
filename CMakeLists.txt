cmake_minimum_required(VERSION 3.26)
project(criptografia_cifra_de_cesar C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(criptografia_cifra_de_cesar
        cifradecesar.c
        file/crypt_file.c
        file/crypt_file.h
        file/handle_file.c
        file/handle_file.h
        presenter/cli.c
        presenter/cli.h
        file/file_validator.c
        file/file_validator.h
)
