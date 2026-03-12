//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'login_submission_example_g_recaptcha_response_dep.g.dart';

/// LoginSubmissionExampleGRecaptchaResponseDep
///
/// Properties:
/// * [w] 
/// * [n] 
@BuiltValue()
abstract class LoginSubmissionExampleGRecaptchaResponseDep implements Built<LoginSubmissionExampleGRecaptchaResponseDep, LoginSubmissionExampleGRecaptchaResponseDepBuilder> {
  @BuiltValueField(wireName: r'w')
  int? get w;

  @BuiltValueField(wireName: r'n')
  int? get n;

  LoginSubmissionExampleGRecaptchaResponseDep._();

  factory LoginSubmissionExampleGRecaptchaResponseDep([void updates(LoginSubmissionExampleGRecaptchaResponseDepBuilder b)]) = _$LoginSubmissionExampleGRecaptchaResponseDep;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LoginSubmissionExampleGRecaptchaResponseDepBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LoginSubmissionExampleGRecaptchaResponseDep> get serializer => _$LoginSubmissionExampleGRecaptchaResponseDepSerializer();
}

class _$LoginSubmissionExampleGRecaptchaResponseDepSerializer implements PrimitiveSerializer<LoginSubmissionExampleGRecaptchaResponseDep> {
  @override
  final Iterable<Type> types = const [LoginSubmissionExampleGRecaptchaResponseDep, _$LoginSubmissionExampleGRecaptchaResponseDep];

  @override
  final String wireName = r'LoginSubmissionExampleGRecaptchaResponseDep';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LoginSubmissionExampleGRecaptchaResponseDep object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.w != null) {
      yield r'w';
      yield serializers.serialize(
        object.w,
        specifiedType: const FullType(int),
      );
    }
    if (object.n != null) {
      yield r'n';
      yield serializers.serialize(
        object.n,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LoginSubmissionExampleGRecaptchaResponseDep object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LoginSubmissionExampleGRecaptchaResponseDepBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'w':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.w = valueDes;
          break;
        case r'n':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.n = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LoginSubmissionExampleGRecaptchaResponseDep deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LoginSubmissionExampleGRecaptchaResponseDepBuilder();
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

