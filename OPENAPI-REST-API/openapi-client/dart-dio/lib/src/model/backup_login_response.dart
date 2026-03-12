//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_login_response.g.dart';

/// Login session response for backup storage.
///
/// Properties:
/// * [success] - Indicates whether a login session was created.
/// * [text] - Login URL or error text returned by the storage provider.
@BuiltValue()
abstract class BackupLoginResponse implements Built<BackupLoginResponse, BackupLoginResponseBuilder> {
  /// Indicates whether a login session was created.
  @BuiltValueField(wireName: r'success')
  bool? get success;

  /// Login URL or error text returned by the storage provider.
  @BuiltValueField(wireName: r'text')
  String? get text;

  BackupLoginResponse._();

  factory BackupLoginResponse([void updates(BackupLoginResponseBuilder b)]) = _$BackupLoginResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupLoginResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupLoginResponse> get serializer => _$BackupLoginResponseSerializer();
}

class _$BackupLoginResponseSerializer implements PrimitiveSerializer<BackupLoginResponse> {
  @override
  final Iterable<Type> types = const [BackupLoginResponse, _$BackupLoginResponse];

  @override
  final String wireName = r'BackupLoginResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupLoginResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
      );
    }
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupLoginResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupLoginResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.success = valueDes;
          break;
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupLoginResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupLoginResponseBuilder();
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

