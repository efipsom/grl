# automatically generated by the FlatBuffers compiler, do not modify

# namespace: flatbuffer

import flatbuffers

class MoveArmJointServo(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsMoveArmJointServo(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = MoveArmJointServo()
        x.Init(buf, n + offset)
        return x

    # MoveArmJointServo
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # MoveArmJointServo
    def Goal(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            x = self._tab.Indirect(o + self._tab.Pos)
            from .JointState import JointState
            obj = JointState()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

def MoveArmJointServoStart(builder): builder.StartObject(1)
def MoveArmJointServoAddGoal(builder, goal): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(goal), 0)
def MoveArmJointServoEnd(builder): return builder.EndObject()
