//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/vps_traffic_history_section_data_response.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_history_section_response.g.dart';

/// VPS Traffic History Hour and Day Sections
///
/// Properties:
/// * [data] 
/// * [times] 
@BuiltValue()
abstract class VpsTrafficHistorySectionResponse implements Built<VpsTrafficHistorySectionResponse, VpsTrafficHistorySectionResponseBuilder> {
  @BuiltValueField(wireName: r'data')
  BuiltList<VpsTrafficHistorySectionDataResponse> get data;

  @BuiltValueField(wireName: r'times')
  BuiltList<DateTime> get times;

  VpsTrafficHistorySectionResponse._();

  factory VpsTrafficHistorySectionResponse([void updates(VpsTrafficHistorySectionResponseBuilder b)]) = _$VpsTrafficHistorySectionResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTrafficHistorySectionResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTrafficHistorySectionResponse> get serializer => _$VpsTrafficHistorySectionResponseSerializer();
}

class _$VpsTrafficHistorySectionResponseSerializer implements PrimitiveSerializer<VpsTrafficHistorySectionResponse> {
  @override
  final Iterable<Type> types = const [VpsTrafficHistorySectionResponse, _$VpsTrafficHistorySectionResponse];

  @override
  final String wireName = r'VpsTrafficHistorySectionResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTrafficHistorySectionResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'data';
    yield serializers.serialize(
      object.data,
      specifiedType: const FullType(BuiltList, [FullType(VpsTrafficHistorySectionDataResponse)]),
    );
    yield r'times';
    yield serializers.serialize(
      object.times,
      specifiedType: const FullType(BuiltList, [FullType(DateTime)]),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTrafficHistorySectionResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsTrafficHistorySectionResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(VpsTrafficHistorySectionDataResponse)]),
          ) as BuiltList<VpsTrafficHistorySectionDataResponse>;
          result.data.replace(valueDes);
          break;
        case r'times':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(DateTime)]),
          ) as BuiltList<DateTime>;
          result.times.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsTrafficHistorySectionResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTrafficHistorySectionResponseBuilder();
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

