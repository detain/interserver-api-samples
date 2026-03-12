//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/buy_it_now_server_order200_response_bandwidth_inner.dart';
import 'package:openapi/src/model/buy_it_now_server_order200_response_cp_inner.dart';
import 'package:openapi/src/model/buy_it_now_server_order200_response_os_inner.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/buy_it_now_server_order200_response_ips_inner.dart';
import 'package:openapi/src/model/buy_it_now_server_order200_response_raid_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'buy_it_now_server_order200_response.g.dart';

/// BuyItNowServerOrder200Response
///
/// Properties:
/// * [bandwidth] 
/// * [ips] 
/// * [os] 
/// * [cp] 
/// * [raid] 
@BuiltValue()
abstract class BuyItNowServerOrder200Response implements Built<BuyItNowServerOrder200Response, BuyItNowServerOrder200ResponseBuilder> {
  @BuiltValueField(wireName: r'bandwidth')
  BuiltList<BuyItNowServerOrder200ResponseBandwidthInner>? get bandwidth;

  @BuiltValueField(wireName: r'ips')
  BuiltList<BuyItNowServerOrder200ResponseIpsInner>? get ips;

  @BuiltValueField(wireName: r'os')
  BuiltList<BuyItNowServerOrder200ResponseOsInner>? get os;

  @BuiltValueField(wireName: r'cp')
  BuiltList<BuyItNowServerOrder200ResponseCpInner>? get cp;

  @BuiltValueField(wireName: r'raid')
  BuiltList<BuyItNowServerOrder200ResponseRaidInner>? get raid;

  BuyItNowServerOrder200Response._();

  factory BuyItNowServerOrder200Response([void updates(BuyItNowServerOrder200ResponseBuilder b)]) = _$BuyItNowServerOrder200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BuyItNowServerOrder200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BuyItNowServerOrder200Response> get serializer => _$BuyItNowServerOrder200ResponseSerializer();
}

class _$BuyItNowServerOrder200ResponseSerializer implements PrimitiveSerializer<BuyItNowServerOrder200Response> {
  @override
  final Iterable<Type> types = const [BuyItNowServerOrder200Response, _$BuyItNowServerOrder200Response];

  @override
  final String wireName = r'BuyItNowServerOrder200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BuyItNowServerOrder200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.bandwidth != null) {
      yield r'bandwidth';
      yield serializers.serialize(
        object.bandwidth,
        specifiedType: const FullType(BuiltList, [FullType(BuyItNowServerOrder200ResponseBandwidthInner)]),
      );
    }
    if (object.ips != null) {
      yield r'ips';
      yield serializers.serialize(
        object.ips,
        specifiedType: const FullType(BuiltList, [FullType(BuyItNowServerOrder200ResponseIpsInner)]),
      );
    }
    if (object.os != null) {
      yield r'os';
      yield serializers.serialize(
        object.os,
        specifiedType: const FullType(BuiltList, [FullType(BuyItNowServerOrder200ResponseOsInner)]),
      );
    }
    if (object.cp != null) {
      yield r'cp';
      yield serializers.serialize(
        object.cp,
        specifiedType: const FullType(BuiltList, [FullType(BuyItNowServerOrder200ResponseCpInner)]),
      );
    }
    if (object.raid != null) {
      yield r'raid';
      yield serializers.serialize(
        object.raid,
        specifiedType: const FullType(BuiltList, [FullType(BuyItNowServerOrder200ResponseRaidInner)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BuyItNowServerOrder200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BuyItNowServerOrder200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'bandwidth':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(BuyItNowServerOrder200ResponseBandwidthInner)]),
          ) as BuiltList<BuyItNowServerOrder200ResponseBandwidthInner>;
          result.bandwidth.replace(valueDes);
          break;
        case r'ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(BuyItNowServerOrder200ResponseIpsInner)]),
          ) as BuiltList<BuyItNowServerOrder200ResponseIpsInner>;
          result.ips.replace(valueDes);
          break;
        case r'os':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(BuyItNowServerOrder200ResponseOsInner)]),
          ) as BuiltList<BuyItNowServerOrder200ResponseOsInner>;
          result.os.replace(valueDes);
          break;
        case r'cp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(BuyItNowServerOrder200ResponseCpInner)]),
          ) as BuiltList<BuyItNowServerOrder200ResponseCpInner>;
          result.cp.replace(valueDes);
          break;
        case r'raid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(BuyItNowServerOrder200ResponseRaidInner)]),
          ) as BuiltList<BuyItNowServerOrder200ResponseRaidInner>;
          result.raid.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BuyItNowServerOrder200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BuyItNowServerOrder200ResponseBuilder();
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

