//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_traffic_totals_resposne.dart';
import 'package:openapi/src/model/vps_traffic_history_response.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/vps_traffic_data_section_response.dart';
import 'package:openapi/src/model/vps_traffic_usage_response.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_traffic_response.g.dart';

/// VPS Traffic Information
///
/// Properties:
/// * [name] 
/// * [target] 
/// * [interval] 
/// * [history] 
/// * [last] 
/// * [times] 
/// * [totals] 
/// * [usage] 
/// * [data] 
@BuiltValue()
abstract class VpsTrafficResponse implements Built<VpsTrafficResponse, VpsTrafficResponseBuilder> {
  @BuiltValueField(wireName: r'name')
  String get name;

  @BuiltValueField(wireName: r'target')
  String get target;

  @BuiltValueField(wireName: r'interval')
  int get interval;

  @BuiltValueField(wireName: r'history')
  VpsTrafficHistoryResponse get history;

  @BuiltValueField(wireName: r'last')
  DateTime get last;

  @BuiltValueField(wireName: r'times')
  BuiltList<DateTime> get times;

  @BuiltValueField(wireName: r'totals')
  VpsTrafficTotalsResposne get totals;

  @BuiltValueField(wireName: r'usage')
  VpsTrafficUsageResponse get usage;

  @BuiltValueField(wireName: r'data')
  BuiltList<VpsTrafficDataSectionResponse> get data;

  VpsTrafficResponse._();

  factory VpsTrafficResponse([void updates(VpsTrafficResponseBuilder b)]) = _$VpsTrafficResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTrafficResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTrafficResponse> get serializer => _$VpsTrafficResponseSerializer();
}

class _$VpsTrafficResponseSerializer implements PrimitiveSerializer<VpsTrafficResponse> {
  @override
  final Iterable<Type> types = const [VpsTrafficResponse, _$VpsTrafficResponse];

  @override
  final String wireName = r'VpsTrafficResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTrafficResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'name';
    yield serializers.serialize(
      object.name,
      specifiedType: const FullType(String),
    );
    yield r'target';
    yield serializers.serialize(
      object.target,
      specifiedType: const FullType(String),
    );
    yield r'interval';
    yield serializers.serialize(
      object.interval,
      specifiedType: const FullType(int),
    );
    yield r'history';
    yield serializers.serialize(
      object.history,
      specifiedType: const FullType(VpsTrafficHistoryResponse),
    );
    yield r'last';
    yield serializers.serialize(
      object.last,
      specifiedType: const FullType(DateTime),
    );
    yield r'times';
    yield serializers.serialize(
      object.times,
      specifiedType: const FullType(BuiltList, [FullType(DateTime)]),
    );
    yield r'totals';
    yield serializers.serialize(
      object.totals,
      specifiedType: const FullType(VpsTrafficTotalsResposne),
    );
    yield r'usage';
    yield serializers.serialize(
      object.usage,
      specifiedType: const FullType(VpsTrafficUsageResponse),
    );
    yield r'data';
    yield serializers.serialize(
      object.data,
      specifiedType: const FullType(BuiltList, [FullType(VpsTrafficDataSectionResponse)]),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTrafficResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsTrafficResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'target':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.target = valueDes;
          break;
        case r'interval':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.interval = valueDes;
          break;
        case r'history':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficHistoryResponse),
          ) as VpsTrafficHistoryResponse;
          result.history.replace(valueDes);
          break;
        case r'last':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DateTime),
          ) as DateTime;
          result.last = valueDes;
          break;
        case r'times':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(DateTime)]),
          ) as BuiltList<DateTime>;
          result.times.replace(valueDes);
          break;
        case r'totals':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficTotalsResposne),
          ) as VpsTrafficTotalsResposne;
          result.totals.replace(valueDes);
          break;
        case r'usage':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsTrafficUsageResponse),
          ) as VpsTrafficUsageResponse;
          result.usage.replace(valueDes);
          break;
        case r'data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(VpsTrafficDataSectionResponse)]),
          ) as BuiltList<VpsTrafficDataSectionResponse>;
          result.data.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsTrafficResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTrafficResponseBuilder();
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

