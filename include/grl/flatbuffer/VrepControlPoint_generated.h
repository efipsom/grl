// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_VREPCONTROLPOINT_GRL_FLATBUFFER_H_
#define FLATBUFFERS_GENERATED_VREPCONTROLPOINT_GRL_FLATBUFFER_H_

#include "flatbuffers/flatbuffers.h"

#include "Euler_generated.h"
#include "Geometry_generated.h"

namespace grl {
namespace flatbuffer {

struct VrepControlPoint;
struct VrepControlPointT;

struct VrepControlPointT : public flatbuffers::NativeTable {
  typedef VrepControlPoint TableType;
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "grl.flatbuffer.VrepControlPointT";
  }
  std::unique_ptr<Vector3d> position;
  std::unique_ptr<EulerXYZd> rotation;
  double relativeVelocity;
  int32_t bezierPointCount;
  double interpolationFactor1;
  double interpolationFactor2;
  double virtualDistance;
  int32_t auxiliaryFlags;
  double auxiliaryChannel1;
  double auxiliaryChannel2;
  double auxiliaryChannel3;
  double auxiliaryChannel4;
  VrepControlPointT()
      : relativeVelocity(1.0),
        bezierPointCount(1),
        interpolationFactor1(0.5),
        interpolationFactor2(0.5),
        virtualDistance(0.0),
        auxiliaryFlags(0),
        auxiliaryChannel1(0.0),
        auxiliaryChannel2(0.0),
        auxiliaryChannel3(0.0),
        auxiliaryChannel4(0.0) {
  }
};

struct VrepControlPoint FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef VrepControlPointT NativeTableType;
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "grl.flatbuffer.VrepControlPoint";
  }
  enum {
    VT_POSITION = 4,
    VT_ROTATION = 6,
    VT_RELATIVEVELOCITY = 8,
    VT_BEZIERPOINTCOUNT = 10,
    VT_INTERPOLATIONFACTOR1 = 12,
    VT_INTERPOLATIONFACTOR2 = 14,
    VT_VIRTUALDISTANCE = 16,
    VT_AUXILIARYFLAGS = 18,
    VT_AUXILIARYCHANNEL1 = 20,
    VT_AUXILIARYCHANNEL2 = 22,
    VT_AUXILIARYCHANNEL3 = 24,
    VT_AUXILIARYCHANNEL4 = 26
  };
  const Vector3d *position() const {
    return GetStruct<const Vector3d *>(VT_POSITION);
  }
  const EulerXYZd *rotation() const {
    return GetStruct<const EulerXYZd *>(VT_ROTATION);
  }
  double relativeVelocity() const {
    return GetField<double>(VT_RELATIVEVELOCITY, 1.0);
  }
  int32_t bezierPointCount() const {
    return GetField<int32_t>(VT_BEZIERPOINTCOUNT, 1);
  }
  double interpolationFactor1() const {
    return GetField<double>(VT_INTERPOLATIONFACTOR1, 0.5);
  }
  double interpolationFactor2() const {
    return GetField<double>(VT_INTERPOLATIONFACTOR2, 0.5);
  }
  double virtualDistance() const {
    return GetField<double>(VT_VIRTUALDISTANCE, 0.0);
  }
  int32_t auxiliaryFlags() const {
    return GetField<int32_t>(VT_AUXILIARYFLAGS, 0);
  }
  double auxiliaryChannel1() const {
    return GetField<double>(VT_AUXILIARYCHANNEL1, 0.0);
  }
  double auxiliaryChannel2() const {
    return GetField<double>(VT_AUXILIARYCHANNEL2, 0.0);
  }
  double auxiliaryChannel3() const {
    return GetField<double>(VT_AUXILIARYCHANNEL3, 0.0);
  }
  double auxiliaryChannel4() const {
    return GetField<double>(VT_AUXILIARYCHANNEL4, 0.0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<Vector3d>(verifier, VT_POSITION) &&
           VerifyField<EulerXYZd>(verifier, VT_ROTATION) &&
           VerifyField<double>(verifier, VT_RELATIVEVELOCITY) &&
           VerifyField<int32_t>(verifier, VT_BEZIERPOINTCOUNT) &&
           VerifyField<double>(verifier, VT_INTERPOLATIONFACTOR1) &&
           VerifyField<double>(verifier, VT_INTERPOLATIONFACTOR2) &&
           VerifyField<double>(verifier, VT_VIRTUALDISTANCE) &&
           VerifyField<int32_t>(verifier, VT_AUXILIARYFLAGS) &&
           VerifyField<double>(verifier, VT_AUXILIARYCHANNEL1) &&
           VerifyField<double>(verifier, VT_AUXILIARYCHANNEL2) &&
           VerifyField<double>(verifier, VT_AUXILIARYCHANNEL3) &&
           VerifyField<double>(verifier, VT_AUXILIARYCHANNEL4) &&
           verifier.EndTable();
  }
  VrepControlPointT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(VrepControlPointT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<VrepControlPoint> Pack(flatbuffers::FlatBufferBuilder &_fbb, const VrepControlPointT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct VrepControlPointBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_position(const Vector3d *position) {
    fbb_.AddStruct(VrepControlPoint::VT_POSITION, position);
  }
  void add_rotation(const EulerXYZd *rotation) {
    fbb_.AddStruct(VrepControlPoint::VT_ROTATION, rotation);
  }
  void add_relativeVelocity(double relativeVelocity) {
    fbb_.AddElement<double>(VrepControlPoint::VT_RELATIVEVELOCITY, relativeVelocity, 1.0);
  }
  void add_bezierPointCount(int32_t bezierPointCount) {
    fbb_.AddElement<int32_t>(VrepControlPoint::VT_BEZIERPOINTCOUNT, bezierPointCount, 1);
  }
  void add_interpolationFactor1(double interpolationFactor1) {
    fbb_.AddElement<double>(VrepControlPoint::VT_INTERPOLATIONFACTOR1, interpolationFactor1, 0.5);
  }
  void add_interpolationFactor2(double interpolationFactor2) {
    fbb_.AddElement<double>(VrepControlPoint::VT_INTERPOLATIONFACTOR2, interpolationFactor2, 0.5);
  }
  void add_virtualDistance(double virtualDistance) {
    fbb_.AddElement<double>(VrepControlPoint::VT_VIRTUALDISTANCE, virtualDistance, 0.0);
  }
  void add_auxiliaryFlags(int32_t auxiliaryFlags) {
    fbb_.AddElement<int32_t>(VrepControlPoint::VT_AUXILIARYFLAGS, auxiliaryFlags, 0);
  }
  void add_auxiliaryChannel1(double auxiliaryChannel1) {
    fbb_.AddElement<double>(VrepControlPoint::VT_AUXILIARYCHANNEL1, auxiliaryChannel1, 0.0);
  }
  void add_auxiliaryChannel2(double auxiliaryChannel2) {
    fbb_.AddElement<double>(VrepControlPoint::VT_AUXILIARYCHANNEL2, auxiliaryChannel2, 0.0);
  }
  void add_auxiliaryChannel3(double auxiliaryChannel3) {
    fbb_.AddElement<double>(VrepControlPoint::VT_AUXILIARYCHANNEL3, auxiliaryChannel3, 0.0);
  }
  void add_auxiliaryChannel4(double auxiliaryChannel4) {
    fbb_.AddElement<double>(VrepControlPoint::VT_AUXILIARYCHANNEL4, auxiliaryChannel4, 0.0);
  }
  explicit VrepControlPointBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  VrepControlPointBuilder &operator=(const VrepControlPointBuilder &);
  flatbuffers::Offset<VrepControlPoint> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<VrepControlPoint>(end);
    return o;
  }
};

inline flatbuffers::Offset<VrepControlPoint> CreateVrepControlPoint(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Vector3d *position = 0,
    const EulerXYZd *rotation = 0,
    double relativeVelocity = 1.0,
    int32_t bezierPointCount = 1,
    double interpolationFactor1 = 0.5,
    double interpolationFactor2 = 0.5,
    double virtualDistance = 0.0,
    int32_t auxiliaryFlags = 0,
    double auxiliaryChannel1 = 0.0,
    double auxiliaryChannel2 = 0.0,
    double auxiliaryChannel3 = 0.0,
    double auxiliaryChannel4 = 0.0) {
  VrepControlPointBuilder builder_(_fbb);
  builder_.add_auxiliaryChannel4(auxiliaryChannel4);
  builder_.add_auxiliaryChannel3(auxiliaryChannel3);
  builder_.add_auxiliaryChannel2(auxiliaryChannel2);
  builder_.add_auxiliaryChannel1(auxiliaryChannel1);
  builder_.add_virtualDistance(virtualDistance);
  builder_.add_interpolationFactor2(interpolationFactor2);
  builder_.add_interpolationFactor1(interpolationFactor1);
  builder_.add_relativeVelocity(relativeVelocity);
  builder_.add_auxiliaryFlags(auxiliaryFlags);
  builder_.add_bezierPointCount(bezierPointCount);
  builder_.add_rotation(rotation);
  builder_.add_position(position);
  return builder_.Finish();
}

flatbuffers::Offset<VrepControlPoint> CreateVrepControlPoint(flatbuffers::FlatBufferBuilder &_fbb, const VrepControlPointT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline VrepControlPointT *VrepControlPoint::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = new VrepControlPointT();
  UnPackTo(_o, _resolver);
  return _o;
}

inline void VrepControlPoint::UnPackTo(VrepControlPointT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = position(); if (_e) _o->position = std::unique_ptr<Vector3d>(new Vector3d(*_e)); };
  { auto _e = rotation(); if (_e) _o->rotation = std::unique_ptr<EulerXYZd>(new EulerXYZd(*_e)); };
  { auto _e = relativeVelocity(); _o->relativeVelocity = _e; };
  { auto _e = bezierPointCount(); _o->bezierPointCount = _e; };
  { auto _e = interpolationFactor1(); _o->interpolationFactor1 = _e; };
  { auto _e = interpolationFactor2(); _o->interpolationFactor2 = _e; };
  { auto _e = virtualDistance(); _o->virtualDistance = _e; };
  { auto _e = auxiliaryFlags(); _o->auxiliaryFlags = _e; };
  { auto _e = auxiliaryChannel1(); _o->auxiliaryChannel1 = _e; };
  { auto _e = auxiliaryChannel2(); _o->auxiliaryChannel2 = _e; };
  { auto _e = auxiliaryChannel3(); _o->auxiliaryChannel3 = _e; };
  { auto _e = auxiliaryChannel4(); _o->auxiliaryChannel4 = _e; };
}

inline flatbuffers::Offset<VrepControlPoint> VrepControlPoint::Pack(flatbuffers::FlatBufferBuilder &_fbb, const VrepControlPointT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateVrepControlPoint(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<VrepControlPoint> CreateVrepControlPoint(flatbuffers::FlatBufferBuilder &_fbb, const VrepControlPointT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const VrepControlPointT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _position = _o->position ? _o->position.get() : 0;
  auto _rotation = _o->rotation ? _o->rotation.get() : 0;
  auto _relativeVelocity = _o->relativeVelocity;
  auto _bezierPointCount = _o->bezierPointCount;
  auto _interpolationFactor1 = _o->interpolationFactor1;
  auto _interpolationFactor2 = _o->interpolationFactor2;
  auto _virtualDistance = _o->virtualDistance;
  auto _auxiliaryFlags = _o->auxiliaryFlags;
  auto _auxiliaryChannel1 = _o->auxiliaryChannel1;
  auto _auxiliaryChannel2 = _o->auxiliaryChannel2;
  auto _auxiliaryChannel3 = _o->auxiliaryChannel3;
  auto _auxiliaryChannel4 = _o->auxiliaryChannel4;
  return grl::flatbuffer::CreateVrepControlPoint(
      _fbb,
      _position,
      _rotation,
      _relativeVelocity,
      _bezierPointCount,
      _interpolationFactor1,
      _interpolationFactor2,
      _virtualDistance,
      _auxiliaryFlags,
      _auxiliaryChannel1,
      _auxiliaryChannel2,
      _auxiliaryChannel3,
      _auxiliaryChannel4);
}

inline const grl::flatbuffer::VrepControlPoint *GetVrepControlPoint(const void *buf) {
  return flatbuffers::GetRoot<grl::flatbuffer::VrepControlPoint>(buf);
}

inline const grl::flatbuffer::VrepControlPoint *GetSizePrefixedVrepControlPoint(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<grl::flatbuffer::VrepControlPoint>(buf);
}

inline bool VerifyVrepControlPointBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<grl::flatbuffer::VrepControlPoint>(nullptr);
}

inline bool VerifySizePrefixedVrepControlPointBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<grl::flatbuffer::VrepControlPoint>(nullptr);
}

inline void FinishVrepControlPointBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<grl::flatbuffer::VrepControlPoint> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedVrepControlPointBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<grl::flatbuffer::VrepControlPoint> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<VrepControlPointT> UnPackVrepControlPoint(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<VrepControlPointT>(GetVrepControlPoint(buf)->UnPack(res));
}

}  // namespace flatbuffer
}  // namespace grl

#endif  // FLATBUFFERS_GENERATED_VREPCONTROLPOINT_GRL_FLATBUFFER_H_
