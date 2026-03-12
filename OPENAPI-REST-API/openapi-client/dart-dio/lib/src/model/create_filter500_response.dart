//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'create_filter500_response.g.dart';

/// CreateFilter500Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class CreateFilter500Response implements Built<CreateFilter500Response, CreateFilter500ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'text')
  String? get text;

  CreateFilter500Response._();

  factory CreateFilter500Response([void updates(CreateFilter500ResponseBuilder b)]) = _$CreateFilter500Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CreateFilter500ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CreateFilter500Response> get serializer => _$CreateFilter500ResponseSerializer();
}

class _$CreateFilter500ResponseSerializer implements PrimitiveSerializer<CreateFilter500Response> {
  @override
  final Iterable<Type> types = const [CreateFilter500Response, _$CreateFilter500Response];

  @override
  final String wireName = r'CreateFilter500Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CreateFilter500Response object, {
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
    CreateFilter500Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CreateFilter500ResponseBuilder result,
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
  CreateFilter500Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CreateFilter500ResponseBuilder();
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

