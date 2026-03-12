//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'ip_object.g.dart';

/// IP Address
///
/// Properties:
/// * [ip] - IP Address
@BuiltValue()
abstract class IpObject implements Built<IpObject, IpObjectBuilder> {
  /// IP Address
  @BuiltValueField(wireName: r'ip')
  String get ip;

  IpObject._();

  factory IpObject([void updates(IpObjectBuilder b)]) = _$IpObject;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(IpObjectBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<IpObject> get serializer => _$IpObjectSerializer();
}

class _$IpObjectSerializer implements PrimitiveSerializer<IpObject> {
  @override
  final Iterable<Type> types = const [IpObject, _$IpObject];

  @override
  final String wireName = r'IpObject';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    IpObject object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'ip';
    yield serializers.serialize(
      object.ip,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    IpObject object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required IpObjectBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ip = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  IpObject deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = IpObjectBuilder();
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

