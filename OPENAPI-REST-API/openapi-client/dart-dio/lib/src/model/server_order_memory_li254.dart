//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_order_memory.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_memory_li254.g.dart';

/// ServerOrderMemoryLi254
///
/// Properties:
/// * [n65] 
@BuiltValue()
abstract class ServerOrderMemoryLi254 implements Built<ServerOrderMemoryLi254, ServerOrderMemoryLi254Builder> {
  @BuiltValueField(wireName: r'65')
  ServerOrderMemory? get n65;

  ServerOrderMemoryLi254._();

  factory ServerOrderMemoryLi254([void updates(ServerOrderMemoryLi254Builder b)]) = _$ServerOrderMemoryLi254;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderMemoryLi254Builder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderMemoryLi254> get serializer => _$ServerOrderMemoryLi254Serializer();
}

class _$ServerOrderMemoryLi254Serializer implements PrimitiveSerializer<ServerOrderMemoryLi254> {
  @override
  final Iterable<Type> types = const [ServerOrderMemoryLi254, _$ServerOrderMemoryLi254];

  @override
  final String wireName = r'ServerOrderMemoryLi254';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderMemoryLi254 object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n65 != null) {
      yield r'65';
      yield serializers.serialize(
        object.n65,
        specifiedType: const FullType(ServerOrderMemory),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderMemoryLi254 object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderMemoryLi254Builder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'65':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderMemory),
          ) as ServerOrderMemory;
          result.n65.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderMemoryLi254 deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderMemoryLi254Builder();
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

