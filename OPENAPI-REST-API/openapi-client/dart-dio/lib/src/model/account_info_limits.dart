//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/account_info_limits_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_limits.g.dart';

/// IP address ranges used to restrict account access to specific IPs.
@BuiltValue()
abstract class AccountInfoLimits implements Built<AccountInfoLimits, AccountInfoLimitsBuilder> {
  AccountInfoLimits._();

  factory AccountInfoLimits([void updates(AccountInfoLimitsBuilder b)]) = _$AccountInfoLimits;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoLimitsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoLimits> get serializer => _$AccountInfoLimitsSerializer();
}

class _$AccountInfoLimitsSerializer implements PrimitiveSerializer<AccountInfoLimits> {
  @override
  final Iterable<Type> types = const [AccountInfoLimits, _$AccountInfoLimits];

  @override
  final String wireName = r'AccountInfoLimits';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoLimits object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoLimits object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  AccountInfoLimits deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoLimitsBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

