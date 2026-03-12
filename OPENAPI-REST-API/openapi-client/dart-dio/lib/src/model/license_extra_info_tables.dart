//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/license_ip_info.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'license_extra_info_tables.g.dart';

/// LicenseExtraInfoTables
///
/// Properties:
/// * [ipInfo] 
@BuiltValue()
abstract class LicenseExtraInfoTables implements Built<LicenseExtraInfoTables, LicenseExtraInfoTablesBuilder> {
  @BuiltValueField(wireName: r'ip_info')
  LicenseIpInfo? get ipInfo;

  LicenseExtraInfoTables._();

  factory LicenseExtraInfoTables([void updates(LicenseExtraInfoTablesBuilder b)]) = _$LicenseExtraInfoTables;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicenseExtraInfoTablesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicenseExtraInfoTables> get serializer => _$LicenseExtraInfoTablesSerializer();
}

class _$LicenseExtraInfoTablesSerializer implements PrimitiveSerializer<LicenseExtraInfoTables> {
  @override
  final Iterable<Type> types = const [LicenseExtraInfoTables, _$LicenseExtraInfoTables];

  @override
  final String wireName = r'LicenseExtraInfoTables';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicenseExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.ipInfo != null) {
      yield r'ip_info';
      yield serializers.serialize(
        object.ipInfo,
        specifiedType: const FullType(LicenseIpInfo),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LicenseExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicenseExtraInfoTablesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ip_info':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LicenseIpInfo),
          ) as LicenseIpInfo;
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
  LicenseExtraInfoTables deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicenseExtraInfoTablesBuilder();
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

