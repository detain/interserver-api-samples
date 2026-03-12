//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/account_info_oauth_config_providers.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';
import 'package:one_of/one_of.dart';

part 'account_info_oauthproviders.g.dart';

/// AccountInfoOauthproviders
@BuiltValue()
abstract class AccountInfoOauthproviders implements Built<AccountInfoOauthproviders, AccountInfoOauthprovidersBuilder> {
  /// One Of [AccountInfoOauthConfigProviders], [BuiltList<JsonObject>]
  OneOf get oneOf;

  AccountInfoOauthproviders._();

  factory AccountInfoOauthproviders([void updates(AccountInfoOauthprovidersBuilder b)]) = _$AccountInfoOauthproviders;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoOauthprovidersBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoOauthproviders> get serializer => _$AccountInfoOauthprovidersSerializer();
}

class _$AccountInfoOauthprovidersSerializer implements PrimitiveSerializer<AccountInfoOauthproviders> {
  @override
  final Iterable<Type> types = const [AccountInfoOauthproviders, _$AccountInfoOauthproviders];

  @override
  final String wireName = r'AccountInfoOauthproviders';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoOauthproviders object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoOauthproviders object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final oneOf = object.oneOf;
    return serializers.serialize(oneOf.value, specifiedType: FullType(oneOf.valueType))!;
  }

  @override
  AccountInfoOauthproviders deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoOauthprovidersBuilder();
    Object? oneOfDataSrc;
    final targetType = const FullType(OneOf, [FullType(BuiltList, [FullType.nullable(JsonObject)]), FullType(AccountInfoOauthConfigProviders), ]);
    oneOfDataSrc = serialized;
    result.oneOf = serializers.deserialize(oneOfDataSrc, specifiedType: targetType) as OneOf;
    return result.build();
  }
}

