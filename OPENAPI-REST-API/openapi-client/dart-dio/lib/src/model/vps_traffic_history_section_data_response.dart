//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/vps_traffic_data_data_section_response_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_history_section_data_response.g.dart';

/// VPS Traffic Hisotrty Data Row of Hour/Day Section
@BuiltValue()
abstract class VpsTrafficHistorySectionDataResponse implements Built<VpsTrafficHistorySectionDataResponse, VpsTrafficHistorySectionDataResponseBuilder> {
  VpsTrafficHistorySectionDataResponse._();

  factory VpsTrafficHistorySectionDataResponse([void updates(VpsTrafficHistorySectionDataResponseBuilder b)]) = _$VpsTrafficHistorySectionDataResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTrafficHistorySectionDataResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTrafficHistorySectionDataResponse> get serializer => _$VpsTrafficHistorySectionDataResponseSerializer();
}

class _$VpsTrafficHistorySectionDataResponseSerializer implements PrimitiveSerializer<VpsTrafficHistorySectionDataResponse> {
  @override
  final Iterable<Type> types = const [VpsTrafficHistorySectionDataResponse, _$VpsTrafficHistorySectionDataResponse];

  @override
  final String wireName = r'VpsTrafficHistorySectionDataResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTrafficHistorySectionDataResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTrafficHistorySectionDataResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  VpsTrafficHistorySectionDataResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTrafficHistorySectionDataResponseBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

