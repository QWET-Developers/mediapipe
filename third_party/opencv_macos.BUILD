# Description:
#   OpenCV libraries for video/image processing on MacOS

load("@bazel_skylib//lib:paths.bzl", "paths")

licenses(["notice"])  # BSD license

exports_files(["LICENSE"])

# Example configurations:
#
# # OpenCV 3
# To configure OpenCV 3, obtain the path of OpenCV 3 from Homebrew. The
# following commands show the output of the command with version 3.4.16_10:
#
# $ brew ls opencv@3 | grep version.hpp
# $ /opt/homebrew/Cellar/opencv@3/3.4.16_10/include/opencv2/core/version.hpp
#
# Then set path in "macos_opencv" rule in the WORKSPACE file to
# "/opt/homebrew/Cellar" and the PREFIX below to "opencv/<version>" (e.g.
# "opencv/3.4.16_10" for the example above).
#
# # OpenCV 4
# To configure OpenCV 4, obtain the path of OpenCV 4 from Homebrew. The
# following commands show the output of the command with version 4.10.0_12:
#
# $ brew ls opencv | grep version.hpp
# $ /opt/homebrew/Cellar/opencv/4.10.0_12/include/opencv4/opencv2/core/version.hpp
# $ /opt/homebrew/Cellar/opencv/4.10.0_12/include/opencv4/opencv2/dnn/version.hpp
#
# Then set path in "macos_opencv" rule in the WORKSPACE file to
# "/opt/homebrew/Cellar" and the PREFIX below to "opencv/<version>" (e.g.
# "opencv/4.10.0_12" for the example above). For OpenCV 4, you will also need to
# adjust the include paths. The header search path should be
# "include/opencv4/opencv2/**/*.h*" and the include prefix needs to be set to
# "include/opencv4".

# OpenCV 4 configuration - Static library build for self-contained distribution
# Path is set to /usr/local/opencv4 in WORKSPACE (symlinked from Homebrew)
#
# Using cc_import for static libraries (.a) to properly bundle OpenCV
# into the final static library without external dependencies.

cc_import(
    name = "opencv_core",
    static_library = "lib/libopencv_core.a",
    alwayslink = True,
)

cc_import(
    name = "opencv_calib3d",
    static_library = "lib/libopencv_calib3d.a",
    alwayslink = True,
)

cc_import(
    name = "opencv_features2d",
    static_library = "lib/libopencv_features2d.a",
    alwayslink = True,
)

cc_import(
    name = "opencv_flann",
    static_library = "lib/libopencv_flann.a",
    alwayslink = True,
)

cc_import(
    name = "opencv_highgui",
    static_library = "lib/libopencv_highgui.a",
    alwayslink = True,
)

cc_import(
    name = "opencv_imgcodecs",
    static_library = "lib/libopencv_imgcodecs.a",
    alwayslink = True,
)

cc_import(
    name = "opencv_imgproc",
    static_library = "lib/libopencv_imgproc.a",
    alwayslink = True,
)

cc_import(
    name = "opencv_video",
    static_library = "lib/libopencv_video.a",
    alwayslink = True,
)

cc_import(
    name = "opencv_videoio",
    static_library = "lib/libopencv_videoio.a",
    alwayslink = True,
)

cc_library(
    name = "opencv",
    hdrs = glob(["include/opencv4/opencv2/**/*.h*"]),
    includes = ["include/opencv4/"],
    visibility = ["//visibility:public"],
    deps = [
        ":opencv_core",
        ":opencv_calib3d",
        ":opencv_features2d",
        ":opencv_flann",
        ":opencv_highgui",
        ":opencv_imgcodecs",
        ":opencv_imgproc",
        ":opencv_video",
        ":opencv_videoio",
    ],
)
