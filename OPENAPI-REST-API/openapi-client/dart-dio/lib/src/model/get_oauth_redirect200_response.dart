//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_oauth_redirect200_response.g.dart';

/// GetOauthRedirect200Response
///
/// Properties:
/// * [redirectUrl] - The URL to redirect the user to for OAuth authentication.
@BuiltValue()
abstract class GetOauthRedirect200Response implements Built<GetOauthRedirect200Response, GetOauthRedirect200ResponseBuilder> {
  /// The URL to redirect the user to for OAuth authentication.
  @BuiltValueField(wireName: r'redirect_url')
  String? get redirectUrl;

  GetOauthRedirect200Response._();

  factory GetOauthRedirect200Response([void updates(GetOauthRedirect200ResponseBuilder b)]) = _$GetOauthRedirect200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetOauthRedirect200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetOauthRedirect200Response> get serializer => _$GetOauthRedirect200ResponseSerializer();
}

class _$GetOauthRedirect200ResponseSerializer implements PrimitiveSerializer<GetOauthRedirect200Response> {
  @override
  final Iterable<Type> types = const [GetOauthRedirect200Response, _$GetOauthRedirect200Response];

  @override
  final String wireName = r'GetOauthRedirect200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetOauthRedirect200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.redirectUrl != null) {
      yield r'redirect_url';
      yield serializers.serialize(
        object.redirectUrl,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetOauthRedirect200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetOauthRedirect200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'redirect_url':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.redirectUrl = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetOauthRedirect200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetOauthRedirect200ResponseBuilder();
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

