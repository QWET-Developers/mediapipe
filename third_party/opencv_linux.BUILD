# Description:
#   OpenCV libraries for video/image processing on Linux

licenses(["notice"])  # BSD license

exports_files(["LICENSE"])

# The following build rule assumes that OpenCV is installed by
# 'apt-get install libopencv-dev libopencv-contrib-dev'
# on Ubuntu 24.04 or similar.
# If you install OpenCV separately, please modify the build rule accordingly.
#
# For static library builds (cc_static_library), we use srcs instead of linkopts
# to ensure OpenCV shared libraries are bundled into the output.
cc_library(
    name = "opencv",
    srcs = glob([
        # x86_64 shared libraries
        "lib/x86_64-linux-gnu/libopencv_core.so*",
        "lib/x86_64-linux-gnu/libopencv_calib3d.so*",
        "lib/x86_64-linux-gnu/libopencv_features2d.so*",
        "lib/x86_64-linux-gnu/libopencv_highgui.so*",
        "lib/x86_64-linux-gnu/libopencv_imgcodecs.so*",
        "lib/x86_64-linux-gnu/libopencv_imgproc.so*",
        "lib/x86_64-linux-gnu/libopencv_video.so*",
        "lib/x86_64-linux-gnu/libopencv_videoio.so*",
        # aarch64 shared libraries
        "lib/aarch64-linux-gnu/libopencv_core.so*",
        "lib/aarch64-linux-gnu/libopencv_calib3d.so*",
        "lib/aarch64-linux-gnu/libopencv_features2d.so*",
        "lib/aarch64-linux-gnu/libopencv_highgui.so*",
        "lib/aarch64-linux-gnu/libopencv_imgcodecs.so*",
        "lib/aarch64-linux-gnu/libopencv_imgproc.so*",
        "lib/aarch64-linux-gnu/libopencv_video.so*",
        "lib/aarch64-linux-gnu/libopencv_videoio.so*",
    ]),
    hdrs = glob([
        # For OpenCV 4.x
        "include/aarch64-linux-gnu/opencv4/opencv2/cvconfig.h",
        "include/arm-linux-gnueabihf/opencv4/opencv2/cvconfig.h",
        "include/x86_64-linux-gnu/opencv4/opencv2/cvconfig.h",
        "include/opencv4/opencv2/**/*.h*",
    ]),
    includes = [
        # For OpenCV 4.x
        "include/aarch64-linux-gnu/opencv4/",
        "include/arm-linux-gnueabihf/opencv4/",
        "include/x86_64-linux-gnu/opencv4/",
        "include/opencv4/",
    ],
    linkstatic = 1,
    visibility = ["//visibility:public"],
)
