//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/account_info_oauth_config_providers.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_oauth_config.g.dart';

/// OAuth integration configuration including callback URL and available providers.
///
/// Properties:
/// * [callback] 
/// * [providers] 
@BuiltValue()
abstract class AccountInfoOauthConfig implements Built<AccountInfoOauthConfig, AccountInfoOauthConfigBuilder> {
  @BuiltValueField(wireName: r'callback')
  String get callback;

  @BuiltValueField(wireName: r'providers')
  AccountInfoOauthConfigProviders get providers;

  AccountInfoOauthConfig._();

  factory AccountInfoOauthConfig([void updates(AccountInfoOauthConfigBuilder b)]) = _$AccountInfoOauthConfig;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoOauthConfigBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoOauthConfig> get serializer => _$AccountInfoOauthConfigSerializer();
}

class _$AccountInfoOauthConfigSerializer implements PrimitiveSerializer<AccountInfoOauthConfig> {
  @override
  final Iterable<Type> types = const [AccountInfoOauthConfig, _$AccountInfoOauthConfig];

  @override
  final String wireName = r'AccountInfoOauthConfig';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoOauthConfig object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'callback';
    yield serializers.serialize(
      object.callback,
      specifiedType: const FullType(String),
    );
    yield r'providers';
    yield serializers.serialize(
      object.providers,
      specifiedType: const FullType(AccountInfoOauthConfigProviders),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoOauthConfig object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountInfoOauthConfigBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'callback':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.callback = valueDes;
          break;
        case r'providers':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoOauthConfigProviders),
          ) as AccountInfoOauthConfigProviders;
          result.providers = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountInfoOauthConfig deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoOauthConfigBuilder();
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

