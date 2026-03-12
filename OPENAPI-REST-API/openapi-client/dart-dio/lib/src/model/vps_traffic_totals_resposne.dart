//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_traffic_totals_section_response.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_totals_resposne.g.dart';

/// VPS Traffic Totals Section
///
/// Properties:
/// * [day] 
/// * [month] 
/// * [year] 
/// * [all] 
@BuiltValue()
abstract class VpsTrafficTotalsResposne implements Built<VpsTrafficTotalsResposne, VpsTrafficTotalsResposneBuilder> {
  @BuiltValueField(wireName: r'day')
  VpsTrafficTotalsSectionResponse get day;

  @BuiltValueField(wireName: r'month')
  VpsTrafficTotalsSectionResponse get month;

  @BuiltValueField(wireName: r'year')
  VpsTrafficTotalsSectionResponse get year;

  @BuiltValueField(wireName: r'all')
  VpsTrafficTotalsSectionResponse get all;

  VpsTrafficTotalsResposne._();

  factory VpsTrafficTotalsResposne([void updates(VpsTrafficTotalsResposneBuilder b)]) = _$VpsTrafficTotalsResposne;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTrafficTotalsResposneBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTrafficTotalsResposne> get serializer => _$VpsTrafficTotalsResposneSerializer();
}

class _$VpsTrafficTotalsResposneSerializer implements PrimitiveSerializer<VpsTrafficTotalsResposne> {
  @override
  final Iterable<Type> types = const [VpsTrafficTotalsResposne, _$VpsTrafficTotalsResposne];

  @override
  final String wireName = r'VpsTrafficTotalsResposne';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTrafficTotalsResposne object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'day';
    yield serializers.serialize(
      object.day,
      specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
    );
    yield r'month';
    yield serializers.serialize(
      object.month,
      specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
    );
    yield r'year';
    yield serializers.serialize(
      object.year,
      specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
    );
    yield r'all';
    yield serializers.serialize(
      object.all,
      specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTrafficTotalsResposne object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsTrafficTotalsResposneBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'day':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
          ) as VpsTrafficTotalsSectionResponse;
          result.day.replace(valueDes);
          break;
        case r'month':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
          ) as VpsTrafficTotalsSectionResponse;
          result.month.replace(valueDes);
          break;
        case r'year':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
          ) as VpsTrafficTotalsSectionResponse;
          result.year.replace(valueDes);
          break;
        case r'all':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficTotalsSectionResponse),
          ) as VpsTrafficTotalsSectionResponse;
          result.all.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsTrafficTotalsResposne deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTrafficTotalsResposneBuilder();
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

