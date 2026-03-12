//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'password_request.g.dart';

/// Request containing a password
///
/// Properties:
/// * [password] 
@BuiltValue()
abstract class PasswordRequest implements Built<PasswordRequest, PasswordRequestBuilder> {
  @BuiltValueField(wireName: r'password')
  String get password;

  PasswordRequest._();

  factory PasswordRequest([void updates(PasswordRequestBuilder b)]) = _$PasswordRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PasswordRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PasswordRequest> get serializer => _$PasswordRequestSerializer();
}

class _$PasswordRequestSerializer implements PrimitiveSerializer<PasswordRequest> {
  @override
  final Iterable<Type> types = const [PasswordRequest, _$PasswordRequest];

  @override
  final String wireName = r'PasswordRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PasswordRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'password';
    yield serializers.serialize(
      object.password,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    PasswordRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PasswordRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.password = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PasswordRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PasswordRequestBuilder();
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

