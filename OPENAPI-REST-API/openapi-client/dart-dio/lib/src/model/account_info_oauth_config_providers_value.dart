//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_oauth_config_providers_value.g.dart';

/// AccountInfoOauthConfigProvidersValue
///
/// Properties:
/// * [enabled] 
/// * [linked] 
/// * [account] 
/// * [url] 
@BuiltValue()
abstract class AccountInfoOauthConfigProvidersValue implements Built<AccountInfoOauthConfigProvidersValue, AccountInfoOauthConfigProvidersValueBuilder> {
  @BuiltValueField(wireName: r'enabled')
  bool? get enabled;

  @BuiltValueField(wireName: r'linked')
  bool? get linked;

  @BuiltValueField(wireName: r'account')
  String? get account;

  @BuiltValueField(wireName: r'url')
  String? get url;

  AccountInfoOauthConfigProvidersValue._();

  factory AccountInfoOauthConfigProvidersValue([void updates(AccountInfoOauthConfigProvidersValueBuilder b)]) = _$AccountInfoOauthConfigProvidersValue;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoOauthConfigProvidersValueBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoOauthConfigProvidersValue> get serializer => _$AccountInfoOauthConfigProvidersValueSerializer();
}

class _$AccountInfoOauthConfigProvidersValueSerializer implements PrimitiveSerializer<AccountInfoOauthConfigProvidersValue> {
  @override
  final Iterable<Type> types = const [AccountInfoOauthConfigProvidersValue, _$AccountInfoOauthConfigProvidersValue];

  @override
  final String wireName = r'AccountInfoOauthConfigProvidersValue';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoOauthConfigProvidersValue object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.enabled != null) {
      yield r'enabled';
      yield serializers.serialize(
        object.enabled,
        specifiedType: const FullType(bool),
      );
    }
    if (object.linked != null) {
      yield r'linked';
      yield serializers.serialize(
        object.linked,
        specifiedType: const FullType(bool),
      );
    }
    if (object.account != null) {
      yield r'account';
      yield serializers.serialize(
        object.account,
        specifiedType: const FullType(String),
      );
    }
    if (object.url != null) {
      yield r'url';
      yield serializers.serialize(
        object.url,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoOauthConfigProvidersValue object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountInfoOauthConfigProvidersValueBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'enabled':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.enabled = valueDes;
          break;
        case r'linked':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.linked = valueDes;
          break;
        case r'account':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.account = valueDes;
          break;
        case r'url':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.url = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountInfoOauthConfigProvidersValue deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoOauthConfigProvidersValueBuilder();
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

