/*
 *  Copyright (c) 2014 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "webrtc/modules/audio_coding/codecs/audio_encoder.h"

namespace webrtc {

AudioEncoder::EncodedInfo::EncodedInfo() : EncodedInfoLeaf() {
}

AudioEncoder::EncodedInfo::~EncodedInfo() {
}

int AudioEncoder::rtp_timestamp_rate_hz() const {
  return sample_rate_hz();
}

}  // namespace webrtc
