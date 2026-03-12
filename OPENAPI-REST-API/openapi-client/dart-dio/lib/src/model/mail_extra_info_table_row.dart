//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_extra_info_table_row.g.dart';

/// A single row in the mail service supplementary information table.
///
/// Properties:
/// * [desc] - The description of the extra info table row.
/// * [value] - The value of the extra info table row.
@BuiltValue()
abstract class MailExtraInfoTableRow implements Built<MailExtraInfoTableRow, MailExtraInfoTableRowBuilder> {
  /// The description of the extra info table row.
  @BuiltValueField(wireName: r'desc')
  String? get desc;

  /// The value of the extra info table row.
  @BuiltValueField(wireName: r'value')
  String? get value;

  MailExtraInfoTableRow._();

  factory MailExtraInfoTableRow([void updates(MailExtraInfoTableRowBuilder b)]) = _$MailExtraInfoTableRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailExtraInfoTableRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailExtraInfoTableRow> get serializer => _$MailExtraInfoTableRowSerializer();
}

class _$MailExtraInfoTableRowSerializer implements PrimitiveSerializer<MailExtraInfoTableRow> {
  @override
  final Iterable<Type> types = const [MailExtraInfoTableRow, _$MailExtraInfoTableRow];

  @override
  final String wireName = r'MailExtraInfoTableRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailExtraInfoTableRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.desc != null) {
      yield r'desc';
      yield serializers.serialize(
        object.desc,
        specifiedType: const FullType(String),
      );
    }
    if (object.value != null) {
      yield r'value';
      yield serializers.serialize(
        object.value,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailExtraInfoTableRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailExtraInfoTableRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.desc = valueDes;
          break;
        case r'value':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.value = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailExtraInfoTableRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailExtraInfoTableRowBuilder();
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

