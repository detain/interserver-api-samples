//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_ip_info.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_extra_info_tables.g.dart';

/// Additional informational tables displayed for a VPS service.
///
/// Properties:
/// * [ipInfo] 
@BuiltValue()
abstract class VpsExtraInfoTables implements Built<VpsExtraInfoTables, VpsExtraInfoTablesBuilder> {
  @BuiltValueField(wireName: r'ip_info')
  VpsIPInfo? get ipInfo;

  VpsExtraInfoTables._();

  factory VpsExtraInfoTables([void updates(VpsExtraInfoTablesBuilder b)]) = _$VpsExtraInfoTables;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsExtraInfoTablesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsExtraInfoTables> get serializer => _$VpsExtraInfoTablesSerializer();
}

class _$VpsExtraInfoTablesSerializer implements PrimitiveSerializer<VpsExtraInfoTables> {
  @override
  final Iterable<Type> types = const [VpsExtraInfoTables, _$VpsExtraInfoTables];

  @override
  final String wireName = r'VpsExtraInfoTables';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.ipInfo != null) {
      yield r'ip_info';
      yield serializers.serialize(
        object.ipInfo,
        specifiedType: const FullType(VpsIPInfo),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsExtraInfoTablesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ip_info':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsIPInfo),
          ) as VpsIPInfo;
          result.ipInfo.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsExtraInfoTables deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsExtraInfoTablesBuilder();
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

