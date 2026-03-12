//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_log_entry.g.dart';

/// An email record
///
/// Properties:
/// * [id] - internal db id
/// * [id] - mail id
/// * [from] - from address
/// * [to] - to address
/// * [subject] - email subject
/// * [created] - creation date
/// * [time] - creation timestamp
/// * [user] - user account
/// * [transtype] - transaction type
/// * [origin] - origin ip
/// * [interface_] - interface name
/// * [sendingZone] - sending zone
/// * [bodySize] - email body size in bytes
/// * [seq] - index of email in the to adderess list
/// * [recipient] - to address this email is being sent to
/// * [domain] - to address domain
/// * [locked] - locked status
/// * [lockTime] - lock timestamp
/// * [assigned] - assigned server
/// * [queued] - queued timestamp
/// * [mxHostname] - mx hostname
/// * [response] - mail delivery response
/// * [messageId] - message id
@BuiltValue()
abstract class MailLogEntry implements Built<MailLogEntry, MailLogEntryBuilder> {
  /// internal db id
  @BuiltValueField(wireName: r'_id')
  int get id;

  /// mail id
  @BuiltValueField(wireName: r'id')
  String get id;

  /// from address
  @BuiltValueField(wireName: r'from')
  String get from;

  /// to address
  @BuiltValueField(wireName: r'to')
  String get to;

  /// email subject
  @BuiltValueField(wireName: r'subject')
  String get subject;

  /// creation date
  @BuiltValueField(wireName: r'created')
  String get created;

  /// creation timestamp
  @BuiltValueField(wireName: r'time')
  int get time;

  /// user account
  @BuiltValueField(wireName: r'user')
  String get user;

  /// transaction type
  @BuiltValueField(wireName: r'transtype')
  String get transtype;

  /// origin ip
  @BuiltValueField(wireName: r'origin')
  String get origin;

  /// interface name
  @BuiltValueField(wireName: r'interface')
  String get interface_;

  /// sending zone
  @BuiltValueField(wireName: r'sendingZone')
  String get sendingZone;

  /// email body size in bytes
  @BuiltValueField(wireName: r'bodySize')
  int get bodySize;

  /// index of email in the to adderess list
  @BuiltValueField(wireName: r'seq')
  int get seq;

  /// to address this email is being sent to
  @BuiltValueField(wireName: r'recipient')
  String get recipient;

  /// to address domain
  @BuiltValueField(wireName: r'domain')
  String get domain;

  /// locked status
  @BuiltValueField(wireName: r'locked')
  int get locked;

  /// lock timestamp
  @BuiltValueField(wireName: r'lockTime')
  int get lockTime;

  /// assigned server
  @BuiltValueField(wireName: r'assigned')
  String get assigned;

  /// queued timestamp
  @BuiltValueField(wireName: r'queued')
  String get queued;

  /// mx hostname
  @BuiltValueField(wireName: r'mxHostname')
  String get mxHostname;

  /// mail delivery response
  @BuiltValueField(wireName: r'response')
  String get response;

  /// message id
  @BuiltValueField(wireName: r'messageId')
  String? get messageId;

  MailLogEntry._();

  factory MailLogEntry([void updates(MailLogEntryBuilder b)]) = _$MailLogEntry;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailLogEntryBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailLogEntry> get serializer => _$MailLogEntrySerializer();
}

class _$MailLogEntrySerializer implements PrimitiveSerializer<MailLogEntry> {
  @override
  final Iterable<Type> types = const [MailLogEntry, _$MailLogEntry];

  @override
  final String wireName = r'MailLogEntry';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailLogEntry object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'_id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(int),
    );
    yield r'id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(String),
    );
    yield r'from';
    yield serializers.serialize(
      object.from,
      specifiedType: const FullType(String),
    );
    yield r'to';
    yield serializers.serialize(
      object.to,
      specifiedType: const FullType(String),
    );
    yield r'subject';
    yield serializers.serialize(
      object.subject,
      specifiedType: const FullType(String),
    );
    yield r'created';
    yield serializers.serialize(
      object.created,
      specifiedType: const FullType(String),
    );
    yield r'time';
    yield serializers.serialize(
      object.time,
      specifiedType: const FullType(int),
    );
    yield r'user';
    yield serializers.serialize(
      object.user,
      specifiedType: const FullType(String),
    );
    yield r'transtype';
    yield serializers.serialize(
      object.transtype,
      specifiedType: const FullType(String),
    );
    yield r'origin';
    yield serializers.serialize(
      object.origin,
      specifiedType: const FullType(String),
    );
    yield r'interface';
    yield serializers.serialize(
      object.interface_,
      specifiedType: const FullType(String),
    );
    yield r'sendingZone';
    yield serializers.serialize(
      object.sendingZone,
      specifiedType: const FullType(String),
    );
    yield r'bodySize';
    yield serializers.serialize(
      object.bodySize,
      specifiedType: const FullType(int),
    );
    yield r'seq';
    yield serializers.serialize(
      object.seq,
      specifiedType: const FullType(int),
    );
    yield r'recipient';
    yield serializers.serialize(
      object.recipient,
      specifiedType: const FullType(String),
    );
    yield r'domain';
    yield serializers.serialize(
      object.domain,
      specifiedType: const FullType(String),
    );
    yield r'locked';
    yield serializers.serialize(
      object.locked,
      specifiedType: const FullType(int),
    );
    yield r'lockTime';
    yield serializers.serialize(
      object.lockTime,
      specifiedType: const FullType(int),
    );
    yield r'assigned';
    yield serializers.serialize(
      object.assigned,
      specifiedType: const FullType(String),
    );
    yield r'queued';
    yield serializers.serialize(
      object.queued,
      specifiedType: const FullType(String),
    );
    yield r'mxHostname';
    yield serializers.serialize(
      object.mxHostname,
      specifiedType: const FullType(String),
    );
    yield r'response';
    yield serializers.serialize(
      object.response,
      specifiedType: const FullType(String),
    );
    if (object.messageId != null) {
      yield r'messageId';
      yield serializers.serialize(
        object.messageId,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailLogEntry object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailLogEntryBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.id = valueDes;
          break;
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.id = valueDes;
          break;
        case r'from':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.from = valueDes;
          break;
        case r'to':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.to = valueDes;
          break;
        case r'subject':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.subject = valueDes;
          break;
        case r'created':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.created = valueDes;
          break;
        case r'time':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.time = valueDes;
          break;
        case r'user':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.user = valueDes;
          break;
        case r'transtype':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.transtype = valueDes;
          break;
        case r'origin':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.origin = valueDes;
          break;
        case r'interface':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.interface_ = valueDes;
          break;
        case r'sendingZone':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sendingZone = valueDes;
          break;
        case r'bodySize':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.bodySize = valueDes;
          break;
        case r'seq':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.seq = valueDes;
          break;
        case r'recipient':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.recipient = valueDes;
          break;
        case r'domain':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domain = valueDes;
          break;
        case r'locked':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.locked = valueDes;
          break;
        case r'lockTime':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.lockTime = valueDes;
          break;
        case r'assigned':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.assigned = valueDes;
          break;
        case r'queued':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.queued = valueDes;
          break;
        case r'mxHostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mxHostname = valueDes;
          break;
        case r'response':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.response = valueDes;
          break;
        case r'messageId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.messageId = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailLogEntry deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailLogEntryBuilder();
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

