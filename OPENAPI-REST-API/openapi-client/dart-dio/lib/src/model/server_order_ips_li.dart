//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_order_ip.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_ips_li.g.dart';

/// IP options for the server order.
///
/// Properties:
/// * [n9] 
@BuiltValue()
abstract class ServerOrderIpsLi implements Built<ServerOrderIpsLi, ServerOrderIpsLiBuilder> {
  @BuiltValueField(wireName: r'9')
  ServerOrderIP? get n9;

  ServerOrderIpsLi._();

  factory ServerOrderIpsLi([void updates(ServerOrderIpsLiBuilder b)]) = _$ServerOrderIpsLi;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderIpsLiBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderIpsLi> get serializer => _$ServerOrderIpsLiSerializer();
}

class _$ServerOrderIpsLiSerializer implements PrimitiveSerializer<ServerOrderIpsLi> {
  @override
  final Iterable<Type> types = const [ServerOrderIpsLi, _$ServerOrderIpsLi];

  @override
  final String wireName = r'ServerOrderIpsLi';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderIpsLi object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n9 != null) {
      yield r'9';
      yield serializers.serialize(
        object.n9,
        specifiedType: const FullType(ServerOrderIP),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderIpsLi object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderIpsLiBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'9':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderIP),
          ) as ServerOrderIP;
          result.n9.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderIpsLi deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderIpsLiBuilder();
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

