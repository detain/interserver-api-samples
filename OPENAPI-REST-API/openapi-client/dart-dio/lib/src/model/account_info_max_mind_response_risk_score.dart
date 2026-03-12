//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'dart:core';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/one_of.dart';

part 'account_info_max_mind_response_risk_score.g.dart';

/// AccountInfoMaxMindResponseRiskScore
@BuiltValue()
abstract class AccountInfoMaxMindResponseRiskScore implements Built<AccountInfoMaxMindResponseRiskScore, AccountInfoMaxMindResponseRiskScoreBuilder> {
  /// One Of [String], [num]
  OneOf get oneOf;

  AccountInfoMaxMindResponseRiskScore._();

  factory AccountInfoMaxMindResponseRiskScore([void updates(AccountInfoMaxMindResponseRiskScoreBuilder b)]) = _$AccountInfoMaxMindResponseRiskScore;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoMaxMindResponseRiskScoreBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoMaxMindResponseRiskScore> get serializer => _$AccountInfoMaxMindResponseRiskScoreSerializer();
}

class _$AccountInfoMaxMindResponseRiskScoreSerializer implements PrimitiveSerializer<AccountInfoMaxMindResponseRiskScore> {
  @override
  final Iterable<Type> types = const [AccountInfoMaxMindResponseRiskScore, _$AccountInfoMaxMindResponseRiskScore];

  @override
  final String wireName = r'AccountInfoMaxMindResponseRiskScore';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoMaxMindResponseRiskScore object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoMaxMindResponseRiskScore object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final oneOf = object.oneOf;
    return serializers.serialize(oneOf.value, specifiedType: FullType(oneOf.valueType))!;
  }

  @override
  AccountInfoMaxMindResponseRiskScore deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoMaxMindResponseRiskScoreBuilder();
    Object? oneOfDataSrc;
    final targetType = const FullType(OneOf, [FullType(String), FullType(num), ]);
    oneOfDataSrc = serialized;
    result.oneOf = serializers.deserialize(oneOfDataSrc, specifiedType: targetType) as OneOf;
    return result.build();
  }
}

