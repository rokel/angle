//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// MemoryObject.h: Defines the gl::MemoryObject class [EXT_external_objects]

#ifndef LIBANGLE_MEMORYOBJECT_H_
#define LIBANGLE_MEMORYOBJECT_H_

#include "angle_gl.h"
#include "common/angleutils.h"
#include "libANGLE/Error.h"
#include "libANGLE/RefCountObject.h"

namespace rx
{
class GLImplFactory;
class MemoryObjectImpl;
}  // namespace rx

namespace gl
{

class MemoryObject final : public RefCountObject
{
  public:
    MemoryObject(rx::GLImplFactory *factory, GLuint id);
    ~MemoryObject() override;

    void onDestroy(const Context *context) override;

  private:
    std::unique_ptr<rx::MemoryObjectImpl> mImplementation;
};

}  // namespace gl

#endif  // LIBANGLE_MEMORYOBJECT_H_
