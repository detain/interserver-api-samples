//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'post_oauth_callback200_response.g.dart';

/// PostOauthCallback200Response
///
/// Properties:
/// * [login] - Whether the user was logged in to an existing account.
/// * [signup] - Whether a new account was created.
/// * [linked] - Whether the OAuth provider was linked to an existing account.
/// * [accountId] - The account ID associated with the OAuth login.
/// * [errorCode] - Error code if additional verification is needed (e.g. `2fa_required`).
@BuiltValue()
abstract class PostOauthCallback200Response implements Built<PostOauthCallback200Response, PostOauthCallback200ResponseBuilder> {
  /// Whether the user was logged in to an existing account.
  @BuiltValueField(wireName: r'login')
  bool? get login;

  /// Whether a new account was created.
  @BuiltValueField(wireName: r'signup')
  bool? get signup;

  /// Whether the OAuth provider was linked to an existing account.
  @BuiltValueField(wireName: r'linked')
  bool? get linked;

  /// The account ID associated with the OAuth login.
  @BuiltValueField(wireName: r'account_id')
  int? get accountId;

  /// Error code if additional verification is needed (e.g. `2fa_required`).
  @BuiltValueField(wireName: r'error_code')
  String? get errorCode;

  PostOauthCallback200Response._();

  factory PostOauthCallback200Response([void updates(PostOauthCallback200ResponseBuilder b)]) = _$PostOauthCallback200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PostOauthCallback200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PostOauthCallback200Response> get serializer => _$PostOauthCallback200ResponseSerializer();
}

class _$PostOauthCallback200ResponseSerializer implements PrimitiveSerializer<PostOauthCallback200Response> {
  @override
  final Iterable<Type> types = const [PostOauthCallback200Response, _$PostOauthCallback200Response];

  @override
  final String wireName = r'PostOauthCallback200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PostOauthCallback200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.login != null) {
      yield r'login';
      yield serializers.serialize(
        object.login,
        specifiedType: const FullType(bool),
      );
    }
    if (object.signup != null) {
      yield r'signup';
      yield serializers.serialize(
        object.signup,
        specifiedType: const FullType(bool),
      );
    }
    if (object.linked != null) {
      yield r'linked';
      yield serializers.serialize(
        object.linked,
        specifiedType: const FullType(bool),
      );
    }
    if (object.accountId != null) {
      yield r'account_id';
      yield serializers.serialize(
        object.accountId,
        specifiedType: const FullType(int),
      );
    }
    if (object.errorCode != null) {
      yield r'error_code';
      yield serializers.serialize(
        object.errorCode,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PostOauthCallback200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PostOauthCallback200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'login':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.login = valueDes;
          break;
        case r'signup':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.signup = valueDes;
          break;
        case r'linked':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.linked = valueDes;
          break;
        case r'account_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.accountId = valueDes;
          break;
        case r'error_code':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.errorCode = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PostOauthCallback200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PostOauthCallback200ResponseBuilder();
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

