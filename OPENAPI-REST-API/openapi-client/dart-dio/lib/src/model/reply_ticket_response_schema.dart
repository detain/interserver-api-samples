//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'reply_ticket_response_schema.g.dart';

/// ReplyTicketResponseSchema
///
/// Properties:
/// * [success] 
/// * [postId] 
@BuiltValue()
abstract class ReplyTicketResponseSchema implements Built<ReplyTicketResponseSchema, ReplyTicketResponseSchemaBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'post_id')
  int? get postId;

  ReplyTicketResponseSchema._();

  factory ReplyTicketResponseSchema([void updates(ReplyTicketResponseSchemaBuilder b)]) = _$ReplyTicketResponseSchema;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ReplyTicketResponseSchemaBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ReplyTicketResponseSchema> get serializer => _$ReplyTicketResponseSchemaSerializer();
}

class _$ReplyTicketResponseSchemaSerializer implements PrimitiveSerializer<ReplyTicketResponseSchema> {
  @override
  final Iterable<Type> types = const [ReplyTicketResponseSchema, _$ReplyTicketResponseSchema];

  @override
  final String wireName = r'ReplyTicketResponseSchema';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ReplyTicketResponseSchema object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
      );
    }
    if (object.postId != null) {
      yield r'post_id';
      yield serializers.serialize(
        object.postId,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ReplyTicketResponseSchema object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ReplyTicketResponseSchemaBuilder result,
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
        case r'post_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.postId = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ReplyTicketResponseSchema deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ReplyTicketResponseSchemaBuilder();
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

