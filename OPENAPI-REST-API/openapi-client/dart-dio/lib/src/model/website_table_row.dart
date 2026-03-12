//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'website_table_row.g.dart';

/// WebsiteTableRow
///
/// Properties:
/// * [desc] - Description for the row
/// * [value] - Value for the row
@BuiltValue()
abstract class WebsiteTableRow implements Built<WebsiteTableRow, WebsiteTableRowBuilder> {
  /// Description for the row
  @BuiltValueField(wireName: r'desc')
  String? get desc;

  /// Value for the row
  @BuiltValueField(wireName: r'value')
  String? get value;

  WebsiteTableRow._();

  factory WebsiteTableRow([void updates(WebsiteTableRowBuilder b)]) = _$WebsiteTableRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsiteTableRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsiteTableRow> get serializer => _$WebsiteTableRowSerializer();
}

class _$WebsiteTableRowSerializer implements PrimitiveSerializer<WebsiteTableRow> {
  @override
  final Iterable<Type> types = const [WebsiteTableRow, _$WebsiteTableRow];

  @override
  final String wireName = r'WebsiteTableRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsiteTableRow object, {
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
    WebsiteTableRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsiteTableRowBuilder result,
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
  WebsiteTableRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsiteTableRowBuilder();
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

