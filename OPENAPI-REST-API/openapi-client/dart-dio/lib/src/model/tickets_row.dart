//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'tickets_row.g.dart';

/// Information about a single ticket.
///
/// Properties:
/// * [title] 
/// * [ticketmaskid] 
/// * [lastreplier] 
/// * [status] 
/// * [priority] 
/// * [totalReplies] 
/// * [lastactivity] 
/// * [departmenttitle] 
/// * [ticketid] 
/// * [canClose] 
/// * [attachments] 
/// * [statusText] 
/// * [checked] 
@BuiltValue()
abstract class TicketsRow implements Built<TicketsRow, TicketsRowBuilder> {
  @BuiltValueField(wireName: r'title')
  String get title;

  @BuiltValueField(wireName: r'ticketmaskid')
  String get ticketmaskid;

  @BuiltValueField(wireName: r'lastreplier')
  String get lastreplier;

  @BuiltValueField(wireName: r'status')
  String get status;

  @BuiltValueField(wireName: r'priority')
  String get priority;

  @BuiltValueField(wireName: r'total_replies')
  int get totalReplies;

  @BuiltValueField(wireName: r'lastactivity')
  String get lastactivity;

  @BuiltValueField(wireName: r'departmenttitle')
  String get departmenttitle;

  @BuiltValueField(wireName: r'ticketid')
  int get ticketid;

  @BuiltValueField(wireName: r'can_close')
  String get canClose;

  @BuiltValueField(wireName: r'attachments')
  JsonObject? get attachments;

  @BuiltValueField(wireName: r'status_text')
  String get statusText;

  @BuiltValueField(wireName: r'checked')
  bool get checked;

  TicketsRow._();

  factory TicketsRow([void updates(TicketsRowBuilder b)]) = _$TicketsRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TicketsRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<TicketsRow> get serializer => _$TicketsRowSerializer();
}

class _$TicketsRowSerializer implements PrimitiveSerializer<TicketsRow> {
  @override
  final Iterable<Type> types = const [TicketsRow, _$TicketsRow];

  @override
  final String wireName = r'TicketsRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    TicketsRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'title';
    yield serializers.serialize(
      object.title,
      specifiedType: const FullType(String),
    );
    yield r'ticketmaskid';
    yield serializers.serialize(
      object.ticketmaskid,
      specifiedType: const FullType(String),
    );
    yield r'lastreplier';
    yield serializers.serialize(
      object.lastreplier,
      specifiedType: const FullType(String),
    );
    yield r'status';
    yield serializers.serialize(
      object.status,
      specifiedType: const FullType(String),
    );
    yield r'priority';
    yield serializers.serialize(
      object.priority,
      specifiedType: const FullType(String),
    );
    yield r'total_replies';
    yield serializers.serialize(
      object.totalReplies,
      specifiedType: const FullType(int),
    );
    yield r'lastactivity';
    yield serializers.serialize(
      object.lastactivity,
      specifiedType: const FullType(String),
    );
    yield r'departmenttitle';
    yield serializers.serialize(
      object.departmenttitle,
      specifiedType: const FullType(String),
    );
    yield r'ticketid';
    yield serializers.serialize(
      object.ticketid,
      specifiedType: const FullType(int),
    );
    yield r'can_close';
    yield serializers.serialize(
      object.canClose,
      specifiedType: const FullType(String),
    );
    yield r'attachments';
    yield object.attachments == null ? null : serializers.serialize(
      object.attachments,
      specifiedType: const FullType.nullable(JsonObject),
    );
    yield r'status_text';
    yield serializers.serialize(
      object.statusText,
      specifiedType: const FullType(String),
    );
    yield r'checked';
    yield serializers.serialize(
      object.checked,
      specifiedType: const FullType(bool),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    TicketsRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required TicketsRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'title':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.title = valueDes;
          break;
        case r'ticketmaskid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ticketmaskid = valueDes;
          break;
        case r'lastreplier':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.lastreplier = valueDes;
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
        case r'total_replies':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.totalReplies = valueDes;
          break;
        case r'lastactivity':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.lastactivity = valueDes;
          break;
        case r'departmenttitle':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.departmenttitle = valueDes;
          break;
        case r'ticketid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.ticketid = valueDes;
          break;
        case r'can_close':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.canClose = valueDes;
          break;
        case r'attachments':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.attachments = valueDes;
          break;
        case r'status_text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.statusText = valueDes;
          break;
        case r'checked':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.checked = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  TicketsRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TicketsRowBuilder();
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

