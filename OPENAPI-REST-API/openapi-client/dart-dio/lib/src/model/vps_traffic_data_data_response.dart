//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_traffic_data_data_section_response.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_data_data_response.g.dart';

/// VPS Traffic Data section Data subsection response
@BuiltValue()
abstract class VpsTrafficDataDataResponse implements Built<VpsTrafficDataDataResponse, VpsTrafficDataDataResponseBuilder> {
  VpsTrafficDataDataResponse._();

  factory VpsTrafficDataDataResponse([void updates(VpsTrafficDataDataResponseBuilder b)]) = _$VpsTrafficDataDataResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTrafficDataDataResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTrafficDataDataResponse> get serializer => _$VpsTrafficDataDataResponseSerializer();
}

class _$VpsTrafficDataDataResponseSerializer implements PrimitiveSerializer<VpsTrafficDataDataResponse> {
  @override
  final Iterable<Type> types = const [VpsTrafficDataDataResponse, _$VpsTrafficDataDataResponse];

  @override
  final String wireName = r'VpsTrafficDataDataResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTrafficDataDataResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTrafficDataDataResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  VpsTrafficDataDataResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTrafficDataDataResponseBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

