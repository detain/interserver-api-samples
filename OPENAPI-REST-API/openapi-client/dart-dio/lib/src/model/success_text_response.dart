//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'success_text_response.g.dart';

/// Response with success flag and text description.
///
/// Properties:
/// * [success] - Indicates whether or not the command was successful or not.
/// * [text] - Text associated with the response.
/// * [action] - Optional Action relating to the response.
@BuiltValue()
abstract class SuccessTextResponse implements Built<SuccessTextResponse, SuccessTextResponseBuilder> {
  /// Indicates whether or not the command was successful or not.
  @BuiltValueField(wireName: r'success')
  bool get success;

  /// Text associated with the response.
  @BuiltValueField(wireName: r'text')
  String? get text;

  /// Optional Action relating to the response.
  @BuiltValueField(wireName: r'action')
  String? get action;

  SuccessTextResponse._();

  factory SuccessTextResponse([void updates(SuccessTextResponseBuilder b)]) = _$SuccessTextResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(SuccessTextResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<SuccessTextResponse> get serializer => _$SuccessTextResponseSerializer();
}

class _$SuccessTextResponseSerializer implements PrimitiveSerializer<SuccessTextResponse> {
  @override
  final Iterable<Type> types = const [SuccessTextResponse, _$SuccessTextResponse];

  @override
  final String wireName = r'SuccessTextResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    SuccessTextResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'success';
    yield serializers.serialize(
      object.success,
      specifiedType: const FullType(bool),
    );
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
    if (object.action != null) {
      yield r'action';
      yield serializers.serialize(
        object.action,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    SuccessTextResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required SuccessTextResponseBuilder result,
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
        case r'action':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.action = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  SuccessTextResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = SuccessTextResponseBuilder();
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

