//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_order_cpu.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_cpu_li.g.dart';

/// CPU options for the server order.
///
/// Properties:
/// * [n254] 
@BuiltValue()
abstract class ServerOrderCpuLi implements Built<ServerOrderCpuLi, ServerOrderCpuLiBuilder> {
  @BuiltValueField(wireName: r'254')
  ServerOrderCPU? get n254;

  ServerOrderCpuLi._();

  factory ServerOrderCpuLi([void updates(ServerOrderCpuLiBuilder b)]) = _$ServerOrderCpuLi;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderCpuLiBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderCpuLi> get serializer => _$ServerOrderCpuLiSerializer();
}

class _$ServerOrderCpuLiSerializer implements PrimitiveSerializer<ServerOrderCpuLi> {
  @override
  final Iterable<Type> types = const [ServerOrderCpuLi, _$ServerOrderCpuLi];

  @override
  final String wireName = r'ServerOrderCpuLi';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderCpuLi object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n254 != null) {
      yield r'254';
      yield serializers.serialize(
        object.n254,
        specifiedType: const FullType(ServerOrderCPU),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderCpuLi object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderCpuLiBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'254':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderCPU),
          ) as ServerOrderCPU;
          result.n254.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderCpuLi deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderCpuLiBuilder();
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

