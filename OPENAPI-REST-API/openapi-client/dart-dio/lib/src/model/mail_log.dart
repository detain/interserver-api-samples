//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/mail_log_entry.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_log.g.dart';

/// Mail log records
///
/// Properties:
/// * [total] - total number of mail log entries
/// * [skip] - number of emails skipped in listing
/// * [limit] - number of emails to return
/// * [emails] 
@BuiltValue()
abstract class MailLog implements Built<MailLog, MailLogBuilder> {
  /// total number of mail log entries
  @BuiltValueField(wireName: r'total')
  int get total;

  /// number of emails skipped in listing
  @BuiltValueField(wireName: r'skip')
  int get skip;

  /// number of emails to return
  @BuiltValueField(wireName: r'limit')
  int get limit;

  @BuiltValueField(wireName: r'emails')
  BuiltList<MailLogEntry> get emails;

  MailLog._();

  factory MailLog([void updates(MailLogBuilder b)]) = _$MailLog;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailLogBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailLog> get serializer => _$MailLogSerializer();
}

class _$MailLogSerializer implements PrimitiveSerializer<MailLog> {
  @override
  final Iterable<Type> types = const [MailLog, _$MailLog];

  @override
  final String wireName = r'MailLog';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailLog object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'total';
    yield serializers.serialize(
      object.total,
      specifiedType: const FullType(int),
    );
    yield r'skip';
    yield serializers.serialize(
      object.skip,
      specifiedType: const FullType(int),
    );
    yield r'limit';
    yield serializers.serialize(
      object.limit,
      specifiedType: const FullType(int),
    );
    yield r'emails';
    yield serializers.serialize(
      object.emails,
      specifiedType: const FullType(BuiltList, [FullType(MailLogEntry)]),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    MailLog object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailLogBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'total':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.total = valueDes;
          break;
        case r'skip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.skip = valueDes;
          break;
        case r'limit':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.limit = valueDes;
          break;
        case r'emails':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(MailLogEntry)]),
          ) as BuiltList<MailLogEntry>;
          result.emails.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailLog deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailLogBuilder();
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

