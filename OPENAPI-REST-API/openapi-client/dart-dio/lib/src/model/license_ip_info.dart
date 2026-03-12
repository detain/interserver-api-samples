//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/license_ip_info_row.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'license_ip_info.g.dart';

/// IP address information table for a software license service.
///
/// Properties:
/// * [title] - Table title
/// * [rows] 
@BuiltValue()
abstract class LicenseIpInfo implements Built<LicenseIpInfo, LicenseIpInfoBuilder> {
  /// Table title
  @BuiltValueField(wireName: r'title')
  String? get title;

  @BuiltValueField(wireName: r'rows')
  BuiltList<LicenseIpInfoRow>? get rows;

  LicenseIpInfo._();

  factory LicenseIpInfo([void updates(LicenseIpInfoBuilder b)]) = _$LicenseIpInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicenseIpInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicenseIpInfo> get serializer => _$LicenseIpInfoSerializer();
}

class _$LicenseIpInfoSerializer implements PrimitiveSerializer<LicenseIpInfo> {
  @override
  final Iterable<Type> types = const [LicenseIpInfo, _$LicenseIpInfo];

  @override
  final String wireName = r'LicenseIpInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicenseIpInfo object, {
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
        specifiedType: const FullType(BuiltList, [FullType(LicenseIpInfoRow)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LicenseIpInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicenseIpInfoBuilder result,
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
            specifiedType: const FullType(BuiltList, [FullType(LicenseIpInfoRow)]),
          ) as BuiltList<LicenseIpInfoRow>;
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
  LicenseIpInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicenseIpInfoBuilder();
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

