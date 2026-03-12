//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/mail_tutorials_table_row.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_tutorials_table.g.dart';

/// A table of tutorial links displayed for a mail service.
///
/// Properties:
/// * [title] - The title of the tutorials table.
/// * [rows] - The rows of the tutorials table.
@BuiltValue()
abstract class MailTutorialsTable implements Built<MailTutorialsTable, MailTutorialsTableBuilder> {
  /// The title of the tutorials table.
  @BuiltValueField(wireName: r'title')
  String? get title;

  /// The rows of the tutorials table.
  @BuiltValueField(wireName: r'rows')
  BuiltList<MailTutorialsTableRow>? get rows;

  MailTutorialsTable._();

  factory MailTutorialsTable([void updates(MailTutorialsTableBuilder b)]) = _$MailTutorialsTable;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailTutorialsTableBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailTutorialsTable> get serializer => _$MailTutorialsTableSerializer();
}

class _$MailTutorialsTableSerializer implements PrimitiveSerializer<MailTutorialsTable> {
  @override
  final Iterable<Type> types = const [MailTutorialsTable, _$MailTutorialsTable];

  @override
  final String wireName = r'MailTutorialsTable';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailTutorialsTable object, {
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
        specifiedType: const FullType(BuiltList, [FullType(MailTutorialsTableRow)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailTutorialsTable object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailTutorialsTableBuilder result,
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
            specifiedType: const FullType(BuiltList, [FullType(MailTutorialsTableRow)]),
          ) as BuiltList<MailTutorialsTableRow>;
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
  MailTutorialsTable deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailTutorialsTableBuilder();
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

