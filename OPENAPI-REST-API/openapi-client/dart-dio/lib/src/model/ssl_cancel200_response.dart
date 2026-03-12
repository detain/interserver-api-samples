//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'ssl_cancel200_response.g.dart';

/// SslCancel200Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class SslCancel200Response implements Built<SslCancel200Response, SslCancel200ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  SslCancel200Response._();

  factory SslCancel200Response([void updates(SslCancel200ResponseBuilder b)]) = _$SslCancel200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(SslCancel200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<SslCancel200Response> get serializer => _$SslCancel200ResponseSerializer();
}

class _$SslCancel200ResponseSerializer implements PrimitiveSerializer<SslCancel200Response> {
  @override
  final Iterable<Type> types = const [SslCancel200Response, _$SslCancel200Response];

  @override
  final String wireName = r'SslCancel200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    SslCancel200Response object, {
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
    SslCancel200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required SslCancel200ResponseBuilder result,
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
  SslCancel200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = SslCancel200ResponseBuilder();
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

