//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/website_table.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'website_extra_info_tables.g.dart';

/// Supplementary information tables displayed for a webhosting service (links, DNS, preview).
///
/// Properties:
/// * [links] 
/// * [preview] 
/// * [dns] 
@BuiltValue()
abstract class WebsiteExtraInfoTables implements Built<WebsiteExtraInfoTables, WebsiteExtraInfoTablesBuilder> {
  @BuiltValueField(wireName: r'links')
  WebsiteTable? get links;

  @BuiltValueField(wireName: r'preview')
  WebsiteTable? get preview;

  @BuiltValueField(wireName: r'dns')
  WebsiteTable? get dns;

  WebsiteExtraInfoTables._();

  factory WebsiteExtraInfoTables([void updates(WebsiteExtraInfoTablesBuilder b)]) = _$WebsiteExtraInfoTables;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsiteExtraInfoTablesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsiteExtraInfoTables> get serializer => _$WebsiteExtraInfoTablesSerializer();
}

class _$WebsiteExtraInfoTablesSerializer implements PrimitiveSerializer<WebsiteExtraInfoTables> {
  @override
  final Iterable<Type> types = const [WebsiteExtraInfoTables, _$WebsiteExtraInfoTables];

  @override
  final String wireName = r'WebsiteExtraInfoTables';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsiteExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.links != null) {
      yield r'links';
      yield serializers.serialize(
        object.links,
        specifiedType: const FullType(WebsiteTable),
      );
    }
    if (object.preview != null) {
      yield r'preview';
      yield serializers.serialize(
        object.preview,
        specifiedType: const FullType(WebsiteTable),
      );
    }
    if (object.dns != null) {
      yield r'dns';
      yield serializers.serialize(
        object.dns,
        specifiedType: const FullType(WebsiteTable),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsiteExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsiteExtraInfoTablesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsiteTable),
          ) as WebsiteTable;
          result.links.replace(valueDes);
          break;
        case r'preview':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsiteTable),
          ) as WebsiteTable;
          result.preview.replace(valueDes);
          break;
        case r'dns':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsiteTable),
          ) as WebsiteTable;
          result.dns.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsiteExtraInfoTables deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsiteExtraInfoTablesBuilder();
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

