//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'delete_firewall_rule.g.dart';

/// Delete firewall rule for your ip
///
/// Properties:
/// * [ruleId] 
@BuiltValue()
abstract class DeleteFirewallRule implements Built<DeleteFirewallRule, DeleteFirewallRuleBuilder> {
  @BuiltValueField(wireName: r'rule_id')
  int get ruleId;

  DeleteFirewallRule._();

  factory DeleteFirewallRule([void updates(DeleteFirewallRuleBuilder b)]) = _$DeleteFirewallRule;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DeleteFirewallRuleBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DeleteFirewallRule> get serializer => _$DeleteFirewallRuleSerializer();
}

class _$DeleteFirewallRuleSerializer implements PrimitiveSerializer<DeleteFirewallRule> {
  @override
  final Iterable<Type> types = const [DeleteFirewallRule, _$DeleteFirewallRule];

  @override
  final String wireName = r'DeleteFirewallRule';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DeleteFirewallRule object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'rule_id';
    yield serializers.serialize(
      object.ruleId,
      specifiedType: const FullType(int),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    DeleteFirewallRule object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DeleteFirewallRuleBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'rule_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.ruleId = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DeleteFirewallRule deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DeleteFirewallRuleBuilder();
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

