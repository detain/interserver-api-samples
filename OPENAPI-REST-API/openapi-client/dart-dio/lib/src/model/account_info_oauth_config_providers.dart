//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/account_info_oauth_config_providers_value.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_oauth_config_providers.g.dart';

/// Map of OAuth providers and their linked status on the account.
@BuiltValue()
abstract class AccountInfoOauthConfigProviders implements Built<AccountInfoOauthConfigProviders, AccountInfoOauthConfigProvidersBuilder> {
  AccountInfoOauthConfigProviders._();

  factory AccountInfoOauthConfigProviders([void updates(AccountInfoOauthConfigProvidersBuilder b)]) = _$AccountInfoOauthConfigProviders;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoOauthConfigProvidersBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoOauthConfigProviders> get serializer => _$AccountInfoOauthConfigProvidersSerializer();
}

class _$AccountInfoOauthConfigProvidersSerializer implements PrimitiveSerializer<AccountInfoOauthConfigProviders> {
  @override
  final Iterable<Type> types = const [AccountInfoOauthConfigProviders, _$AccountInfoOauthConfigProviders];

  @override
  final String wireName = r'AccountInfoOauthConfigProviders';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoOauthConfigProviders object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoOauthConfigProviders object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  AccountInfoOauthConfigProviders deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoOauthConfigProvidersBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

