//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_traffic_usage_average_section_response.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_usage_average_response.g.dart';

/// VPS Traffic Usage Average Section
///
/// Properties:
/// * [in_] 
/// * [out_] 
@BuiltValue()
abstract class VpsTrafficUsageAverageResponse implements Built<VpsTrafficUsageAverageResponse, VpsTrafficUsageAverageResponseBuilder> {
  @BuiltValueField(wireName: r'in')
  VpsTrafficUsageAverageSectionResponse get in_;

  @BuiltValueField(wireName: r'out')
  VpsTrafficUsageAverageSectionResponse get out_;

  VpsTrafficUsageAverageResponse._();

  factory VpsTrafficUsageAverageResponse([void updates(VpsTrafficUsageAverageResponseBuilder b)]) = _$VpsTrafficUsageAverageResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTrafficUsageAverageResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTrafficUsageAverageResponse> get serializer => _$VpsTrafficUsageAverageResponseSerializer();
}

class _$VpsTrafficUsageAverageResponseSerializer implements PrimitiveSerializer<VpsTrafficUsageAverageResponse> {
  @override
  final Iterable<Type> types = const [VpsTrafficUsageAverageResponse, _$VpsTrafficUsageAverageResponse];

  @override
  final String wireName = r'VpsTrafficUsageAverageResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTrafficUsageAverageResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'in';
    yield serializers.serialize(
      object.in_,
      specifiedType: const FullType(VpsTrafficUsageAverageSectionResponse),
    );
    yield r'out';
    yield serializers.serialize(
      object.out_,
      specifiedType: const FullType(VpsTrafficUsageAverageSectionResponse),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTrafficUsageAverageResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsTrafficUsageAverageResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'in':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficUsageAverageSectionResponse),
          ) as VpsTrafficUsageAverageSectionResponse;
          result.in_.replace(valueDes);
          break;
        case r'out':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficUsageAverageSectionResponse),
          ) as VpsTrafficUsageAverageSectionResponse;
          result.out_.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsTrafficUsageAverageResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTrafficUsageAverageResponseBuilder();
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

