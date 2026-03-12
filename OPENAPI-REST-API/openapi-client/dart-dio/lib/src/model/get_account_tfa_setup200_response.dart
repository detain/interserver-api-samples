//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_account_tfa_setup200_response.g.dart';

/// GetAccountTfaSetup200Response
///
/// Properties:
/// * [n2faGoogleKey] - Base64-encoded secret key for TOTP setup.
/// * [n2faGoogleSplit] - Human-readable formatted key (chunks of 4 characters).
@BuiltValue()
abstract class GetAccountTfaSetup200Response implements Built<GetAccountTfaSetup200Response, GetAccountTfaSetup200ResponseBuilder> {
  /// Base64-encoded secret key for TOTP setup.
  @BuiltValueField(wireName: r'2fa_google_key')
  String? get n2faGoogleKey;

  /// Human-readable formatted key (chunks of 4 characters).
  @BuiltValueField(wireName: r'2fa_google_split')
  String? get n2faGoogleSplit;

  GetAccountTfaSetup200Response._();

  factory GetAccountTfaSetup200Response([void updates(GetAccountTfaSetup200ResponseBuilder b)]) = _$GetAccountTfaSetup200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetAccountTfaSetup200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetAccountTfaSetup200Response> get serializer => _$GetAccountTfaSetup200ResponseSerializer();
}

class _$GetAccountTfaSetup200ResponseSerializer implements PrimitiveSerializer<GetAccountTfaSetup200Response> {
  @override
  final Iterable<Type> types = const [GetAccountTfaSetup200Response, _$GetAccountTfaSetup200Response];

  @override
  final String wireName = r'GetAccountTfaSetup200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetAccountTfaSetup200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n2faGoogleKey != null) {
      yield r'2fa_google_key';
      yield serializers.serialize(
        object.n2faGoogleKey,
        specifiedType: const FullType(String),
      );
    }
    if (object.n2faGoogleSplit != null) {
      yield r'2fa_google_split';
      yield serializers.serialize(
        object.n2faGoogleSplit,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetAccountTfaSetup200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetAccountTfaSetup200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'2fa_google_key':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n2faGoogleKey = valueDes;
          break;
        case r'2fa_google_split':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n2faGoogleSplit = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetAccountTfaSetup200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetAccountTfaSetup200ResponseBuilder();
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

