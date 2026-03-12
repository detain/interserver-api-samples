//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/vps_traffic_data_data_section_response_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_data_data_section_response.g.dart';

/// VPS Traffic Data section Data subsection Row Response
@BuiltValue()
abstract class VPSTrafficDataDataSectionResponse implements Built<VPSTrafficDataDataSectionResponse, VPSTrafficDataDataSectionResponseBuilder> {
  VPSTrafficDataDataSectionResponse._();

  factory VPSTrafficDataDataSectionResponse([void updates(VPSTrafficDataDataSectionResponseBuilder b)]) = _$VPSTrafficDataDataSectionResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VPSTrafficDataDataSectionResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VPSTrafficDataDataSectionResponse> get serializer => _$VPSTrafficDataDataSectionResponseSerializer();
}

class _$VPSTrafficDataDataSectionResponseSerializer implements PrimitiveSerializer<VPSTrafficDataDataSectionResponse> {
  @override
  final Iterable<Type> types = const [VPSTrafficDataDataSectionResponse, _$VPSTrafficDataDataSectionResponse];

  @override
  final String wireName = r'VPSTrafficDataDataSectionResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VPSTrafficDataDataSectionResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    VPSTrafficDataDataSectionResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  VPSTrafficDataDataSectionResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VPSTrafficDataDataSectionResponseBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

