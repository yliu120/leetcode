# leetcode playground
A playground for writing, building and testing leetcode problems in C++.

This is a simple playground setup for writing and testing leetcode/other problems locally using C++ standard library.
For simplicity of compilation and testing, several google's open source libraries are used:

+ bazel
+ googletest
+ glog

Bazel is used for providing a structural and simple "Makefile". By adding your own solutions for questions, you can
simply go to the leetcode folder and add a header file named as "leetcode_152.h". Write your solution in that file.
Write a simple test file named as "leetcode_152_test.cc". (When including header files, you only have to include
"base/cpp_standards.h")

Then simply append the following to the BUILD file in the leetcode folder.

~~~~
cc_test(
    name = "leetcode_152_test",
    srcs = ["leetcode_152_test.cc",
            "leetcode_152.h"],
    copts = ["-Iexternal/googletest_git/googletest/include"],
    deps = ["//base",
            "//external:glog",
            "//external:gtest",
    ],
)
~~~~

Then build and run the test by typing 

~~~~
bazel test leetcode_152_test
~~~~

under leetcode/ folder.
