//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'patch_oauth_two_factor_request.g.dart';

/// PatchOauthTwoFactorRequest
///
/// Properties:
/// * [accountId] - The account ID returned from the POST callback.
/// * [code] - The 6-digit two-factor authentication code.
@BuiltValue()
abstract class PatchOauthTwoFactorRequest implements Built<PatchOauthTwoFactorRequest, PatchOauthTwoFactorRequestBuilder> {
  /// The account ID returned from the POST callback.
  @BuiltValueField(wireName: r'account_id')
  int get accountId;

  /// The 6-digit two-factor authentication code.
  @BuiltValueField(wireName: r'code')
  String get code;

  PatchOauthTwoFactorRequest._();

  factory PatchOauthTwoFactorRequest([void updates(PatchOauthTwoFactorRequestBuilder b)]) = _$PatchOauthTwoFactorRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PatchOauthTwoFactorRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PatchOauthTwoFactorRequest> get serializer => _$PatchOauthTwoFactorRequestSerializer();
}

class _$PatchOauthTwoFactorRequestSerializer implements PrimitiveSerializer<PatchOauthTwoFactorRequest> {
  @override
  final Iterable<Type> types = const [PatchOauthTwoFactorRequest, _$PatchOauthTwoFactorRequest];

  @override
  final String wireName = r'PatchOauthTwoFactorRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PatchOauthTwoFactorRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'account_id';
    yield serializers.serialize(
      object.accountId,
      specifiedType: const FullType(int),
    );
    yield r'code';
    yield serializers.serialize(
      object.code,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    PatchOauthTwoFactorRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PatchOauthTwoFactorRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'account_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.accountId = valueDes;
          break;
        case r'code':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.code = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PatchOauthTwoFactorRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PatchOauthTwoFactorRequestBuilder();
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

