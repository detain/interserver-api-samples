//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'delete_geo_firewall_rule.g.dart';

/// Delete geo firewall rule for your scrub ip
///
/// Properties:
/// * [ruleId] 
@BuiltValue()
abstract class DeleteGeoFirewallRule implements Built<DeleteGeoFirewallRule, DeleteGeoFirewallRuleBuilder> {
  @BuiltValueField(wireName: r'rule_id')
  int get ruleId;

  DeleteGeoFirewallRule._();

  factory DeleteGeoFirewallRule([void updates(DeleteGeoFirewallRuleBuilder b)]) = _$DeleteGeoFirewallRule;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DeleteGeoFirewallRuleBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DeleteGeoFirewallRule> get serializer => _$DeleteGeoFirewallRuleSerializer();
}

class _$DeleteGeoFirewallRuleSerializer implements PrimitiveSerializer<DeleteGeoFirewallRule> {
  @override
  final Iterable<Type> types = const [DeleteGeoFirewallRule, _$DeleteGeoFirewallRule];

  @override
  final String wireName = r'DeleteGeoFirewallRule';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DeleteGeoFirewallRule object, {
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
    DeleteGeoFirewallRule object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DeleteGeoFirewallRuleBuilder result,
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
  DeleteGeoFirewallRule deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DeleteGeoFirewallRuleBuilder();
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

