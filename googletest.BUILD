package(default_visibility = ["//visibility:public"])

licenses(["notice"])  # BSD 3-clause

filegroup(
    name = "license",
    srcs = ["LICENSE"],
)

cc_library(
    name = "googletest",
    srcs = glob(
        ["googletest/src/*.cc",
         "googletest/src/*.h"],
        exclude = ["googletest/src/gtest-all.cc"]
    ),
    hdrs = glob([
        "googletest/include/**/*.h",
        "googletest/**/*.h"
    ]),
    copts = [
        "-pthread",
        "-Iexternal/googletest_git/googletest",
        "-Iexternal/googletest_git/googletest/include",
        "-Iexternal/googletest_git/googletest/include/internal",
        "-Iexternal/googletest_git/googletest/include/internal/custom",
    ],
    includes = [
        "include",
    ],
    visibility = ["//visibility:public"],
)
