//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'create_geo_firewall_rule.g.dart';

/// Create firewall rule for your ip
///
/// Properties:
/// * [xdpAction] - 1 = Block,  0 = Whitelist
/// * [destinationPort] 
/// * [countryCode] - To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode
/// * [asn] - ASN number
@BuiltValue()
abstract class CreateGeoFirewallRule implements Built<CreateGeoFirewallRule, CreateGeoFirewallRuleBuilder> {
  /// 1 = Block,  0 = Whitelist
  @BuiltValueField(wireName: r'xdp_action')
  CreateGeoFirewallRuleXdpActionEnum get xdpAction;
  // enum xdpActionEnum {  0,  1,  };

  @BuiltValueField(wireName: r'destination_port')
  int? get destinationPort;

  /// To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode
  @BuiltValueField(wireName: r'country_code')
  int? get countryCode;

  /// ASN number
  @BuiltValueField(wireName: r'asn')
  int? get asn;

  CreateGeoFirewallRule._();

  factory CreateGeoFirewallRule([void updates(CreateGeoFirewallRuleBuilder b)]) = _$CreateGeoFirewallRule;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CreateGeoFirewallRuleBuilder b) => b
      ..destinationPort = 80;

  @BuiltValueSerializer(custom: true)
  static Serializer<CreateGeoFirewallRule> get serializer => _$CreateGeoFirewallRuleSerializer();
}

class _$CreateGeoFirewallRuleSerializer implements PrimitiveSerializer<CreateGeoFirewallRule> {
  @override
  final Iterable<Type> types = const [CreateGeoFirewallRule, _$CreateGeoFirewallRule];

  @override
  final String wireName = r'CreateGeoFirewallRule';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CreateGeoFirewallRule object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'xdp_action';
    yield serializers.serialize(
      object.xdpAction,
      specifiedType: const FullType(CreateGeoFirewallRuleXdpActionEnum),
    );
    if (object.destinationPort != null) {
      yield r'destination_port';
      yield serializers.serialize(
        object.destinationPort,
        specifiedType: const FullType(int),
      );
    }
    if (object.countryCode != null) {
      yield r'country_code';
      yield serializers.serialize(
        object.countryCode,
        specifiedType: const FullType(int),
      );
    }
    if (object.asn != null) {
      yield r'asn';
      yield serializers.serialize(
        object.asn,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    CreateGeoFirewallRule object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CreateGeoFirewallRuleBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'xdp_action':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(CreateGeoFirewallRuleXdpActionEnum),
          ) as CreateGeoFirewallRuleXdpActionEnum;
          result.xdpAction = valueDes;
          break;
        case r'destination_port':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.destinationPort = valueDes;
          break;
        case r'country_code':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.countryCode = valueDes;
          break;
        case r'asn':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.asn = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CreateGeoFirewallRule deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CreateGeoFirewallRuleBuilder();
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

class CreateGeoFirewallRuleXdpActionEnum extends EnumClass {

  /// 1 = Block,  0 = Whitelist
  @BuiltValueEnumConst(wireNumber: 0)
  static const CreateGeoFirewallRuleXdpActionEnum number0 = _$createGeoFirewallRuleXdpActionEnum_number0;
  /// 1 = Block,  0 = Whitelist
  @BuiltValueEnumConst(wireNumber: 1)
  static const CreateGeoFirewallRuleXdpActionEnum number1 = _$createGeoFirewallRuleXdpActionEnum_number1;

  static Serializer<CreateGeoFirewallRuleXdpActionEnum> get serializer => _$createGeoFirewallRuleXdpActionEnumSerializer;

  const CreateGeoFirewallRuleXdpActionEnum._(String name): super(name);

  static BuiltSet<CreateGeoFirewallRuleXdpActionEnum> get values => _$createGeoFirewallRuleXdpActionEnumValues;
  static CreateGeoFirewallRuleXdpActionEnum valueOf(String name) => _$createGeoFirewallRuleXdpActionEnumValueOf(name);
}

