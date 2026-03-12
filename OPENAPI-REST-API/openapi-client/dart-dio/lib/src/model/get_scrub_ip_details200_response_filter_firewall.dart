//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/get_scrub_ip_details200_response_filter_firewall_rules_inner.dart';
import 'package:openapi/src/model/get_scrub_ip_details200_response_filter_firewall_filters_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_scrub_ip_details200_response_filter_firewall.g.dart';

/// GetScrubIpDetails200ResponseFilterFirewall
///
/// Properties:
/// * [rules] 
/// * [filters] 
/// * [scrubEnabled] 
@BuiltValue()
abstract class GetScrubIpDetails200ResponseFilterFirewall implements Built<GetScrubIpDetails200ResponseFilterFirewall, GetScrubIpDetails200ResponseFilterFirewallBuilder> {
  @BuiltValueField(wireName: r'rules')
  BuiltList<GetScrubIpDetails200ResponseFilterFirewallRulesInner>? get rules;

  @BuiltValueField(wireName: r'filters')
  BuiltList<GetScrubIpDetails200ResponseFilterFirewallFiltersInner>? get filters;

  @BuiltValueField(wireName: r'scrub_enabled')
  int? get scrubEnabled;

  GetScrubIpDetails200ResponseFilterFirewall._();

  factory GetScrubIpDetails200ResponseFilterFirewall([void updates(GetScrubIpDetails200ResponseFilterFirewallBuilder b)]) = _$GetScrubIpDetails200ResponseFilterFirewall;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetScrubIpDetails200ResponseFilterFirewallBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetScrubIpDetails200ResponseFilterFirewall> get serializer => _$GetScrubIpDetails200ResponseFilterFirewallSerializer();
}

class _$GetScrubIpDetails200ResponseFilterFirewallSerializer implements PrimitiveSerializer<GetScrubIpDetails200ResponseFilterFirewall> {
  @override
  final Iterable<Type> types = const [GetScrubIpDetails200ResponseFilterFirewall, _$GetScrubIpDetails200ResponseFilterFirewall];

  @override
  final String wireName = r'GetScrubIpDetails200ResponseFilterFirewall';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetScrubIpDetails200ResponseFilterFirewall object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.rules != null) {
      yield r'rules';
      yield serializers.serialize(
        object.rules,
        specifiedType: const FullType(BuiltList, [FullType(GetScrubIpDetails200ResponseFilterFirewallRulesInner)]),
      );
    }
    if (object.filters != null) {
      yield r'filters';
      yield serializers.serialize(
        object.filters,
        specifiedType: const FullType(BuiltList, [FullType(GetScrubIpDetails200ResponseFilterFirewallFiltersInner)]),
      );
    }
    if (object.scrubEnabled != null) {
      yield r'scrub_enabled';
      yield serializers.serialize(
        object.scrubEnabled,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetScrubIpDetails200ResponseFilterFirewall object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetScrubIpDetails200ResponseFilterFirewallBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'rules':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(GetScrubIpDetails200ResponseFilterFirewallRulesInner)]),
          ) as BuiltList<GetScrubIpDetails200ResponseFilterFirewallRulesInner>;
          result.rules.replace(valueDes);
          break;
        case r'filters':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(GetScrubIpDetails200ResponseFilterFirewallFiltersInner)]),
          ) as BuiltList<GetScrubIpDetails200ResponseFilterFirewallFiltersInner>;
          result.filters.replace(valueDes);
          break;
        case r'scrub_enabled':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.scrubEnabled = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetScrubIpDetails200ResponseFilterFirewall deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetScrubIpDetails200ResponseFilterFirewallBuilder();
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

