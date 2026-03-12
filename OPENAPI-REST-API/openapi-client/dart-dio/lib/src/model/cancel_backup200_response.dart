//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'cancel_backup200_response.g.dart';

/// CancelBackup200Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class CancelBackup200Response implements Built<CancelBackup200Response, CancelBackup200ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  CancelBackup200Response._();

  factory CancelBackup200Response([void updates(CancelBackup200ResponseBuilder b)]) = _$CancelBackup200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CancelBackup200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CancelBackup200Response> get serializer => _$CancelBackup200ResponseSerializer();
}

class _$CancelBackup200ResponseSerializer implements PrimitiveSerializer<CancelBackup200Response> {
  @override
  final Iterable<Type> types = const [CancelBackup200Response, _$CancelBackup200Response];

  @override
  final String wireName = r'CancelBackup200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CancelBackup200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'success';
    yield serializers.serialize(
      object.success,
      specifiedType: const FullType(bool),
    );
    yield r'text';
    yield serializers.serialize(
      object.text,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    CancelBackup200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CancelBackup200ResponseBuilder result,
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
  CancelBackup200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CancelBackup200ResponseBuilder();
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

