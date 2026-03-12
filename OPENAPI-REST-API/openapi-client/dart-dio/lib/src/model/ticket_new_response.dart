//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'ticket_new_response.g.dart';

/// Response returned after creating a new support ticket.
///
/// Properties:
/// * [text] 
/// * [success] 
/// * [ticketId] 
@BuiltValue()
abstract class TicketNewResponse implements Built<TicketNewResponse, TicketNewResponseBuilder> {
  @BuiltValueField(wireName: r'text')
  String get text;

  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'ticket_id')
  int? get ticketId;

  TicketNewResponse._();

  factory TicketNewResponse([void updates(TicketNewResponseBuilder b)]) = _$TicketNewResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TicketNewResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<TicketNewResponse> get serializer => _$TicketNewResponseSerializer();
}

class _$TicketNewResponseSerializer implements PrimitiveSerializer<TicketNewResponse> {
  @override
  final Iterable<Type> types = const [TicketNewResponse, _$TicketNewResponse];

  @override
  final String wireName = r'TicketNewResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    TicketNewResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'text';
    yield serializers.serialize(
      object.text,
      specifiedType: const FullType(String),
    );
    yield r'success';
    yield serializers.serialize(
      object.success,
      specifiedType: const FullType(bool),
    );
    if (object.ticketId != null) {
      yield r'ticket_id';
      yield serializers.serialize(
        object.ticketId,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    TicketNewResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required TicketNewResponseBuilder result,
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
        case r'success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.success = valueDes;
          break;
        case r'ticket_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.ticketId = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  TicketNewResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TicketNewResponseBuilder();
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

