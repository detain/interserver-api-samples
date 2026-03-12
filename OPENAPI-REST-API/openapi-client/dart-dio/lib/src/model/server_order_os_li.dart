//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_order_os.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_os_li.g.dart';

/// Operating System options for the server order.
///
/// Properties:
/// * [n51] 
@BuiltValue()
abstract class ServerOrderOsLi implements Built<ServerOrderOsLi, ServerOrderOsLiBuilder> {
  @BuiltValueField(wireName: r'51')
  ServerOrderOS? get n51;

  ServerOrderOsLi._();

  factory ServerOrderOsLi([void updates(ServerOrderOsLiBuilder b)]) = _$ServerOrderOsLi;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderOsLiBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderOsLi> get serializer => _$ServerOrderOsLiSerializer();
}

class _$ServerOrderOsLiSerializer implements PrimitiveSerializer<ServerOrderOsLi> {
  @override
  final Iterable<Type> types = const [ServerOrderOsLi, _$ServerOrderOsLi];

  @override
  final String wireName = r'ServerOrderOsLi';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderOsLi object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n51 != null) {
      yield r'51';
      yield serializers.serialize(
        object.n51,
        specifiedType: const FullType(ServerOrderOS),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderOsLi object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderOsLiBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'51':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderOS),
          ) as ServerOrderOS;
          result.n51.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderOsLi deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderOsLiBuilder();
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

