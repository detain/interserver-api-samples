//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/account_info_max_mind_response.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_data_cc.g.dart';

/// Credit card information stored on the account.
///
/// Properties:
/// * [cc] 
/// * [ccExp] 
/// * [name] 
/// * [address] 
/// * [city] 
/// * [state] 
/// * [zip] 
/// * [country] 
/// * [maxmindRiskscore] 
/// * [maxmind] 
/// * [verified] 
@BuiltValue()
abstract class AccountInfoDataCc implements Built<AccountInfoDataCc, AccountInfoDataCcBuilder> {
  @BuiltValueField(wireName: r'cc')
  String? get cc;

  @BuiltValueField(wireName: r'cc_exp')
  String? get ccExp;

  @BuiltValueField(wireName: r'name')
  String? get name;

  @BuiltValueField(wireName: r'address')
  String? get address;

  @BuiltValueField(wireName: r'city')
  String? get city;

  @BuiltValueField(wireName: r'state')
  String? get state;

  @BuiltValueField(wireName: r'zip')
  String? get zip;

  @BuiltValueField(wireName: r'country')
  String? get country;

  @BuiltValueField(wireName: r'maxmind_riskscore')
  String? get maxmindRiskscore;

  @BuiltValueField(wireName: r'maxmind')
  AccountInfoMaxMindResponse? get maxmind;

  @BuiltValueField(wireName: r'verified')
  bool? get verified;

  AccountInfoDataCc._();

  factory AccountInfoDataCc([void updates(AccountInfoDataCcBuilder b)]) = _$AccountInfoDataCc;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoDataCcBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoDataCc> get serializer => _$AccountInfoDataCcSerializer();
}

class _$AccountInfoDataCcSerializer implements PrimitiveSerializer<AccountInfoDataCc> {
  @override
  final Iterable<Type> types = const [AccountInfoDataCc, _$AccountInfoDataCc];

  @override
  final String wireName = r'AccountInfoDataCc';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoDataCc object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.cc != null) {
      yield r'cc';
      yield serializers.serialize(
        object.cc,
        specifiedType: const FullType(String),
      );
    }
    if (object.ccExp != null) {
      yield r'cc_exp';
      yield serializers.serialize(
        object.ccExp,
        specifiedType: const FullType(String),
      );
    }
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
    if (object.address != null) {
      yield r'address';
      yield serializers.serialize(
        object.address,
        specifiedType: const FullType(String),
      );
    }
    if (object.city != null) {
      yield r'city';
      yield serializers.serialize(
        object.city,
        specifiedType: const FullType(String),
      );
    }
    if (object.state != null) {
      yield r'state';
      yield serializers.serialize(
        object.state,
        specifiedType: const FullType(String),
      );
    }
    if (object.zip != null) {
      yield r'zip';
      yield serializers.serialize(
        object.zip,
        specifiedType: const FullType(String),
      );
    }
    if (object.country != null) {
      yield r'country';
      yield serializers.serialize(
        object.country,
        specifiedType: const FullType(String),
      );
    }
    if (object.maxmindRiskscore != null) {
      yield r'maxmind_riskscore';
      yield serializers.serialize(
        object.maxmindRiskscore,
        specifiedType: const FullType(String),
      );
    }
    if (object.maxmind != null) {
      yield r'maxmind';
      yield serializers.serialize(
        object.maxmind,
        specifiedType: const FullType(AccountInfoMaxMindResponse),
      );
    }
    if (object.verified != null) {
      yield r'verified';
      yield serializers.serialize(
        object.verified,
        specifiedType: const FullType(bool),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoDataCc object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountInfoDataCcBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'cc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cc = valueDes;
          break;
        case r'cc_exp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccExp = valueDes;
          break;
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'address':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address = valueDes;
          break;
        case r'city':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.city = valueDes;
          break;
        case r'state':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.state = valueDes;
          break;
        case r'zip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.zip = valueDes;
          break;
        case r'country':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.country = valueDes;
          break;
        case r'maxmind_riskscore':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxmindRiskscore = valueDes;
          break;
        case r'maxmind':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoMaxMindResponse),
          ) as AccountInfoMaxMindResponse;
          result.maxmind.replace(valueDes);
          break;
        case r'verified':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.verified = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountInfoDataCc deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoDataCcBuilder();
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

