//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/ticket_post_details.dart';
import 'package:openapi/src/model/ticket_custom_field_details.dart';
import 'package:openapi/src/model/ticket_details.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'view_ticket_response.g.dart';

/// Ticket details
///
/// Properties:
/// * [success] 
/// * [ticket] 
/// * [ticketCustomFields] 
/// * [ticketPosts] 
@BuiltValue()
abstract class ViewTicketResponse implements Built<ViewTicketResponse, ViewTicketResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'ticket')
  TicketDetails get ticket;

  @BuiltValueField(wireName: r'ticket_custom_fields')
  TicketCustomFieldDetails? get ticketCustomFields;

  @BuiltValueField(wireName: r'ticket_posts')
  TicketPostDetails? get ticketPosts;

  ViewTicketResponse._();

  factory ViewTicketResponse([void updates(ViewTicketResponseBuilder b)]) = _$ViewTicketResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ViewTicketResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ViewTicketResponse> get serializer => _$ViewTicketResponseSerializer();
}

class _$ViewTicketResponseSerializer implements PrimitiveSerializer<ViewTicketResponse> {
  @override
  final Iterable<Type> types = const [ViewTicketResponse, _$ViewTicketResponse];

  @override
  final String wireName = r'ViewTicketResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ViewTicketResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'success';
    yield serializers.serialize(
      object.success,
      specifiedType: const FullType(bool),
    );
    yield r'ticket';
    yield serializers.serialize(
      object.ticket,
      specifiedType: const FullType(TicketDetails),
    );
    if (object.ticketCustomFields != null) {
      yield r'ticket_custom_fields';
      yield serializers.serialize(
        object.ticketCustomFields,
        specifiedType: const FullType(TicketCustomFieldDetails),
      );
    }
    if (object.ticketPosts != null) {
      yield r'ticket_posts';
      yield serializers.serialize(
        object.ticketPosts,
        specifiedType: const FullType(TicketPostDetails),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ViewTicketResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ViewTicketResponseBuilder result,
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
        case r'ticket':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(TicketDetails),
          ) as TicketDetails;
          result.ticket.replace(valueDes);
          break;
        case r'ticket_custom_fields':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(TicketCustomFieldDetails),
          ) as TicketCustomFieldDetails;
          result.ticketCustomFields.replace(valueDes);
          break;
        case r'ticket_posts':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(TicketPostDetails),
          ) as TicketPostDetails;
          result.ticketPosts = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ViewTicketResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ViewTicketResponseBuilder();
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

