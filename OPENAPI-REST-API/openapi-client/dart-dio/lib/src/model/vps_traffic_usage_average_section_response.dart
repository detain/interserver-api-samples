//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_usage_average_section_response.g.dart';

/// VPS Traffic Usage Average Section Response
///
/// Properties:
/// * [total] 
/// * [count] 
/// * [value] 
@BuiltValue()
abstract class VpsTrafficUsageAverageSectionResponse implements Built<VpsTrafficUsageAverageSectionResponse, VpsTrafficUsageAverageSectionResponseBuilder> {
  @BuiltValueField(wireName: r'total')
  int get total;

  @BuiltValueField(wireName: r'count')
  int get count;

  @BuiltValueField(wireName: r'value')
  int get value;

  VpsTrafficUsageAverageSectionResponse._();

  factory VpsTrafficUsageAverageSectionResponse([void updates(VpsTrafficUsageAverageSectionResponseBuilder b)]) = _$VpsTrafficUsageAverageSectionResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTrafficUsageAverageSectionResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTrafficUsageAverageSectionResponse> get serializer => _$VpsTrafficUsageAverageSectionResponseSerializer();
}

class _$VpsTrafficUsageAverageSectionResponseSerializer implements PrimitiveSerializer<VpsTrafficUsageAverageSectionResponse> {
  @override
  final Iterable<Type> types = const [VpsTrafficUsageAverageSectionResponse, _$VpsTrafficUsageAverageSectionResponse];

  @override
  final String wireName = r'VpsTrafficUsageAverageSectionResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTrafficUsageAverageSectionResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'total';
    yield serializers.serialize(
      object.total,
      specifiedType: const FullType(int),
    );
    yield r'count';
    yield serializers.serialize(
      object.count,
      specifiedType: const FullType(int),
    );
    yield r'value';
    yield serializers.serialize(
      object.value,
      specifiedType: const FullType(int),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTrafficUsageAverageSectionResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsTrafficUsageAverageSectionResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'total':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.total = valueDes;
          break;
        case r'count':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.count = valueDes;
          break;
        case r'value':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.value = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsTrafficUsageAverageSectionResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTrafficUsageAverageSectionResponseBuilder();
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

