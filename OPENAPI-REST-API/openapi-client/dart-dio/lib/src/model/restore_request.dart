//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'restore_request.g.dart';

/// Request data to trigger a restore from backup.
///
/// Properties:
/// * [backup] 
/// * [password] 
@BuiltValue()
abstract class RestoreRequest implements Built<RestoreRequest, RestoreRequestBuilder> {
  @BuiltValueField(wireName: r'backup')
  String? get backup;

  @BuiltValueField(wireName: r'password')
  String? get password;

  RestoreRequest._();

  factory RestoreRequest([void updates(RestoreRequestBuilder b)]) = _$RestoreRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(RestoreRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<RestoreRequest> get serializer => _$RestoreRequestSerializer();
}

class _$RestoreRequestSerializer implements PrimitiveSerializer<RestoreRequest> {
  @override
  final Iterable<Type> types = const [RestoreRequest, _$RestoreRequest];

  @override
  final String wireName = r'RestoreRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    RestoreRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.backup != null) {
      yield r'backup';
      yield serializers.serialize(
        object.backup,
        specifiedType: const FullType(String),
      );
    }
    if (object.password != null) {
      yield r'password';
      yield serializers.serialize(
        object.password,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    RestoreRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required RestoreRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'backup':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backup = valueDes;
          break;
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
  RestoreRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = RestoreRequestBuilder();
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

