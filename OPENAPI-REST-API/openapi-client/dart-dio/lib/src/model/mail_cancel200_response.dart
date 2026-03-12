//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_cancel200_response.g.dart';

/// MailCancel200Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class MailCancel200Response implements Built<MailCancel200Response, MailCancel200ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  MailCancel200Response._();

  factory MailCancel200Response([void updates(MailCancel200ResponseBuilder b)]) = _$MailCancel200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailCancel200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailCancel200Response> get serializer => _$MailCancel200ResponseSerializer();
}

class _$MailCancel200ResponseSerializer implements PrimitiveSerializer<MailCancel200Response> {
  @override
  final Iterable<Type> types = const [MailCancel200Response, _$MailCancel200Response];

  @override
  final String wireName = r'MailCancel200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailCancel200Response object, {
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
    MailCancel200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailCancel200ResponseBuilder result,
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
  MailCancel200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailCancel200ResponseBuilder();
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

