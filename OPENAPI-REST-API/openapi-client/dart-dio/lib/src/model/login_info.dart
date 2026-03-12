//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/login_service_counts.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'login_info.g.dart';

/// Basic information useful for rendering a login page.
///
/// Properties:
/// * [captcha] - A base64 encoded image to use for rendering the alternateive captcha.
/// * [counts] 
/// * [logo] - A logo image url.
/// * [language] - The desired langauge to render the site with.
@BuiltValue()
abstract class LoginInfo implements Built<LoginInfo, LoginInfoBuilder> {
  /// A base64 encoded image to use for rendering the alternateive captcha.
  @BuiltValueField(wireName: r'captcha')
  String get captcha;

  @BuiltValueField(wireName: r'counts')
  LoginServiceCounts get counts;

  /// A logo image url.
  @BuiltValueField(wireName: r'logo')
  String? get logo;

  /// The desired langauge to render the site with.
  @BuiltValueField(wireName: r'language')
  String? get language;

  LoginInfo._();

  factory LoginInfo([void updates(LoginInfoBuilder b)]) = _$LoginInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LoginInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LoginInfo> get serializer => _$LoginInfoSerializer();
}

class _$LoginInfoSerializer implements PrimitiveSerializer<LoginInfo> {
  @override
  final Iterable<Type> types = const [LoginInfo, _$LoginInfo];

  @override
  final String wireName = r'LoginInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LoginInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'captcha';
    yield serializers.serialize(
      object.captcha,
      specifiedType: const FullType(String),
    );
    yield r'counts';
    yield serializers.serialize(
      object.counts,
      specifiedType: const FullType(LoginServiceCounts),
    );
    if (object.logo != null) {
      yield r'logo';
      yield serializers.serialize(
        object.logo,
        specifiedType: const FullType(String),
      );
    }
    if (object.language != null) {
      yield r'language';
      yield serializers.serialize(
        object.language,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LoginInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LoginInfoBuilder result,
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
        case r'counts':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LoginServiceCounts),
          ) as LoginServiceCounts;
          result.counts.replace(valueDes);
          break;
        case r'logo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.logo = valueDes;
          break;
        case r'language':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.language = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LoginInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LoginInfoBuilder();
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

