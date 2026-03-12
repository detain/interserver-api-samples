//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_tutorials_table_row.g.dart';

/// A single tutorial entry with a label and URL.
///
/// Properties:
/// * [desc] - The description of the tutorials table row.
/// * [value] - The value of the tutorials table row.
@BuiltValue()
abstract class MailTutorialsTableRow implements Built<MailTutorialsTableRow, MailTutorialsTableRowBuilder> {
  /// The description of the tutorials table row.
  @BuiltValueField(wireName: r'desc')
  String? get desc;

  /// The value of the tutorials table row.
  @BuiltValueField(wireName: r'value')
  String? get value;

  MailTutorialsTableRow._();

  factory MailTutorialsTableRow([void updates(MailTutorialsTableRowBuilder b)]) = _$MailTutorialsTableRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailTutorialsTableRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailTutorialsTableRow> get serializer => _$MailTutorialsTableRowSerializer();
}

class _$MailTutorialsTableRowSerializer implements PrimitiveSerializer<MailTutorialsTableRow> {
  @override
  final Iterable<Type> types = const [MailTutorialsTableRow, _$MailTutorialsTableRow];

  @override
  final String wireName = r'MailTutorialsTableRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailTutorialsTableRow object, {
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
    MailTutorialsTableRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailTutorialsTableRowBuilder result,
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
  MailTutorialsTableRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailTutorialsTableRowBuilder();
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

