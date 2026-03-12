//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'hostname_object.g.dart';

/// Request specifying the hostname.
///
/// Properties:
/// * [hostname] 
@BuiltValue()
abstract class HostnameObject implements Built<HostnameObject, HostnameObjectBuilder> {
  @BuiltValueField(wireName: r'hostname')
  String? get hostname;

  HostnameObject._();

  factory HostnameObject([void updates(HostnameObjectBuilder b)]) = _$HostnameObject;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HostnameObjectBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HostnameObject> get serializer => _$HostnameObjectSerializer();
}

class _$HostnameObjectSerializer implements PrimitiveSerializer<HostnameObject> {
  @override
  final Iterable<Type> types = const [HostnameObject, _$HostnameObject];

  @override
  final String wireName = r'HostnameObject';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HostnameObject object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.hostname != null) {
      yield r'hostname';
      yield serializers.serialize(
        object.hostname,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HostnameObject object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HostnameObjectBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.hostname = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HostnameObject deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HostnameObjectBuilder();
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

