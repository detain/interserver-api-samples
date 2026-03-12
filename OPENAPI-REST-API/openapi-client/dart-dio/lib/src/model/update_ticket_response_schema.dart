//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'update_ticket_response_schema.g.dart';

/// UpdateTicketResponseSchema
///
/// Properties:
/// * [success] 
/// * [message] 
@BuiltValue()
abstract class UpdateTicketResponseSchema implements Built<UpdateTicketResponseSchema, UpdateTicketResponseSchemaBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'message')
  String? get message;

  UpdateTicketResponseSchema._();

  factory UpdateTicketResponseSchema([void updates(UpdateTicketResponseSchemaBuilder b)]) = _$UpdateTicketResponseSchema;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(UpdateTicketResponseSchemaBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<UpdateTicketResponseSchema> get serializer => _$UpdateTicketResponseSchemaSerializer();
}

class _$UpdateTicketResponseSchemaSerializer implements PrimitiveSerializer<UpdateTicketResponseSchema> {
  @override
  final Iterable<Type> types = const [UpdateTicketResponseSchema, _$UpdateTicketResponseSchema];

  @override
  final String wireName = r'UpdateTicketResponseSchema';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    UpdateTicketResponseSchema object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
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
    UpdateTicketResponseSchema object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required UpdateTicketResponseSchemaBuilder result,
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
  UpdateTicketResponseSchema deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = UpdateTicketResponseSchemaBuilder();
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

