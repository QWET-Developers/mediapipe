// Dummy main for static linking - this file is only used to force
// static linking of all dependencies. The resulting binary can be
// used to extract object files or verify linkage.

#include "mediapipe/tasks/c/vision/pose_landmarker/pose_landmarker.h"

int main() {
  // Reference all exported symbols to prevent dead code elimination
  (void)&MpPoseLandmarkerCreate;
  (void)&MpPoseLandmarkerDetectImage;
  (void)&MpPoseLandmarkerDetectForVideo;
  (void)&MpPoseLandmarkerDetectAsync;
  (void)&MpPoseLandmarkerCloseResult;
  (void)&MpPoseLandmarkerClose;
  return 0;
}
