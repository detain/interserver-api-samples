//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/mail_block_click_house.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/mail_block_rspamd.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_blocks.g.dart';

/// The listing of blocked emails.
///
/// Properties:
/// * [local] 
/// * [mbtrap] 
/// * [subject] 
@BuiltValue()
abstract class MailBlocks implements Built<MailBlocks, MailBlocksBuilder> {
  @BuiltValueField(wireName: r'local')
  BuiltList<MailBlockClickHouse> get local;

  @BuiltValueField(wireName: r'mbtrap')
  BuiltList<MailBlockClickHouse> get mbtrap;

  @BuiltValueField(wireName: r'subject')
  BuiltList<MailBlockRspamd> get subject;

  MailBlocks._();

  factory MailBlocks([void updates(MailBlocksBuilder b)]) = _$MailBlocks;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailBlocksBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailBlocks> get serializer => _$MailBlocksSerializer();
}

class _$MailBlocksSerializer implements PrimitiveSerializer<MailBlocks> {
  @override
  final Iterable<Type> types = const [MailBlocks, _$MailBlocks];

  @override
  final String wireName = r'MailBlocks';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailBlocks object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'local';
    yield serializers.serialize(
      object.local,
      specifiedType: const FullType(BuiltList, [FullType(MailBlockClickHouse)]),
    );
    yield r'mbtrap';
    yield serializers.serialize(
      object.mbtrap,
      specifiedType: const FullType(BuiltList, [FullType(MailBlockClickHouse)]),
    );
    yield r'subject';
    yield serializers.serialize(
      object.subject,
      specifiedType: const FullType(BuiltList, [FullType(MailBlockRspamd)]),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    MailBlocks object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailBlocksBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'local':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(MailBlockClickHouse)]),
          ) as BuiltList<MailBlockClickHouse>;
          result.local.replace(valueDes);
          break;
        case r'mbtrap':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(MailBlockClickHouse)]),
          ) as BuiltList<MailBlockClickHouse>;
          result.mbtrap.replace(valueDes);
          break;
        case r'subject':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(MailBlockRspamd)]),
          ) as BuiltList<MailBlockRspamd>;
          result.subject.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailBlocks deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailBlocksBuilder();
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

