git_repository(
    name = "gflags_git",
    commit = "f4eace133187e0a101a6d6d71c55592b572de189",
    remote = "https://github.com/gflags/gflags.git",
)

bind(
    name = "gflags",
    actual = "@gflags_git//:gflags",
)

new_git_repository(
    name = "glog_git",
    build_file = "glog.BUILD",
    commit = "0472b91c5defdf90cff7292e3bf7bd86770a9a0a",
    remote = "https://github.com/google/glog.git",
)

bind(
    name = "glog",
    actual = "@glog_git//:glog",
)

new_git_repository(
    name = "googletest_git",
    build_file = "googletest.BUILD",
    remote = "https://github.com/google/googletest.git",
    tag = "release-1.8.0",
)

bind(
    name = "gtest",
    actual = "@googletest_git//:googletest",
)

bind(
    name = "headers",
    actual = "//third_party/googlelog:headers",
)
