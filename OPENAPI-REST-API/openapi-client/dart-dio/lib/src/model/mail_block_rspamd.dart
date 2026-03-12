//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_block_rspamd.g.dart';

/// This is a block entry from the rspamd block list.
///
/// Properties:
/// * [from] 
/// * [subject] 
@BuiltValue()
abstract class MailBlockRspamd implements Built<MailBlockRspamd, MailBlockRspamdBuilder> {
  @BuiltValueField(wireName: r'from')
  String get from;

  @BuiltValueField(wireName: r'subject')
  String get subject;

  MailBlockRspamd._();

  factory MailBlockRspamd([void updates(MailBlockRspamdBuilder b)]) = _$MailBlockRspamd;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailBlockRspamdBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailBlockRspamd> get serializer => _$MailBlockRspamdSerializer();
}

class _$MailBlockRspamdSerializer implements PrimitiveSerializer<MailBlockRspamd> {
  @override
  final Iterable<Type> types = const [MailBlockRspamd, _$MailBlockRspamd];

  @override
  final String wireName = r'MailBlockRspamd';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailBlockRspamd object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'from';
    yield serializers.serialize(
      object.from,
      specifiedType: const FullType(String),
    );
    yield r'subject';
    yield serializers.serialize(
      object.subject,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    MailBlockRspamd object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailBlockRspamdBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'from':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.from = valueDes;
          break;
        case r'subject':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.subject = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailBlockRspamd deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailBlockRspamdBuilder();
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

