//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/quickserver_ip_table_row.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_ip_info.g.dart';

/// IP address information table for a QuickServer service.
///
/// Properties:
/// * [title] - Table title
/// * [rows] 
@BuiltValue()
abstract class QuickserverIpInfo implements Built<QuickserverIpInfo, QuickserverIpInfoBuilder> {
  /// Table title
  @BuiltValueField(wireName: r'title')
  String? get title;

  @BuiltValueField(wireName: r'rows')
  BuiltList<QuickserverIpTableRow>? get rows;

  QuickserverIpInfo._();

  factory QuickserverIpInfo([void updates(QuickserverIpInfoBuilder b)]) = _$QuickserverIpInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverIpInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverIpInfo> get serializer => _$QuickserverIpInfoSerializer();
}

class _$QuickserverIpInfoSerializer implements PrimitiveSerializer<QuickserverIpInfo> {
  @override
  final Iterable<Type> types = const [QuickserverIpInfo, _$QuickserverIpInfo];

  @override
  final String wireName = r'QuickserverIpInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverIpInfo object, {
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
        specifiedType: const FullType(BuiltList, [FullType(QuickserverIpTableRow)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverIpInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverIpInfoBuilder result,
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
            specifiedType: const FullType(BuiltList, [FullType(QuickserverIpTableRow)]),
          ) as BuiltList<QuickserverIpTableRow>;
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
  QuickserverIpInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverIpInfoBuilder();
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

