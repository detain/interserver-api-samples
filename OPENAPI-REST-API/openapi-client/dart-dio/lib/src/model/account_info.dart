//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/account_info_limits.dart';
import 'package:openapi/src/model/account_info_oauthproviders.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/account_info_data.dart';
import 'package:openapi/src/model/account_info_country_currencies.dart';
import 'package:openapi/src/model/account_info_oauth_config.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info.g.dart';

/// Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
///
/// Properties:
/// * [custid] 
/// * [ima] 
/// * [data] 
/// * [ip] 
/// * [oauthproviders] 
/// * [oauthconfig] 
/// * [oauthadapters] 
/// * [limits] 
/// * [language] 
/// * [countryCurrencies] 
/// * [enableLocales] 
/// * [enableCurrencies] 
/// * [gravatar] 
@BuiltValue()
abstract class AccountInfo implements Built<AccountInfo, AccountInfoBuilder> {
  @BuiltValueField(wireName: r'custid')
  String? get custid;

  @BuiltValueField(wireName: r'ima')
  String? get ima;

  @BuiltValueField(wireName: r'data')
  AccountInfoData? get data;

  @BuiltValueField(wireName: r'ip')
  String? get ip;

  @BuiltValueField(wireName: r'oauthproviders')
  AccountInfoOauthproviders? get oauthproviders;

  @BuiltValueField(wireName: r'oauthconfig')
  AccountInfoOauthConfig? get oauthconfig;

  @BuiltValueField(wireName: r'oauthadapters')
  BuiltList<String>? get oauthadapters;

  @BuiltValueField(wireName: r'limits')
  AccountInfoLimits? get limits;

  @BuiltValueField(wireName: r'language')
  String? get language;

  @BuiltValueField(wireName: r'countryCurrencies')
  AccountInfoCountryCurrencies? get countryCurrencies;

  @BuiltValueField(wireName: r'enableLocales')
  bool? get enableLocales;

  @BuiltValueField(wireName: r'enableCurrencies')
  bool? get enableCurrencies;

  @BuiltValueField(wireName: r'gravatar')
  String? get gravatar;

  AccountInfo._();

  factory AccountInfo([void updates(AccountInfoBuilder b)]) = _$AccountInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfo> get serializer => _$AccountInfoSerializer();
}

class _$AccountInfoSerializer implements PrimitiveSerializer<AccountInfo> {
  @override
  final Iterable<Type> types = const [AccountInfo, _$AccountInfo];

  @override
  final String wireName = r'AccountInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.custid != null) {
      yield r'custid';
      yield serializers.serialize(
        object.custid,
        specifiedType: const FullType(String),
      );
    }
    if (object.ima != null) {
      yield r'ima';
      yield serializers.serialize(
        object.ima,
        specifiedType: const FullType(String),
      );
    }
    if (object.data != null) {
      yield r'data';
      yield serializers.serialize(
        object.data,
        specifiedType: const FullType(AccountInfoData),
      );
    }
    if (object.ip != null) {
      yield r'ip';
      yield serializers.serialize(
        object.ip,
        specifiedType: const FullType(String),
      );
    }
    if (object.oauthproviders != null) {
      yield r'oauthproviders';
      yield serializers.serialize(
        object.oauthproviders,
        specifiedType: const FullType(AccountInfoOauthproviders),
      );
    }
    if (object.oauthconfig != null) {
      yield r'oauthconfig';
      yield serializers.serialize(
        object.oauthconfig,
        specifiedType: const FullType(AccountInfoOauthConfig),
      );
    }
    if (object.oauthadapters != null) {
      yield r'oauthadapters';
      yield serializers.serialize(
        object.oauthadapters,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.limits != null) {
      yield r'limits';
      yield serializers.serialize(
        object.limits,
        specifiedType: const FullType(AccountInfoLimits),
      );
    }
    if (object.language != null) {
      yield r'language';
      yield serializers.serialize(
        object.language,
        specifiedType: const FullType(String),
      );
    }
    if (object.countryCurrencies != null) {
      yield r'countryCurrencies';
      yield serializers.serialize(
        object.countryCurrencies,
        specifiedType: const FullType(AccountInfoCountryCurrencies),
      );
    }
    if (object.enableLocales != null) {
      yield r'enableLocales';
      yield serializers.serialize(
        object.enableLocales,
        specifiedType: const FullType(bool),
      );
    }
    if (object.enableCurrencies != null) {
      yield r'enableCurrencies';
      yield serializers.serialize(
        object.enableCurrencies,
        specifiedType: const FullType(bool),
      );
    }
    if (object.gravatar != null) {
      yield r'gravatar';
      yield serializers.serialize(
        object.gravatar,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custid = valueDes;
          break;
        case r'ima':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ima = valueDes;
          break;
        case r'data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoData),
          ) as AccountInfoData;
          result.data.replace(valueDes);
          break;
        case r'ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ip = valueDes;
          break;
        case r'oauthproviders':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoOauthproviders),
          ) as AccountInfoOauthproviders;
          result.oauthproviders.replace(valueDes);
          break;
        case r'oauthconfig':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoOauthConfig),
          ) as AccountInfoOauthConfig;
          result.oauthconfig.replace(valueDes);
          break;
        case r'oauthadapters':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.oauthadapters.replace(valueDes);
          break;
        case r'limits':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoLimits),
          ) as AccountInfoLimits;
          result.limits = valueDes;
          break;
        case r'language':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.language = valueDes;
          break;
        case r'countryCurrencies':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoCountryCurrencies),
          ) as AccountInfoCountryCurrencies;
          result.countryCurrencies = valueDes;
          break;
        case r'enableLocales':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.enableLocales = valueDes;
          break;
        case r'enableCurrencies':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.enableCurrencies = valueDes;
          break;
        case r'gravatar':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.gravatar = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoBuilder();
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

