//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/account_info_data_cc.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_data_ccs.g.dart';

/// Collection of credit cards on the account, keyed by card ID.
@BuiltValue()
abstract class AccountInfoDataCcs implements Built<AccountInfoDataCcs, AccountInfoDataCcsBuilder> {
  AccountInfoDataCcs._();

  factory AccountInfoDataCcs([void updates(AccountInfoDataCcsBuilder b)]) = _$AccountInfoDataCcs;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoDataCcsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoDataCcs> get serializer => _$AccountInfoDataCcsSerializer();
}

class _$AccountInfoDataCcsSerializer implements PrimitiveSerializer<AccountInfoDataCcs> {
  @override
  final Iterable<Type> types = const [AccountInfoDataCcs, _$AccountInfoDataCcs];

  @override
  final String wireName = r'AccountInfoDataCcs';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoDataCcs object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoDataCcs object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  AccountInfoDataCcs deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoDataCcsBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

