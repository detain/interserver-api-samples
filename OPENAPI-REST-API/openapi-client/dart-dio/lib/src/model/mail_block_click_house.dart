//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/date.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_block_click_house.g.dart';

/// A block entry from the clickhouse mailblocks server.
///
/// Properties:
/// * [date] 
/// * [from] 
/// * [messageId] 
/// * [subject] 
/// * [to] 
@BuiltValue()
abstract class MailBlockClickHouse implements Built<MailBlockClickHouse, MailBlockClickHouseBuilder> {
  @BuiltValueField(wireName: r'date')
  Date get date;

  @BuiltValueField(wireName: r'from')
  String get from;

  @BuiltValueField(wireName: r'messageId')
  String get messageId;

  @BuiltValueField(wireName: r'subject')
  String get subject;

  @BuiltValueField(wireName: r'to')
  String get to;

  MailBlockClickHouse._();

  factory MailBlockClickHouse([void updates(MailBlockClickHouseBuilder b)]) = _$MailBlockClickHouse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailBlockClickHouseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailBlockClickHouse> get serializer => _$MailBlockClickHouseSerializer();
}

class _$MailBlockClickHouseSerializer implements PrimitiveSerializer<MailBlockClickHouse> {
  @override
  final Iterable<Type> types = const [MailBlockClickHouse, _$MailBlockClickHouse];

  @override
  final String wireName = r'MailBlockClickHouse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailBlockClickHouse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'date';
    yield serializers.serialize(
      object.date,
      specifiedType: const FullType(Date),
    );
    yield r'from';
    yield serializers.serialize(
      object.from,
      specifiedType: const FullType(String),
    );
    yield r'messageId';
    yield serializers.serialize(
      object.messageId,
      specifiedType: const FullType(String),
    );
    yield r'subject';
    yield serializers.serialize(
      object.subject,
      specifiedType: const FullType(String),
    );
    yield r'to';
    yield serializers.serialize(
      object.to,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    MailBlockClickHouse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailBlockClickHouseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(Date),
          ) as Date;
          result.date = valueDes;
          break;
        case r'from':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.from = valueDes;
          break;
        case r'messageId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.messageId = valueDes;
          break;
        case r'subject':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.subject = valueDes;
          break;
        case r'to':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.to = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailBlockClickHouse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailBlockClickHouseBuilder();
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

