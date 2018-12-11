/* Copyright © 2017 Apple Inc. All rights reserved.
 *
 * Use of this source code is governed by a BSD-3-clause license that can
 * be found in the LICENSE.txt file or at https://opensource.org/licenses/BSD-3-Clause
 */
#include "Validators.hpp"
#include "ValidatorUtils-inl.hpp"
#include "unity/toolkits/coreml_export/protobuf_include_internal.hpp"

namespace CoreML {
    
    template <>
    Result validate<MLModelType_identity>(const Specification::Model&) {
        // all identities are valid
        return Result();
    }
    
}
