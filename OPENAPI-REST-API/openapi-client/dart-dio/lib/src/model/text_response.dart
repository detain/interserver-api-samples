//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'text_response.g.dart';

/// Text Response Object
///
/// Properties:
/// * [text] - Response text
/// * [message] - Response message
@BuiltValue()
abstract class TextResponse implements Built<TextResponse, TextResponseBuilder> {
  /// Response text
  @BuiltValueField(wireName: r'text')
  String? get text;

  /// Response message
  @BuiltValueField(wireName: r'message')
  String? get message;

  TextResponse._();

  factory TextResponse([void updates(TextResponseBuilder b)]) = _$TextResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TextResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<TextResponse> get serializer => _$TextResponseSerializer();
}

class _$TextResponseSerializer implements PrimitiveSerializer<TextResponse> {
  @override
  final Iterable<Type> types = const [TextResponse, _$TextResponse];

  @override
  final String wireName = r'TextResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    TextResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
    if (object.message != null) {
      yield r'message';
      yield serializers.serialize(
        object.message,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    TextResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required TextResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        case r'message':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.message = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  TextResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TextResponseBuilder();
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

