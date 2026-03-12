//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'floating_ips_cancel200_response.g.dart';

/// FloatingIpsCancel200Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class FloatingIpsCancel200Response implements Built<FloatingIpsCancel200Response, FloatingIpsCancel200ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  FloatingIpsCancel200Response._();

  factory FloatingIpsCancel200Response([void updates(FloatingIpsCancel200ResponseBuilder b)]) = _$FloatingIpsCancel200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(FloatingIpsCancel200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<FloatingIpsCancel200Response> get serializer => _$FloatingIpsCancel200ResponseSerializer();
}

class _$FloatingIpsCancel200ResponseSerializer implements PrimitiveSerializer<FloatingIpsCancel200Response> {
  @override
  final Iterable<Type> types = const [FloatingIpsCancel200Response, _$FloatingIpsCancel200Response];

  @override
  final String wireName = r'FloatingIpsCancel200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    FloatingIpsCancel200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'success';
    yield serializers.serialize(
      object.success,
      specifiedType: const FullType(bool),
    );
    yield r'text';
    yield serializers.serialize(
      object.text,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    FloatingIpsCancel200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required FloatingIpsCancel200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.success = valueDes;
          break;
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  FloatingIpsCancel200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = FloatingIpsCancel200ResponseBuilder();
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

