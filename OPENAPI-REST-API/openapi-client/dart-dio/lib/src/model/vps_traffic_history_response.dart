//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_traffic_history_section_response.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_history_response.g.dart';

/// VPS Traffic Data History Section
///
/// Properties:
/// * [hour] 
/// * [day] 
@BuiltValue()
abstract class VpsTrafficHistoryResponse implements Built<VpsTrafficHistoryResponse, VpsTrafficHistoryResponseBuilder> {
  @BuiltValueField(wireName: r'hour')
  VpsTrafficHistorySectionResponse get hour;

  @BuiltValueField(wireName: r'day')
  VpsTrafficHistorySectionResponse get day;

  VpsTrafficHistoryResponse._();

  factory VpsTrafficHistoryResponse([void updates(VpsTrafficHistoryResponseBuilder b)]) = _$VpsTrafficHistoryResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTrafficHistoryResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTrafficHistoryResponse> get serializer => _$VpsTrafficHistoryResponseSerializer();
}

class _$VpsTrafficHistoryResponseSerializer implements PrimitiveSerializer<VpsTrafficHistoryResponse> {
  @override
  final Iterable<Type> types = const [VpsTrafficHistoryResponse, _$VpsTrafficHistoryResponse];

  @override
  final String wireName = r'VpsTrafficHistoryResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTrafficHistoryResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'hour';
    yield serializers.serialize(
      object.hour,
      specifiedType: const FullType(VpsTrafficHistorySectionResponse),
    );
    yield r'day';
    yield serializers.serialize(
      object.day,
      specifiedType: const FullType(VpsTrafficHistorySectionResponse),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTrafficHistoryResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsTrafficHistoryResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'hour':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficHistorySectionResponse),
          ) as VpsTrafficHistorySectionResponse;
          result.hour.replace(valueDes);
          break;
        case r'day':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficHistorySectionResponse),
          ) as VpsTrafficHistorySectionResponse;
          result.day.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsTrafficHistoryResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTrafficHistoryResponseBuilder();
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

