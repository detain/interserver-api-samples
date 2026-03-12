//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'login_success_response.g.dart';

/// The response from a successful login.
///
/// Properties:
/// * [sessionId] 
/// * [accountId] 
/// * [accountLid] 
/// * [ima] 
/// * [gravatar] 
@BuiltValue()
abstract class LoginSuccessResponse implements Built<LoginSuccessResponse, LoginSuccessResponseBuilder> {
  @BuiltValueField(wireName: r'sessionId')
  String? get sessionId;

  @BuiltValueField(wireName: r'account_id')
  int? get accountId;

  @BuiltValueField(wireName: r'account_lid')
  String? get accountLid;

  @BuiltValueField(wireName: r'ima')
  String? get ima;

  @BuiltValueField(wireName: r'gravatar')
  String? get gravatar;

  LoginSuccessResponse._();

  factory LoginSuccessResponse([void updates(LoginSuccessResponseBuilder b)]) = _$LoginSuccessResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LoginSuccessResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LoginSuccessResponse> get serializer => _$LoginSuccessResponseSerializer();
}

class _$LoginSuccessResponseSerializer implements PrimitiveSerializer<LoginSuccessResponse> {
  @override
  final Iterable<Type> types = const [LoginSuccessResponse, _$LoginSuccessResponse];

  @override
  final String wireName = r'LoginSuccessResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LoginSuccessResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.sessionId != null) {
      yield r'sessionId';
      yield serializers.serialize(
        object.sessionId,
        specifiedType: const FullType(String),
      );
    }
    if (object.accountId != null) {
      yield r'account_id';
      yield serializers.serialize(
        object.accountId,
        specifiedType: const FullType(int),
      );
    }
    if (object.accountLid != null) {
      yield r'account_lid';
      yield serializers.serialize(
        object.accountLid,
        specifiedType: const FullType(String),
      );
    }
    if (object.ima != null) {
      yield r'ima';
      yield serializers.serialize(
        object.ima,
        specifiedType: const FullType(String),
      );
    }
    if (object.gravatar != null) {
      yield r'gravatar';
      yield serializers.serialize(
        object.gravatar,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LoginSuccessResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LoginSuccessResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'sessionId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sessionId = valueDes;
          break;
        case r'account_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.accountId = valueDes;
          break;
        case r'account_lid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.accountLid = valueDes;
          break;
        case r'ima':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ima = valueDes;
          break;
        case r'gravatar':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.gravatar = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LoginSuccessResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LoginSuccessResponseBuilder();
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

