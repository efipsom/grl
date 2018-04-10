# automatically generated by the FlatBuffers compiler, do not modify

# namespace: flatbuffer

import flatbuffers

class EulerTranslationParams(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsEulerTranslationParams(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = EulerTranslationParams()
        x.Init(buf, n + offset)
        return x

    # EulerTranslationParams
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # EulerTranslationParams
    def X(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float64Flags, o + self._tab.Pos)
        return 0.0

    # EulerTranslationParams
    def Y(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float64Flags, o + self._tab.Pos)
        return 0.0

    # EulerTranslationParams
    def Z(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Float64Flags, o + self._tab.Pos)
        return 0.0

def EulerTranslationParamsStart(builder): builder.StartObject(3)
def EulerTranslationParamsAddX(builder, x): builder.PrependFloat64Slot(0, x, 0.0)
def EulerTranslationParamsAddY(builder, y): builder.PrependFloat64Slot(1, y, 0.0)
def EulerTranslationParamsAddZ(builder, z): builder.PrependFloat64Slot(2, z, 0.0)
def EulerTranslationParamsEnd(builder): return builder.EndObject()
