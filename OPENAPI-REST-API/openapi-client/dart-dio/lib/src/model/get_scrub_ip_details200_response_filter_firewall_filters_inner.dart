//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_scrub_ip_details200_response_filter_firewall_filters_inner.g.dart';

/// GetScrubIpDetails200ResponseFilterFirewallFiltersInner
///
/// Properties:
/// * [daddr] 
/// * [dest] 
/// * [filterName] 
/// * [destinationIp] 
/// * [filter] 
@BuiltValue()
abstract class GetScrubIpDetails200ResponseFilterFirewallFiltersInner implements Built<GetScrubIpDetails200ResponseFilterFirewallFiltersInner, GetScrubIpDetails200ResponseFilterFirewallFiltersInnerBuilder> {
  @BuiltValueField(wireName: r'daddr')
  String? get daddr;

  @BuiltValueField(wireName: r'dest')
  String? get dest;

  @BuiltValueField(wireName: r'filter_name')
  String? get filterName;

  @BuiltValueField(wireName: r'destination_ip')
  String? get destinationIp;

  @BuiltValueField(wireName: r'filter')
  String? get filter;

  GetScrubIpDetails200ResponseFilterFirewallFiltersInner._();

  factory GetScrubIpDetails200ResponseFilterFirewallFiltersInner([void updates(GetScrubIpDetails200ResponseFilterFirewallFiltersInnerBuilder b)]) = _$GetScrubIpDetails200ResponseFilterFirewallFiltersInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetScrubIpDetails200ResponseFilterFirewallFiltersInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetScrubIpDetails200ResponseFilterFirewallFiltersInner> get serializer => _$GetScrubIpDetails200ResponseFilterFirewallFiltersInnerSerializer();
}

class _$GetScrubIpDetails200ResponseFilterFirewallFiltersInnerSerializer implements PrimitiveSerializer<GetScrubIpDetails200ResponseFilterFirewallFiltersInner> {
  @override
  final Iterable<Type> types = const [GetScrubIpDetails200ResponseFilterFirewallFiltersInner, _$GetScrubIpDetails200ResponseFilterFirewallFiltersInner];

  @override
  final String wireName = r'GetScrubIpDetails200ResponseFilterFirewallFiltersInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetScrubIpDetails200ResponseFilterFirewallFiltersInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.daddr != null) {
      yield r'daddr';
      yield serializers.serialize(
        object.daddr,
        specifiedType: const FullType(String),
      );
    }
    if (object.dest != null) {
      yield r'dest';
      yield serializers.serialize(
        object.dest,
        specifiedType: const FullType(String),
      );
    }
    if (object.filterName != null) {
      yield r'filter_name';
      yield serializers.serialize(
        object.filterName,
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
    if (object.filter != null) {
      yield r'filter';
      yield serializers.serialize(
        object.filter,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetScrubIpDetails200ResponseFilterFirewallFiltersInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetScrubIpDetails200ResponseFilterFirewallFiltersInnerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'daddr':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.daddr = valueDes;
          break;
        case r'dest':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.dest = valueDes;
          break;
        case r'filter_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.filterName = valueDes;
          break;
        case r'destination_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.destinationIp = valueDes;
          break;
        case r'filter':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.filter = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetScrubIpDetails200ResponseFilterFirewallFiltersInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetScrubIpDetails200ResponseFilterFirewallFiltersInnerBuilder();
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

