//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_order_bandwidth.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_bandwidth_li.g.dart';

/// Bandwidth options for the server order.
///
/// Properties:
/// * [n15] 
@BuiltValue()
abstract class ServerOrderBandwidthLi implements Built<ServerOrderBandwidthLi, ServerOrderBandwidthLiBuilder> {
  @BuiltValueField(wireName: r'15')
  ServerOrderBandwidth? get n15;

  ServerOrderBandwidthLi._();

  factory ServerOrderBandwidthLi([void updates(ServerOrderBandwidthLiBuilder b)]) = _$ServerOrderBandwidthLi;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderBandwidthLiBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderBandwidthLi> get serializer => _$ServerOrderBandwidthLiSerializer();
}

class _$ServerOrderBandwidthLiSerializer implements PrimitiveSerializer<ServerOrderBandwidthLi> {
  @override
  final Iterable<Type> types = const [ServerOrderBandwidthLi, _$ServerOrderBandwidthLi];

  @override
  final String wireName = r'ServerOrderBandwidthLi';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderBandwidthLi object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n15 != null) {
      yield r'15';
      yield serializers.serialize(
        object.n15,
        specifiedType: const FullType(ServerOrderBandwidth),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderBandwidthLi object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderBandwidthLiBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'15':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderBandwidth),
          ) as ServerOrderBandwidth;
          result.n15.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderBandwidthLi deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderBandwidthLiBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

