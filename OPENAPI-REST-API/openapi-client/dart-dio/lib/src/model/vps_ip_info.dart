//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/vps_ip_info_row.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_ip_info.g.dart';

/// IP address information table for a VPS service.
///
/// Properties:
/// * [title] - Title of the table
/// * [rows] 
@BuiltValue()
abstract class VpsIPInfo implements Built<VpsIPInfo, VpsIPInfoBuilder> {
  /// Title of the table
  @BuiltValueField(wireName: r'title')
  String? get title;

  @BuiltValueField(wireName: r'rows')
  BuiltList<VpsIPInfoRow>? get rows;

  VpsIPInfo._();

  factory VpsIPInfo([void updates(VpsIPInfoBuilder b)]) = _$VpsIPInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsIPInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsIPInfo> get serializer => _$VpsIPInfoSerializer();
}

class _$VpsIPInfoSerializer implements PrimitiveSerializer<VpsIPInfo> {
  @override
  final Iterable<Type> types = const [VpsIPInfo, _$VpsIPInfo];

  @override
  final String wireName = r'VpsIPInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsIPInfo object, {
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
        specifiedType: const FullType(BuiltList, [FullType(VpsIPInfoRow)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsIPInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsIPInfoBuilder result,
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
            specifiedType: const FullType(BuiltList, [FullType(VpsIPInfoRow)]),
          ) as BuiltList<VpsIPInfoRow>;
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
  VpsIPInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsIPInfoBuilder();
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

