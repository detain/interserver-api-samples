//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/login_submission_example_g_recaptcha_response.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'login_submission_example.g.dart';

/// The data to submit in the login request.
///
/// Properties:
/// * [login] 
/// * [passwd] 
/// * [remember] 
/// * [gRecaptchaResponse] 
/// * [tfa] - Two Factor Authentication Response.
@BuiltValue()
abstract class LoginSubmissionExample implements Built<LoginSubmissionExample, LoginSubmissionExampleBuilder> {
  @BuiltValueField(wireName: r'login')
  String get login;

  @BuiltValueField(wireName: r'passwd')
  String get passwd;

  @BuiltValueField(wireName: r'remember')
  String? get remember;

  @BuiltValueField(wireName: r'g-recaptcha-response')
  LoginSubmissionExampleGRecaptchaResponse? get gRecaptchaResponse;

  /// Two Factor Authentication Response.
  @BuiltValueField(wireName: r'tfa')
  String? get tfa;

  LoginSubmissionExample._();

  factory LoginSubmissionExample([void updates(LoginSubmissionExampleBuilder b)]) = _$LoginSubmissionExample;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LoginSubmissionExampleBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LoginSubmissionExample> get serializer => _$LoginSubmissionExampleSerializer();
}

class _$LoginSubmissionExampleSerializer implements PrimitiveSerializer<LoginSubmissionExample> {
  @override
  final Iterable<Type> types = const [LoginSubmissionExample, _$LoginSubmissionExample];

  @override
  final String wireName = r'LoginSubmissionExample';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LoginSubmissionExample object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'login';
    yield serializers.serialize(
      object.login,
      specifiedType: const FullType(String),
    );
    yield r'passwd';
    yield serializers.serialize(
      object.passwd,
      specifiedType: const FullType(String),
    );
    if (object.remember != null) {
      yield r'remember';
      yield serializers.serialize(
        object.remember,
        specifiedType: const FullType(String),
      );
    }
    if (object.gRecaptchaResponse != null) {
      yield r'g-recaptcha-response';
      yield serializers.serialize(
        object.gRecaptchaResponse,
        specifiedType: const FullType(LoginSubmissionExampleGRecaptchaResponse),
      );
    }
    if (object.tfa != null) {
      yield r'tfa';
      yield serializers.serialize(
        object.tfa,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LoginSubmissionExample object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LoginSubmissionExampleBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'login':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.login = valueDes;
          break;
        case r'passwd':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.passwd = valueDes;
          break;
        case r'remember':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.remember = valueDes;
          break;
        case r'g-recaptcha-response':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LoginSubmissionExampleGRecaptchaResponse),
          ) as LoginSubmissionExampleGRecaptchaResponse;
          result.gRecaptchaResponse.replace(valueDes);
          break;
        case r'tfa':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.tfa = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LoginSubmissionExample deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LoginSubmissionExampleBuilder();
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

