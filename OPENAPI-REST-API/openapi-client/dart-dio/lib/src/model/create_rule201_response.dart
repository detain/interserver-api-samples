//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'create_rule201_response.g.dart';

/// CreateRule201Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class CreateRule201Response implements Built<CreateRule201Response, CreateRule201ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'text')
  String? get text;

  CreateRule201Response._();

  factory CreateRule201Response([void updates(CreateRule201ResponseBuilder b)]) = _$CreateRule201Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CreateRule201ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CreateRule201Response> get serializer => _$CreateRule201ResponseSerializer();
}

class _$CreateRule201ResponseSerializer implements PrimitiveSerializer<CreateRule201Response> {
  @override
  final Iterable<Type> types = const [CreateRule201Response, _$CreateRule201Response];

  @override
  final String wireName = r'CreateRule201Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CreateRule201Response object, {
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
    CreateRule201Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CreateRule201ResponseBuilder result,
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
  CreateRule201Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CreateRule201ResponseBuilder();
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

