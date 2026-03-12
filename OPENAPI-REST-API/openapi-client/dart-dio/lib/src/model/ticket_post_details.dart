//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/ticket_post_details_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'ticket_post_details.g.dart';

/// Fetches every posts of ticket
@BuiltValue()
abstract class TicketPostDetails implements Built<TicketPostDetails, TicketPostDetailsBuilder> {
  TicketPostDetails._();

  factory TicketPostDetails([void updates(TicketPostDetailsBuilder b)]) = _$TicketPostDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TicketPostDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<TicketPostDetails> get serializer => _$TicketPostDetailsSerializer();
}

class _$TicketPostDetailsSerializer implements PrimitiveSerializer<TicketPostDetails> {
  @override
  final Iterable<Type> types = const [TicketPostDetails, _$TicketPostDetails];

  @override
  final String wireName = r'TicketPostDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    TicketPostDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    TicketPostDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  TicketPostDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TicketPostDetailsBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

