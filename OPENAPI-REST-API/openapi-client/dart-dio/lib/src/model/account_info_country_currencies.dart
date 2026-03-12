//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_country_currencies.g.dart';

/// Maps country codes to their available currency options.
@BuiltValue()
abstract class AccountInfoCountryCurrencies implements Built<AccountInfoCountryCurrencies, AccountInfoCountryCurrenciesBuilder> {
  AccountInfoCountryCurrencies._();

  factory AccountInfoCountryCurrencies([void updates(AccountInfoCountryCurrenciesBuilder b)]) = _$AccountInfoCountryCurrencies;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoCountryCurrenciesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoCountryCurrencies> get serializer => _$AccountInfoCountryCurrenciesSerializer();
}

class _$AccountInfoCountryCurrenciesSerializer implements PrimitiveSerializer<AccountInfoCountryCurrencies> {
  @override
  final Iterable<Type> types = const [AccountInfoCountryCurrencies, _$AccountInfoCountryCurrencies];

  @override
  final String wireName = r'AccountInfoCountryCurrencies';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoCountryCurrencies object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoCountryCurrencies object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  AccountInfoCountryCurrencies deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoCountryCurrenciesBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

