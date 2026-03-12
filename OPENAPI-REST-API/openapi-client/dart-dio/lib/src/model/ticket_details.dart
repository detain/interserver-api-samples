//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'ticket_details.g.dart';

/// Detailed ticket information
///
/// Properties:
/// * [ticketid] 
/// * [ticketmaskid] 
/// * [department] 
/// * [status] 
/// * [priority] 
/// * [subject] 
/// * [createdOn] 
/// * [updatedOn] 
@BuiltValue()
abstract class TicketDetails implements Built<TicketDetails, TicketDetailsBuilder> {
  @BuiltValueField(wireName: r'ticketid')
  int? get ticketid;

  @BuiltValueField(wireName: r'ticketmaskid')
  String? get ticketmaskid;

  @BuiltValueField(wireName: r'department')
  String? get department;

  @BuiltValueField(wireName: r'status')
  String? get status;

  @BuiltValueField(wireName: r'priority')
  String? get priority;

  @BuiltValueField(wireName: r'subject')
  String? get subject;

  @BuiltValueField(wireName: r'created_on')
  String? get createdOn;

  @BuiltValueField(wireName: r'updated_on')
  String? get updatedOn;

  TicketDetails._();

  factory TicketDetails([void updates(TicketDetailsBuilder b)]) = _$TicketDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TicketDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<TicketDetails> get serializer => _$TicketDetailsSerializer();
}

class _$TicketDetailsSerializer implements PrimitiveSerializer<TicketDetails> {
  @override
  final Iterable<Type> types = const [TicketDetails, _$TicketDetails];

  @override
  final String wireName = r'TicketDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    TicketDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.ticketid != null) {
      yield r'ticketid';
      yield serializers.serialize(
        object.ticketid,
        specifiedType: const FullType(int),
      );
    }
    if (object.ticketmaskid != null) {
      yield r'ticketmaskid';
      yield serializers.serialize(
        object.ticketmaskid,
        specifiedType: const FullType(String),
      );
    }
    if (object.department != null) {
      yield r'department';
      yield serializers.serialize(
        object.department,
        specifiedType: const FullType(String),
      );
    }
    if (object.status != null) {
      yield r'status';
      yield serializers.serialize(
        object.status,
        specifiedType: const FullType(String),
      );
    }
    if (object.priority != null) {
      yield r'priority';
      yield serializers.serialize(
        object.priority,
        specifiedType: const FullType(String),
      );
    }
    if (object.subject != null) {
      yield r'subject';
      yield serializers.serialize(
        object.subject,
        specifiedType: const FullType(String),
      );
    }
    if (object.createdOn != null) {
      yield r'created_on';
      yield serializers.serialize(
        object.createdOn,
        specifiedType: const FullType(String),
      );
    }
    if (object.updatedOn != null) {
      yield r'updated_on';
      yield serializers.serialize(
        object.updatedOn,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    TicketDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required TicketDetailsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ticketid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.ticketid = valueDes;
          break;
        case r'ticketmaskid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ticketmaskid = valueDes;
          break;
        case r'department':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.department = valueDes;
          break;
        case r'status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.status = valueDes;
          break;
        case r'priority':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.priority = valueDes;
          break;
        case r'subject':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.subject = valueDes;
          break;
        case r'created_on':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.createdOn = valueDes;
          break;
        case r'updated_on':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.updatedOn = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  TicketDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TicketDetailsBuilder();
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

