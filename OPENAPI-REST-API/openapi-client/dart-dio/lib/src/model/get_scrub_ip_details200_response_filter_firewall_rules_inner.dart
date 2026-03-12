//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_scrub_ip_details200_response_filter_firewall_rules_inner.g.dart';

/// GetScrubIpDetails200ResponseFilterFirewallRulesInner
///
/// Properties:
/// * [id] 
/// * [sourceIp] 
/// * [destinationIp] 
/// * [protocolId] 
/// * [sourcePort] 
/// * [destinationPort] 
/// * [xdpAction] 
/// * [globalDrop] 
@BuiltValue()
abstract class GetScrubIpDetails200ResponseFilterFirewallRulesInner implements Built<GetScrubIpDetails200ResponseFilterFirewallRulesInner, GetScrubIpDetails200ResponseFilterFirewallRulesInnerBuilder> {
  @BuiltValueField(wireName: r'id')
  String? get id;

  @BuiltValueField(wireName: r'source_ip')
  String? get sourceIp;

  @BuiltValueField(wireName: r'destination_ip')
  String? get destinationIp;

  @BuiltValueField(wireName: r'protocol_id')
  String? get protocolId;

  @BuiltValueField(wireName: r'source_port')
  String? get sourcePort;

  @BuiltValueField(wireName: r'destination_port')
  String? get destinationPort;

  @BuiltValueField(wireName: r'xdp_action')
  String? get xdpAction;

  @BuiltValueField(wireName: r'global_drop')
  String? get globalDrop;

  GetScrubIpDetails200ResponseFilterFirewallRulesInner._();

  factory GetScrubIpDetails200ResponseFilterFirewallRulesInner([void updates(GetScrubIpDetails200ResponseFilterFirewallRulesInnerBuilder b)]) = _$GetScrubIpDetails200ResponseFilterFirewallRulesInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetScrubIpDetails200ResponseFilterFirewallRulesInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetScrubIpDetails200ResponseFilterFirewallRulesInner> get serializer => _$GetScrubIpDetails200ResponseFilterFirewallRulesInnerSerializer();
}

class _$GetScrubIpDetails200ResponseFilterFirewallRulesInnerSerializer implements PrimitiveSerializer<GetScrubIpDetails200ResponseFilterFirewallRulesInner> {
  @override
  final Iterable<Type> types = const [GetScrubIpDetails200ResponseFilterFirewallRulesInner, _$GetScrubIpDetails200ResponseFilterFirewallRulesInner];

  @override
  final String wireName = r'GetScrubIpDetails200ResponseFilterFirewallRulesInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetScrubIpDetails200ResponseFilterFirewallRulesInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(String),
      );
    }
    if (object.sourceIp != null) {
      yield r'source_ip';
      yield serializers.serialize(
        object.sourceIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.destinationIp != null) {
      yield r'destination_ip';
      yield serializers.serialize(
        object.destinationIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.protocolId != null) {
      yield r'protocol_id';
      yield serializers.serialize(
        object.protocolId,
        specifiedType: const FullType(String),
      );
    }
    if (object.sourcePort != null) {
      yield r'source_port';
      yield serializers.serialize(
        object.sourcePort,
        specifiedType: const FullType(String),
      );
    }
    if (object.destinationPort != null) {
      yield r'destination_port';
      yield serializers.serialize(
        object.destinationPort,
        specifiedType: const FullType(String),
      );
    }
    if (object.xdpAction != null) {
      yield r'xdp_action';
      yield serializers.serialize(
        object.xdpAction,
        specifiedType: const FullType(String),
      );
    }
    if (object.globalDrop != null) {
      yield r'global_drop';
      yield serializers.serialize(
        object.globalDrop,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetScrubIpDetails200ResponseFilterFirewallRulesInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetScrubIpDetails200ResponseFilterFirewallRulesInnerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.id = valueDes;
          break;
        case r'source_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sourceIp = valueDes;
          break;
        case r'destination_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.destinationIp = valueDes;
          break;
        case r'protocol_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.protocolId = valueDes;
          break;
        case r'source_port':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sourcePort = valueDes;
          break;
        case r'destination_port':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.destinationPort = valueDes;
          break;
        case r'xdp_action':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.xdpAction = valueDes;
          break;
        case r'global_drop':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.globalDrop = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetScrubIpDetails200ResponseFilterFirewallRulesInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetScrubIpDetails200ResponseFilterFirewallRulesInnerBuilder();
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

