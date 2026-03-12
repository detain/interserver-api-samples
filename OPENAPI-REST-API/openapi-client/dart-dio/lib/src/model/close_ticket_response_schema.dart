//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'close_ticket_response_schema.g.dart';

/// CloseTicketResponseSchema
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class CloseTicketResponseSchema implements Built<CloseTicketResponseSchema, CloseTicketResponseSchemaBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'text')
  String? get text;

  CloseTicketResponseSchema._();

  factory CloseTicketResponseSchema([void updates(CloseTicketResponseSchemaBuilder b)]) = _$CloseTicketResponseSchema;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CloseTicketResponseSchemaBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<CloseTicketResponseSchema> get serializer => _$CloseTicketResponseSchemaSerializer();
}

class _$CloseTicketResponseSchemaSerializer implements PrimitiveSerializer<CloseTicketResponseSchema> {
  @override
  final Iterable<Type> types = const [CloseTicketResponseSchema, _$CloseTicketResponseSchema];

  @override
  final String wireName = r'CloseTicketResponseSchema';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CloseTicketResponseSchema object, {
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
    CloseTicketResponseSchema object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CloseTicketResponseSchemaBuilder result,
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
  CloseTicketResponseSchema deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CloseTicketResponseSchemaBuilder();
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

