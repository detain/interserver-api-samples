//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'create_filter201_response.g.dart';

/// CreateFilter201Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class CreateFilter201Response implements Built<CreateFilter201Response, CreateFilter201ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'text')
  String? get text;

  CreateFilter201Response._();

  factory CreateFilter201Response([void updates(CreateFilter201ResponseBuilder b)]) = _$CreateFilter201Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CreateFilter201ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CreateFilter201Response> get serializer => _$CreateFilter201ResponseSerializer();
}

class _$CreateFilter201ResponseSerializer implements PrimitiveSerializer<CreateFilter201Response> {
  @override
  final Iterable<Type> types = const [CreateFilter201Response, _$CreateFilter201Response];

  @override
  final String wireName = r'CreateFilter201Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CreateFilter201Response object, {
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
    CreateFilter201Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CreateFilter201ResponseBuilder result,
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
  CreateFilter201Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CreateFilter201ResponseBuilder();
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

