//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'dart:core';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/one_of.dart';

part 'vps_traffic_data_data_section_response_inner.g.dart';

/// VPSTrafficDataDataSectionResponseInner
@BuiltValue()
abstract class VPSTrafficDataDataSectionResponseInner implements Built<VPSTrafficDataDataSectionResponseInner, VPSTrafficDataDataSectionResponseInnerBuilder> {
  /// One Of [DateTime], [int]
  OneOf get oneOf;

  VPSTrafficDataDataSectionResponseInner._();

  factory VPSTrafficDataDataSectionResponseInner([void updates(VPSTrafficDataDataSectionResponseInnerBuilder b)]) = _$VPSTrafficDataDataSectionResponseInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VPSTrafficDataDataSectionResponseInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VPSTrafficDataDataSectionResponseInner> get serializer => _$VPSTrafficDataDataSectionResponseInnerSerializer();
}

class _$VPSTrafficDataDataSectionResponseInnerSerializer implements PrimitiveSerializer<VPSTrafficDataDataSectionResponseInner> {
  @override
  final Iterable<Type> types = const [VPSTrafficDataDataSectionResponseInner, _$VPSTrafficDataDataSectionResponseInner];

  @override
  final String wireName = r'VPSTrafficDataDataSectionResponseInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VPSTrafficDataDataSectionResponseInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    VPSTrafficDataDataSectionResponseInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final oneOf = object.oneOf;
    return serializers.serialize(oneOf.value, specifiedType: FullType(oneOf.valueType))!;
  }

  @override
  VPSTrafficDataDataSectionResponseInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VPSTrafficDataDataSectionResponseInnerBuilder();
    Object? oneOfDataSrc;
    final targetType = const FullType(OneOf, [FullType(DateTime), FullType(int), ]);
    oneOfDataSrc = serialized;
    result.oneOf = serializers.deserialize(oneOfDataSrc, specifiedType: targetType) as OneOf;
    return result.build();
  }
}

