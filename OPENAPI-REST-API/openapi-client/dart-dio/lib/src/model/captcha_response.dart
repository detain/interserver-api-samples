//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'captcha_response.g.dart';

/// A base-64 encoded captcha image.
///
/// Properties:
/// * [captcha] - The base64 encoded captcha image.
@BuiltValue()
abstract class CaptchaResponse implements Built<CaptchaResponse, CaptchaResponseBuilder> {
  /// The base64 encoded captcha image.
  @BuiltValueField(wireName: r'captcha')
  String get captcha;

  CaptchaResponse._();

  factory CaptchaResponse([void updates(CaptchaResponseBuilder b)]) = _$CaptchaResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CaptchaResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CaptchaResponse> get serializer => _$CaptchaResponseSerializer();
}

class _$CaptchaResponseSerializer implements PrimitiveSerializer<CaptchaResponse> {
  @override
  final Iterable<Type> types = const [CaptchaResponse, _$CaptchaResponse];

  @override
  final String wireName = r'CaptchaResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CaptchaResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'captcha';
    yield serializers.serialize(
      object.captcha,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    CaptchaResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CaptchaResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'captcha':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.captcha = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CaptchaResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CaptchaResponseBuilder();
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

