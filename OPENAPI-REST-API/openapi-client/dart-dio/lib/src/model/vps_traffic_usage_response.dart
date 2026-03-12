//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_traffic_usage_average_response.dart';
import 'package:openapi/src/model/vps_traffic_totals_section_response.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_usage_response.g.dart';

/// VPS Traffic Usage Section
///
/// Properties:
/// * [current] 
/// * [peak] 
/// * [average] 
@BuiltValue()
abstract class VpsTrafficUsageResponse implements Built<VpsTrafficUsageResponse, VpsTrafficUsageResponseBuilder> {
  @BuiltValueField(wireName: r'current')
  VpsTrafficTotalsSectionResponse get current;

  @BuiltValueField(wireName: r'peak')
  VpsTrafficTotalsSectionResponse get peak;

  @BuiltValueField(wireName: r'average')
  VpsTrafficUsageAverageResponse get average;

  VpsTrafficUsageResponse._();

  factory VpsTrafficUsageResponse([void updates(VpsTrafficUsageResponseBuilder b)]) = _$VpsTrafficUsageResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTrafficUsageResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTrafficUsageResponse> get serializer => _$VpsTrafficUsageResponseSerializer();
}

class _$VpsTrafficUsageResponseSerializer implements PrimitiveSerializer<VpsTrafficUsageResponse> {
  @override
  final Iterable<Type> types = const [VpsTrafficUsageResponse, _$VpsTrafficUsageResponse];

  @override
  final String wireName = r'VpsTrafficUsageResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTrafficUsageResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'current';
    yield serializers.serialize(
      object.current,
      specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
    );
    yield r'peak';
    yield serializers.serialize(
      object.peak,
      specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
    );
    yield r'average';
    yield serializers.serialize(
      object.average,
      specifiedType: const FullType(VpsTrafficUsageAverageResponse),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTrafficUsageResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsTrafficUsageResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'current':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
          ) as VpsTrafficTotalsSectionResponse;
          result.current.replace(valueDes);
          break;
        case r'peak':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
          ) as VpsTrafficTotalsSectionResponse;
          result.peak.replace(valueDes);
          break;
        case r'average':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficUsageAverageResponse),
          ) as VpsTrafficUsageAverageResponse;
          result.average.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsTrafficUsageResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTrafficUsageResponseBuilder();
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

