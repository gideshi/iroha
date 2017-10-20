/**
 * Copyright Soramitsu Co., Ltd. 2017 All Rights Reserved.
 * http://soramitsu.co.jp
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IROHA_FILESYSTEM_HPP_
#define IROHA_FILESYSTEM_HPP_

#include <boost/optional.hpp>
#include <string>

namespace iroha {
  namespace filesystem {
    /**
     * Open file and read its contents in std::string.
     * @throws std::ios_base::failure if files does not exist.
     * @param path
     * @return
     */
    boost::optional<std::string> read_file(const std::string &path);
  }  // namespace filesystem
}  // namespace iroha

#endif  //  IROHA_FILESYSTEM_HPP_
