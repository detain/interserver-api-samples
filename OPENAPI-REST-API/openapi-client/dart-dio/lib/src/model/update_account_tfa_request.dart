//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'update_account_tfa_request.g.dart';

/// UpdateAccountTfaRequest
///
/// Properties:
/// * [n2faGoogleCode] - The 6-digit verification code from your authenticator app.
@BuiltValue()
abstract class UpdateAccountTfaRequest implements Built<UpdateAccountTfaRequest, UpdateAccountTfaRequestBuilder> {
  /// The 6-digit verification code from your authenticator app.
  @BuiltValueField(wireName: r'2fa_google_code')
  String get n2faGoogleCode;

  UpdateAccountTfaRequest._();

  factory UpdateAccountTfaRequest([void updates(UpdateAccountTfaRequestBuilder b)]) = _$UpdateAccountTfaRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(UpdateAccountTfaRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<UpdateAccountTfaRequest> get serializer => _$UpdateAccountTfaRequestSerializer();
}

class _$UpdateAccountTfaRequestSerializer implements PrimitiveSerializer<UpdateAccountTfaRequest> {
  @override
  final Iterable<Type> types = const [UpdateAccountTfaRequest, _$UpdateAccountTfaRequest];

  @override
  final String wireName = r'UpdateAccountTfaRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    UpdateAccountTfaRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'2fa_google_code';
    yield serializers.serialize(
      object.n2faGoogleCode,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    UpdateAccountTfaRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required UpdateAccountTfaRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'2fa_google_code':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n2faGoogleCode = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  UpdateAccountTfaRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = UpdateAccountTfaRequestBuilder();
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

