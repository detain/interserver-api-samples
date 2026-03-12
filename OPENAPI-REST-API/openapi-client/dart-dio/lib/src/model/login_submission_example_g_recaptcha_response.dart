//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/login_submission_example_g_recaptcha_response_dep.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'login_submission_example_g_recaptcha_response.g.dart';

/// LoginSubmissionExampleGRecaptchaResponse
///
/// Properties:
/// * [vIsShallow] 
/// * [dep] 
/// * [vIsRef] 
/// * [rawValue] 
/// * [value] 
@BuiltValue()
abstract class LoginSubmissionExampleGRecaptchaResponse implements Built<LoginSubmissionExampleGRecaptchaResponse, LoginSubmissionExampleGRecaptchaResponseBuilder> {
  @BuiltValueField(wireName: r'__v_isShallow')
  bool? get vIsShallow;

  @BuiltValueField(wireName: r'dep')
  LoginSubmissionExampleGRecaptchaResponseDep? get dep;

  @BuiltValueField(wireName: r'__v_isRef')
  bool? get vIsRef;

  @BuiltValueField(wireName: r'_rawValue')
  String? get rawValue;

  @BuiltValueField(wireName: r'_value')
  String? get value;

  LoginSubmissionExampleGRecaptchaResponse._();

  factory LoginSubmissionExampleGRecaptchaResponse([void updates(LoginSubmissionExampleGRecaptchaResponseBuilder b)]) = _$LoginSubmissionExampleGRecaptchaResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LoginSubmissionExampleGRecaptchaResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LoginSubmissionExampleGRecaptchaResponse> get serializer => _$LoginSubmissionExampleGRecaptchaResponseSerializer();
}

class _$LoginSubmissionExampleGRecaptchaResponseSerializer implements PrimitiveSerializer<LoginSubmissionExampleGRecaptchaResponse> {
  @override
  final Iterable<Type> types = const [LoginSubmissionExampleGRecaptchaResponse, _$LoginSubmissionExampleGRecaptchaResponse];

  @override
  final String wireName = r'LoginSubmissionExampleGRecaptchaResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LoginSubmissionExampleGRecaptchaResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.vIsShallow != null) {
      yield r'__v_isShallow';
      yield serializers.serialize(
        object.vIsShallow,
        specifiedType: const FullType(bool),
      );
    }
    if (object.dep != null) {
      yield r'dep';
      yield serializers.serialize(
        object.dep,
        specifiedType: const FullType(LoginSubmissionExampleGRecaptchaResponseDep),
      );
    }
    if (object.vIsRef != null) {
      yield r'__v_isRef';
      yield serializers.serialize(
        object.vIsRef,
        specifiedType: const FullType(bool),
      );
    }
    if (object.rawValue != null) {
      yield r'_rawValue';
      yield serializers.serialize(
        object.rawValue,
        specifiedType: const FullType(String),
      );
    }
    if (object.value != null) {
      yield r'_value';
      yield serializers.serialize(
        object.value,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LoginSubmissionExampleGRecaptchaResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LoginSubmissionExampleGRecaptchaResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'__v_isShallow':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.vIsShallow = valueDes;
          break;
        case r'dep':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LoginSubmissionExampleGRecaptchaResponseDep),
          ) as LoginSubmissionExampleGRecaptchaResponseDep;
          result.dep.replace(valueDes);
          break;
        case r'__v_isRef':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.vIsRef = valueDes;
          break;
        case r'_rawValue':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rawValue = valueDes;
          break;
        case r'_value':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.value = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LoginSubmissionExampleGRecaptchaResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LoginSubmissionExampleGRecaptchaResponseBuilder();
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

