//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/website_table_row.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'website_table.g.dart';

/// WebsiteTable
///
/// Properties:
/// * [title] - Title of the table
/// * [rows] 
@BuiltValue()
abstract class WebsiteTable implements Built<WebsiteTable, WebsiteTableBuilder> {
  /// Title of the table
  @BuiltValueField(wireName: r'title')
  String? get title;

  @BuiltValueField(wireName: r'rows')
  BuiltList<WebsiteTableRow>? get rows;

  WebsiteTable._();

  factory WebsiteTable([void updates(WebsiteTableBuilder b)]) = _$WebsiteTable;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsiteTableBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsiteTable> get serializer => _$WebsiteTableSerializer();
}

class _$WebsiteTableSerializer implements PrimitiveSerializer<WebsiteTable> {
  @override
  final Iterable<Type> types = const [WebsiteTable, _$WebsiteTable];

  @override
  final String wireName = r'WebsiteTable';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsiteTable object, {
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
        specifiedType: const FullType(BuiltList, [FullType(WebsiteTableRow)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsiteTable object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsiteTableBuilder result,
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
            specifiedType: const FullType(BuiltList, [FullType(WebsiteTableRow)]),
          ) as BuiltList<WebsiteTableRow>;
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
  WebsiteTable deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsiteTableBuilder();
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

