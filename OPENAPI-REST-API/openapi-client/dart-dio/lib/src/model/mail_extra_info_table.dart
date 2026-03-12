//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/mail_extra_info_table_row.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_extra_info_table.g.dart';

/// A supplementary information table for a mail service (e.g., connection details).
///
/// Properties:
/// * [title] - The title of the extra info table.
/// * [rows] - The rows of the extra info table.
@BuiltValue()
abstract class MailExtraInfoTable implements Built<MailExtraInfoTable, MailExtraInfoTableBuilder> {
  /// The title of the extra info table.
  @BuiltValueField(wireName: r'title')
  String? get title;

  /// The rows of the extra info table.
  @BuiltValueField(wireName: r'rows')
  BuiltList<MailExtraInfoTableRow>? get rows;

  MailExtraInfoTable._();

  factory MailExtraInfoTable([void updates(MailExtraInfoTableBuilder b)]) = _$MailExtraInfoTable;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailExtraInfoTableBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailExtraInfoTable> get serializer => _$MailExtraInfoTableSerializer();
}

class _$MailExtraInfoTableSerializer implements PrimitiveSerializer<MailExtraInfoTable> {
  @override
  final Iterable<Type> types = const [MailExtraInfoTable, _$MailExtraInfoTable];

  @override
  final String wireName = r'MailExtraInfoTable';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailExtraInfoTable object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.title != null) {
      yield r'title';
      yield serializers.serialize(
        object.title,
        specifiedType: const FullType(String),
      );
    }
    if (object.rows != null) {
      yield r'rows';
      yield serializers.serialize(
        object.rows,
        specifiedType: const FullType(BuiltList, [FullType(MailExtraInfoTableRow)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailExtraInfoTable object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailExtraInfoTableBuilder result,
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
        case r'rows':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(MailExtraInfoTableRow)]),
          ) as BuiltList<MailExtraInfoTableRow>;
          result.rows.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailExtraInfoTable deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailExtraInfoTableBuilder();
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

