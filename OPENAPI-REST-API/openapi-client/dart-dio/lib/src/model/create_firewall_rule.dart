//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'create_firewall_rule.g.dart';

/// Create firewall rule for your ip
///
/// Properties:
/// * [protocolId] - 1 = TCP, 2 = UDP
/// * [xdpAction] - 1 = Block,  0 = Whitelist
/// * [destinationPort] 
/// * [sourceIp] - Source IP address to match. Use '0.0.0.0' to match any source.
/// * [sourcePort] 
@BuiltValue()
abstract class CreateFirewallRule implements Built<CreateFirewallRule, CreateFirewallRuleBuilder> {
  /// 1 = TCP, 2 = UDP
  @BuiltValueField(wireName: r'protocol_id')
  CreateFirewallRuleProtocolIdEnum get protocolId;
  // enum protocolIdEnum {  1,  2,  };

  /// 1 = Block,  0 = Whitelist
  @BuiltValueField(wireName: r'xdp_action')
  CreateFirewallRuleXdpActionEnum get xdpAction;
  // enum xdpActionEnum {  0,  1,  };

  @BuiltValueField(wireName: r'destination_port')
  int? get destinationPort;

  /// Source IP address to match. Use '0.0.0.0' to match any source.
  @BuiltValueField(wireName: r'source_ip')
  String? get sourceIp;

  @BuiltValueField(wireName: r'source_port')
  int? get sourcePort;

  CreateFirewallRule._();

  factory CreateFirewallRule([void updates(CreateFirewallRuleBuilder b)]) = _$CreateFirewallRule;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(CreateFirewallRuleBuilder b) => b
      ..destinationPort = 80
      ..sourceIp = '0.0.0.0'
      ..sourcePort = 0;

  @BuiltValueSerializer(custom: true)
  static Serializer<CreateFirewallRule> get serializer => _$CreateFirewallRuleSerializer();
}

class _$CreateFirewallRuleSerializer implements PrimitiveSerializer<CreateFirewallRule> {
  @override
  final Iterable<Type> types = const [CreateFirewallRule, _$CreateFirewallRule];

  @override
  final String wireName = r'CreateFirewallRule';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    CreateFirewallRule object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'protocol_id';
    yield serializers.serialize(
      object.protocolId,
      specifiedType: const FullType(CreateFirewallRuleProtocolIdEnum),
    );
    yield r'xdp_action';
    yield serializers.serialize(
      object.xdpAction,
      specifiedType: const FullType(CreateFirewallRuleXdpActionEnum),
    );
    if (object.destinationPort != null) {
      yield r'destination_port';
      yield serializers.serialize(
        object.destinationPort,
        specifiedType: const FullType(int),
      );
    }
    if (object.sourceIp != null) {
      yield r'source_ip';
      yield serializers.serialize(
        object.sourceIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.sourcePort != null) {
      yield r'source_port';
      yield serializers.serialize(
        object.sourcePort,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    CreateFirewallRule object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required CreateFirewallRuleBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'protocol_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(CreateFirewallRuleProtocolIdEnum),
          ) as CreateFirewallRuleProtocolIdEnum;
          result.protocolId = valueDes;
          break;
        case r'xdp_action':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(CreateFirewallRuleXdpActionEnum),
          ) as CreateFirewallRuleXdpActionEnum;
          result.xdpAction = valueDes;
          break;
        case r'destination_port':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.destinationPort = valueDes;
          break;
        case r'source_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sourceIp = valueDes;
          break;
        case r'source_port':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.sourcePort = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  CreateFirewallRule deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = CreateFirewallRuleBuilder();
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

class CreateFirewallRuleProtocolIdEnum extends EnumClass {

  /// 1 = TCP, 2 = UDP
  @BuiltValueEnumConst(wireNumber: 1)
  static const CreateFirewallRuleProtocolIdEnum number1 = _$createFirewallRuleProtocolIdEnum_number1;
  /// 1 = TCP, 2 = UDP
  @BuiltValueEnumConst(wireNumber: 2)
  static const CreateFirewallRuleProtocolIdEnum number2 = _$createFirewallRuleProtocolIdEnum_number2;

  static Serializer<CreateFirewallRuleProtocolIdEnum> get serializer => _$createFirewallRuleProtocolIdEnumSerializer;

  const CreateFirewallRuleProtocolIdEnum._(String name): super(name);

  static BuiltSet<CreateFirewallRuleProtocolIdEnum> get values => _$createFirewallRuleProtocolIdEnumValues;
  static CreateFirewallRuleProtocolIdEnum valueOf(String name) => _$createFirewallRuleProtocolIdEnumValueOf(name);
}

class CreateFirewallRuleXdpActionEnum extends EnumClass {

  /// 1 = Block,  0 = Whitelist
  @BuiltValueEnumConst(wireNumber: 0)
  static const CreateFirewallRuleXdpActionEnum number0 = _$createFirewallRuleXdpActionEnum_number0;
  /// 1 = Block,  0 = Whitelist
  @BuiltValueEnumConst(wireNumber: 1)
  static const CreateFirewallRuleXdpActionEnum number1 = _$createFirewallRuleXdpActionEnum_number1;

  static Serializer<CreateFirewallRuleXdpActionEnum> get serializer => _$createFirewallRuleXdpActionEnumSerializer;

  const CreateFirewallRuleXdpActionEnum._(String name): super(name);

  static BuiltSet<CreateFirewallRuleXdpActionEnum> get values => _$createFirewallRuleXdpActionEnumValues;
  static CreateFirewallRuleXdpActionEnum valueOf(String name) => _$createFirewallRuleXdpActionEnumValueOf(name);
}

