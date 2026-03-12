//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'patch_oauth_two_factor200_response.g.dart';

/// PatchOauthTwoFactor200Response
///
/// Properties:
/// * [login] - Whether the 2FA verification succeeded and the user is now logged in.
@BuiltValue()
abstract class PatchOauthTwoFactor200Response implements Built<PatchOauthTwoFactor200Response, PatchOauthTwoFactor200ResponseBuilder> {
  /// Whether the 2FA verification succeeded and the user is now logged in.
  @BuiltValueField(wireName: r'login')
  bool? get login;

  PatchOauthTwoFactor200Response._();

  factory PatchOauthTwoFactor200Response([void updates(PatchOauthTwoFactor200ResponseBuilder b)]) = _$PatchOauthTwoFactor200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PatchOauthTwoFactor200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PatchOauthTwoFactor200Response> get serializer => _$PatchOauthTwoFactor200ResponseSerializer();
}

class _$PatchOauthTwoFactor200ResponseSerializer implements PrimitiveSerializer<PatchOauthTwoFactor200Response> {
  @override
  final Iterable<Type> types = const [PatchOauthTwoFactor200Response, _$PatchOauthTwoFactor200Response];

  @override
  final String wireName = r'PatchOauthTwoFactor200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PatchOauthTwoFactor200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.login != null) {
      yield r'login';
      yield serializers.serialize(
        object.login,
        specifiedType: const FullType(bool),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PatchOauthTwoFactor200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PatchOauthTwoFactor200ResponseBuilder result,
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
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PatchOauthTwoFactor200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PatchOauthTwoFactor200ResponseBuilder();
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

