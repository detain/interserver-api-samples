//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'login_error_response.g.dart';

/// Error resposne during login indicating further action.
///
/// Properties:
/// * [message] 
/// * [field] 
@BuiltValue()
abstract class LoginErrorResponse implements Built<LoginErrorResponse, LoginErrorResponseBuilder> {
  @BuiltValueField(wireName: r'message')
  String? get message;

  @BuiltValueField(wireName: r'field')
  String? get field;

  LoginErrorResponse._();

  factory LoginErrorResponse([void updates(LoginErrorResponseBuilder b)]) = _$LoginErrorResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LoginErrorResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LoginErrorResponse> get serializer => _$LoginErrorResponseSerializer();
}

class _$LoginErrorResponseSerializer implements PrimitiveSerializer<LoginErrorResponse> {
  @override
  final Iterable<Type> types = const [LoginErrorResponse, _$LoginErrorResponse];

  @override
  final String wireName = r'LoginErrorResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LoginErrorResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.message != null) {
      yield r'message';
      yield serializers.serialize(
        object.message,
        specifiedType: const FullType(String),
      );
    }
    if (object.field != null) {
      yield r'field';
      yield serializers.serialize(
        object.field,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LoginErrorResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LoginErrorResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'message':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.message = valueDes;
          break;
        case r'field':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.field = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LoginErrorResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LoginErrorResponseBuilder();
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

