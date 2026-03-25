//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_log_entry.g.dart';

/// A single email record in the mail log.  Combines data from the message store (envelope metadata), the queue release table (delivery status and response), and the sender delivery table (MX routing details).  When `groupby=recipient` each row represents one delivery attempt; when `groupby=message` delivery fields reflect one arbitrary recipient.
///
/// Properties:
/// * [id] - Internal auto-increment database row ID.
/// * [id] - The relay-assigned mail ID (18-19 hex characters).  Matches the `mailid` filter parameter and the `text` value returned by send endpoints.
/// * [from] - SMTP envelope `MAIL FROM` address.
/// * [to] - SMTP envelope `RCPT TO` address.
/// * [created] - Human-readable creation timestamp in `YYYY-MM-DD HH:MM:SS` format.
/// * [time] - Unix timestamp of message acceptance.  Corresponds to the `startDate` and `endDate` filter parameters.
/// * [user] - The SMTP AUTH username used to submit the message (e.g. `mb5658`).
/// * [transtype] - SMTP transaction type negotiated with the relay.
/// * [origin] - IP address of the client that submitted the message to the relay.
/// * [interface_] - Relay interface name that accepted the message.
/// * [subject] - The `Subject` header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded.
/// * [messageId] - The `Message-ID` header value.  Can be used with the `messageId` filter for subsequent lookups.
/// * [sendingZone] - The sending zone assigned by the relay for outbound delivery.
/// * [bodySize] - Size of the message body in bytes.
/// * [seq] - Sequence index of this recipient in a multi-recipient message. Starts at 1.
/// * [delivered] - Delivery status flag.  `1` = successfully delivered to destination MX. `0` = queued, deferred, or failed.  `null` = delivery not yet attempted.
/// * [code] - The SMTP response code from the destination MX server (e.g. `250`).
/// * [recipient] - The specific recipient address this delivery record is for.
/// * [response] - The full SMTP response string received from the destination MX server.
/// * [domain] - The destination domain for this delivery attempt.
/// * [locked] - Whether the queue entry is currently locked for delivery processing.
/// * [lockTime] - Millisecond-precision timestamp of the last queue lock acquisition.
/// * [assigned] - The relay server node assigned to deliver this message.
/// * [queued] - ISO 8601 timestamp when the message was placed into the delivery queue.
/// * [mxHostname] - The MX hostname the relay connected to for delivery.  Corresponds to the `mx` filter parameter.
@BuiltValue()
abstract class MailLogEntry implements Built<MailLogEntry, MailLogEntryBuilder> {
  /// Internal auto-increment database row ID.
  @BuiltValueField(wireName: r'_id')
  int get id;

  /// The relay-assigned mail ID (18-19 hex characters).  Matches the `mailid` filter parameter and the `text` value returned by send endpoints.
  @BuiltValueField(wireName: r'id')
  String get id;

  /// SMTP envelope `MAIL FROM` address.
  @BuiltValueField(wireName: r'from')
  String get from;

  /// SMTP envelope `RCPT TO` address.
  @BuiltValueField(wireName: r'to')
  String get to;

  /// Human-readable creation timestamp in `YYYY-MM-DD HH:MM:SS` format.
  @BuiltValueField(wireName: r'created')
  String get created;

  /// Unix timestamp of message acceptance.  Corresponds to the `startDate` and `endDate` filter parameters.
  @BuiltValueField(wireName: r'time')
  int get time;

  /// The SMTP AUTH username used to submit the message (e.g. `mb5658`).
  @BuiltValueField(wireName: r'user')
  String get user;

  /// SMTP transaction type negotiated with the relay.
  @BuiltValueField(wireName: r'transtype')
  String get transtype;

  /// IP address of the client that submitted the message to the relay.
  @BuiltValueField(wireName: r'origin')
  String get origin;

  /// Relay interface name that accepted the message.
  @BuiltValueField(wireName: r'interface')
  String get interface_;

  /// The `Subject` header value.  MIME-encoded subjects (UTF-8, ISO-8859, US-ASCII) are automatically decoded.
  @BuiltValueField(wireName: r'subject')
  String? get subject;

  /// The `Message-ID` header value.  Can be used with the `messageId` filter for subsequent lookups.
  @BuiltValueField(wireName: r'messageId')
  String? get messageId;

  /// The sending zone assigned by the relay for outbound delivery.
  @BuiltValueField(wireName: r'sendingZone')
  String? get sendingZone;

  /// Size of the message body in bytes.
  @BuiltValueField(wireName: r'bodySize')
  int? get bodySize;

  /// Sequence index of this recipient in a multi-recipient message. Starts at 1.
  @BuiltValueField(wireName: r'seq')
  int? get seq;

  /// Delivery status flag.  `1` = successfully delivered to destination MX. `0` = queued, deferred, or failed.  `null` = delivery not yet attempted.
  @BuiltValueField(wireName: r'delivered')
  int? get delivered;

  /// The SMTP response code from the destination MX server (e.g. `250`).
  @BuiltValueField(wireName: r'code')
  int? get code;

  /// The specific recipient address this delivery record is for.
  @BuiltValueField(wireName: r'recipient')
  String? get recipient;

  /// The full SMTP response string received from the destination MX server.
  @BuiltValueField(wireName: r'response')
  String? get response;

  /// The destination domain for this delivery attempt.
  @BuiltValueField(wireName: r'domain')
  String? get domain;

  /// Whether the queue entry is currently locked for delivery processing.
  @BuiltValueField(wireName: r'locked')
  int? get locked;

  /// Millisecond-precision timestamp of the last queue lock acquisition.
  @BuiltValueField(wireName: r'lockTime')
  String? get lockTime;

  /// The relay server node assigned to deliver this message.
  @BuiltValueField(wireName: r'assigned')
  String? get assigned;

  /// ISO 8601 timestamp when the message was placed into the delivery queue.
  @BuiltValueField(wireName: r'queued')
  String? get queued;

  /// The MX hostname the relay connected to for delivery.  Corresponds to the `mx` filter parameter.
  @BuiltValueField(wireName: r'mxHostname')
  String? get mxHostname;

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
    if (object.subject != null) {
      yield r'subject';
      yield serializers.serialize(
        object.subject,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.messageId != null) {
      yield r'messageId';
      yield serializers.serialize(
        object.messageId,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.sendingZone != null) {
      yield r'sendingZone';
      yield serializers.serialize(
        object.sendingZone,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.bodySize != null) {
      yield r'bodySize';
      yield serializers.serialize(
        object.bodySize,
        specifiedType: const FullType.nullable(int),
      );
    }
    if (object.seq != null) {
      yield r'seq';
      yield serializers.serialize(
        object.seq,
        specifiedType: const FullType.nullable(int),
      );
    }
    if (object.delivered != null) {
      yield r'delivered';
      yield serializers.serialize(
        object.delivered,
        specifiedType: const FullType.nullable(int),
      );
    }
    if (object.code != null) {
      yield r'code';
      yield serializers.serialize(
        object.code,
        specifiedType: const FullType.nullable(int),
      );
    }
    if (object.recipient != null) {
      yield r'recipient';
      yield serializers.serialize(
        object.recipient,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.response != null) {
      yield r'response';
      yield serializers.serialize(
        object.response,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.domain != null) {
      yield r'domain';
      yield serializers.serialize(
        object.domain,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.locked != null) {
      yield r'locked';
      yield serializers.serialize(
        object.locked,
        specifiedType: const FullType.nullable(int),
      );
    }
    if (object.lockTime != null) {
      yield r'lockTime';
      yield serializers.serialize(
        object.lockTime,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.assigned != null) {
      yield r'assigned';
      yield serializers.serialize(
        object.assigned,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.queued != null) {
      yield r'queued';
      yield serializers.serialize(
        object.queued,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.mxHostname != null) {
      yield r'mxHostname';
      yield serializers.serialize(
        object.mxHostname,
        specifiedType: const FullType.nullable(String),
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
        case r'subject':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.subject = valueDes;
          break;
        case r'messageId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.messageId = valueDes;
          break;
        case r'sendingZone':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.sendingZone = valueDes;
          break;
        case r'bodySize':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(int),
          ) as int?;
          if (valueDes == null) continue;
          result.bodySize = valueDes;
          break;
        case r'seq':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(int),
          ) as int?;
          if (valueDes == null) continue;
          result.seq = valueDes;
          break;
        case r'delivered':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(int),
          ) as int?;
          if (valueDes == null) continue;
          result.delivered = valueDes;
          break;
        case r'code':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(int),
          ) as int?;
          if (valueDes == null) continue;
          result.code = valueDes;
          break;
        case r'recipient':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.recipient = valueDes;
          break;
        case r'response':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.response = valueDes;
          break;
        case r'domain':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.domain = valueDes;
          break;
        case r'locked':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(int),
          ) as int?;
          if (valueDes == null) continue;
          result.locked = valueDes;
          break;
        case r'lockTime':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.lockTime = valueDes;
          break;
        case r'assigned':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.assigned = valueDes;
          break;
        case r'queued':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.queued = valueDes;
          break;
        case r'mxHostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.mxHostname = valueDes;
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

