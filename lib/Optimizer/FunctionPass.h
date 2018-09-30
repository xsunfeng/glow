/**
 * Copyright (c) 2017-present, Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef OPTIMIZER_FUNCTION_PASS_H
#define OPTIMIZER_FUNCTION_PASS_H

namespace glow {

class Function;

/// A high level class (that will be) shared by all optimizers.
class FunctionPass {
public:
  FunctionPass() = default;

  virtual ~FunctionPass() = default;

  /// \returns true if the optimizer changes something.
  virtual bool run(Function *F) = 0;

  /// \returns the name of the optimizer.
  virtual const llvm::StringRef getName() const = 0;
};

} // namespace glow

#endif // OPTIMIZER_FUNCTION_PASS_H