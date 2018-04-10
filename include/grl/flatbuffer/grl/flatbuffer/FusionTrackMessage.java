// automatically generated by the FlatBuffers compiler, do not modify

package grl.flatbuffer;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class FusionTrackMessage extends Table {
  public static FusionTrackMessage getRootAsFusionTrackMessage(ByteBuffer _bb) { return getRootAsFusionTrackMessage(_bb, new FusionTrackMessage()); }
  public static FusionTrackMessage getRootAsFusionTrackMessage(ByteBuffer _bb, FusionTrackMessage obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__assign(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public void __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; }
  public FusionTrackMessage __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public double timestamp() { int o = __offset(4); return o != 0 ? bb.getDouble(o + bb_pos) : 0.0; }
  public FusionTrackParameters parameters() { return parameters(new FusionTrackParameters()); }
  public FusionTrackParameters parameters(FusionTrackParameters obj) { int o = __offset(6); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public TimeEvent timeEvent() { return timeEvent(new TimeEvent()); }
  public TimeEvent timeEvent(TimeEvent obj) { int o = __offset(8); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }
  public FusionTrackFrame frame() { return frame(new FusionTrackFrame()); }
  public FusionTrackFrame frame(FusionTrackFrame obj) { int o = __offset(10); return o != 0 ? obj.__assign(__indirect(o + bb_pos), bb) : null; }

  public static int createFusionTrackMessage(FlatBufferBuilder builder,
      double timestamp,
      int parametersOffset,
      int timeEventOffset,
      int frameOffset) {
    builder.startObject(4);
    FusionTrackMessage.addTimestamp(builder, timestamp);
    FusionTrackMessage.addFrame(builder, frameOffset);
    FusionTrackMessage.addTimeEvent(builder, timeEventOffset);
    FusionTrackMessage.addParameters(builder, parametersOffset);
    return FusionTrackMessage.endFusionTrackMessage(builder);
  }

  public static void startFusionTrackMessage(FlatBufferBuilder builder) { builder.startObject(4); }
  public static void addTimestamp(FlatBufferBuilder builder, double timestamp) { builder.addDouble(0, timestamp, 0.0); }
  public static void addParameters(FlatBufferBuilder builder, int parametersOffset) { builder.addOffset(1, parametersOffset, 0); }
  public static void addTimeEvent(FlatBufferBuilder builder, int timeEventOffset) { builder.addOffset(2, timeEventOffset, 0); }
  public static void addFrame(FlatBufferBuilder builder, int frameOffset) { builder.addOffset(3, frameOffset, 0); }
  public static int endFusionTrackMessage(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
}

