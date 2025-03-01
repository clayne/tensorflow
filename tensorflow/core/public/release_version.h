/* Copyright 2015 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_CORE_PUBLIC_RELEASE_VERSION_H_
#define TENSORFLOW_CORE_PUBLIC_RELEASE_VERSION_H_

// TensorFlow uses semantic versioning, see http://semver.org/.

// Also update tensorflow/tensorflow.bzl and
// tensorflow/tools/pip_package/setup.py
#define TF_MAJOR_VERSION 2
#define TF_MINOR_VERSION 20
#define TF_PATCH_VERSION 0

// TF_VERSION_SUFFIX is non-empty for pre-releases (e.g. "-alpha", "-alpha.1",
// "-beta", "-rc", "-rc.1")
#define TF_VERSION_SUFFIX ""

#define _TF_STR_HELPER(x) #x
#define _TF_STR(x) _TF_STR_HELPER(x)

// e.g. "0.5.0" or "0.6.0-alpha".
#define TF_VERSION_STRING                                            \
  (_TF_STR(TF_MAJOR_VERSION) "." _TF_STR(TF_MINOR_VERSION) "." _TF_STR( \
      TF_PATCH_VERSION) TF_VERSION_SUFFIX)

#endif  // TENSORFLOW_CORE_PUBLIC_RELEASE_VERSION_H_
