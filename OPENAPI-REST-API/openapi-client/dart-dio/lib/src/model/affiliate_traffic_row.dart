//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'affiliate_traffic_row.g.dart';

/// Affiliate Web Traffic Entry
///
/// Properties:
/// * [trafficId] 
/// * [trafficIp] 
/// * [trafficUrl] 
/// * [trafficAffiliate] 
/// * [trafficReferrer] 
/// * [trafficTimestamp] 
@BuiltValue()
abstract class AffiliateTrafficRow implements Built<AffiliateTrafficRow, AffiliateTrafficRowBuilder> {
  @BuiltValueField(wireName: r'traffic_id')
  String? get trafficId;

  @BuiltValueField(wireName: r'traffic_ip')
  String? get trafficIp;

  @BuiltValueField(wireName: r'traffic_url')
  String? get trafficUrl;

  @BuiltValueField(wireName: r'traffic_affiliate')
  String? get trafficAffiliate;

  @BuiltValueField(wireName: r'traffic_referrer')
  String? get trafficReferrer;

  @BuiltValueField(wireName: r'traffic_timestamp')
  String? get trafficTimestamp;

  AffiliateTrafficRow._();

  factory AffiliateTrafficRow([void updates(AffiliateTrafficRowBuilder b)]) = _$AffiliateTrafficRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AffiliateTrafficRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AffiliateTrafficRow> get serializer => _$AffiliateTrafficRowSerializer();
}

class _$AffiliateTrafficRowSerializer implements PrimitiveSerializer<AffiliateTrafficRow> {
  @override
  final Iterable<Type> types = const [AffiliateTrafficRow, _$AffiliateTrafficRow];

  @override
  final String wireName = r'AffiliateTrafficRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AffiliateTrafficRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.trafficId != null) {
      yield r'traffic_id';
      yield serializers.serialize(
        object.trafficId,
        specifiedType: const FullType(String),
      );
    }
    if (object.trafficIp != null) {
      yield r'traffic_ip';
      yield serializers.serialize(
        object.trafficIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.trafficUrl != null) {
      yield r'traffic_url';
      yield serializers.serialize(
        object.trafficUrl,
        specifiedType: const FullType(String),
      );
    }
    if (object.trafficAffiliate != null) {
      yield r'traffic_affiliate';
      yield serializers.serialize(
        object.trafficAffiliate,
        specifiedType: const FullType(String),
      );
    }
    if (object.trafficReferrer != null) {
      yield r'traffic_referrer';
      yield serializers.serialize(
        object.trafficReferrer,
        specifiedType: const FullType(String),
      );
    }
    if (object.trafficTimestamp != null) {
      yield r'traffic_timestamp';
      yield serializers.serialize(
        object.trafficTimestamp,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AffiliateTrafficRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AffiliateTrafficRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'traffic_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.trafficId = valueDes;
          break;
        case r'traffic_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.trafficIp = valueDes;
          break;
        case r'traffic_url':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.trafficUrl = valueDes;
          break;
        case r'traffic_affiliate':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.trafficAffiliate = valueDes;
          break;
        case r'traffic_referrer':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.trafficReferrer = valueDes;
          break;
        case r'traffic_timestamp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.trafficTimestamp = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AffiliateTrafficRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AffiliateTrafficRowBuilder();
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

