//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/domain_all_info_attributes_contact_set.dart';
import 'package:openapi/src/model/domain_name_server.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_all_info_attributes.g.dart';

/// DomainAllInfoAttributes
///
/// Properties:
/// * [contactSet] 
/// * [registryCreatedate] 
/// * [registryExpiredate] 
/// * [tldData] 
/// * [letExpire] 
/// * [autoRenew] 
/// * [sponsoringRsp] 
/// * [gdprConsentStatus] 
/// * [nameserverList] 
/// * [registryUpdatedate] 
/// * [affiliateId] 
/// * [expiredate] 
@BuiltValue()
abstract class DomainAllInfoAttributes implements Built<DomainAllInfoAttributes, DomainAllInfoAttributesBuilder> {
  @BuiltValueField(wireName: r'contact_set')
  DomainAllInfoAttributesContactSet? get contactSet;

  @BuiltValueField(wireName: r'registry_createdate')
  String? get registryCreatedate;

  @BuiltValueField(wireName: r'registry_expiredate')
  String? get registryExpiredate;

  @BuiltValueField(wireName: r'tld_data')
  String? get tldData;

  @BuiltValueField(wireName: r'let_expire')
  String? get letExpire;

  @BuiltValueField(wireName: r'auto_renew')
  String? get autoRenew;

  @BuiltValueField(wireName: r'sponsoring_rsp')
  String? get sponsoringRsp;

  @BuiltValueField(wireName: r'gdpr_consent_status')
  String? get gdprConsentStatus;

  @BuiltValueField(wireName: r'nameserver_list')
  BuiltList<DomainNameServer>? get nameserverList;

  @BuiltValueField(wireName: r'registry_updatedate')
  String? get registryUpdatedate;

  @BuiltValueField(wireName: r'affiliate_id')
  String? get affiliateId;

  @BuiltValueField(wireName: r'expiredate')
  String? get expiredate;

  DomainAllInfoAttributes._();

  factory DomainAllInfoAttributes([void updates(DomainAllInfoAttributesBuilder b)]) = _$DomainAllInfoAttributes;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainAllInfoAttributesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainAllInfoAttributes> get serializer => _$DomainAllInfoAttributesSerializer();
}

class _$DomainAllInfoAttributesSerializer implements PrimitiveSerializer<DomainAllInfoAttributes> {
  @override
  final Iterable<Type> types = const [DomainAllInfoAttributes, _$DomainAllInfoAttributes];

  @override
  final String wireName = r'DomainAllInfoAttributes';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainAllInfoAttributes object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.contactSet != null) {
      yield r'contact_set';
      yield serializers.serialize(
        object.contactSet,
        specifiedType: const FullType(DomainAllInfoAttributesContactSet),
      );
    }
    if (object.registryCreatedate != null) {
      yield r'registry_createdate';
      yield serializers.serialize(
        object.registryCreatedate,
        specifiedType: const FullType(String),
      );
    }
    if (object.registryExpiredate != null) {
      yield r'registry_expiredate';
      yield serializers.serialize(
        object.registryExpiredate,
        specifiedType: const FullType(String),
      );
    }
    if (object.tldData != null) {
      yield r'tld_data';
      yield serializers.serialize(
        object.tldData,
        specifiedType: const FullType(String),
      );
    }
    if (object.letExpire != null) {
      yield r'let_expire';
      yield serializers.serialize(
        object.letExpire,
        specifiedType: const FullType(String),
      );
    }
    if (object.autoRenew != null) {
      yield r'auto_renew';
      yield serializers.serialize(
        object.autoRenew,
        specifiedType: const FullType(String),
      );
    }
    if (object.sponsoringRsp != null) {
      yield r'sponsoring_rsp';
      yield serializers.serialize(
        object.sponsoringRsp,
        specifiedType: const FullType(String),
      );
    }
    if (object.gdprConsentStatus != null) {
      yield r'gdpr_consent_status';
      yield serializers.serialize(
        object.gdprConsentStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.nameserverList != null) {
      yield r'nameserver_list';
      yield serializers.serialize(
        object.nameserverList,
        specifiedType: const FullType(BuiltList, [FullType(DomainNameServer)]),
      );
    }
    if (object.registryUpdatedate != null) {
      yield r'registry_updatedate';
      yield serializers.serialize(
        object.registryUpdatedate,
        specifiedType: const FullType(String),
      );
    }
    if (object.affiliateId != null) {
      yield r'affiliate_id';
      yield serializers.serialize(
        object.affiliateId,
        specifiedType: const FullType(String),
      );
    }
    if (object.expiredate != null) {
      yield r'expiredate';
      yield serializers.serialize(
        object.expiredate,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainAllInfoAttributes object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainAllInfoAttributesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'contact_set':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainAllInfoAttributesContactSet),
          ) as DomainAllInfoAttributesContactSet;
          result.contactSet.replace(valueDes);
          break;
        case r'registry_createdate':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.registryCreatedate = valueDes;
          break;
        case r'registry_expiredate':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.registryExpiredate = valueDes;
          break;
        case r'tld_data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.tldData = valueDes;
          break;
        case r'let_expire':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.letExpire = valueDes;
          break;
        case r'auto_renew':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.autoRenew = valueDes;
          break;
        case r'sponsoring_rsp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.sponsoringRsp = valueDes;
          break;
        case r'gdpr_consent_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.gdprConsentStatus = valueDes;
          break;
        case r'nameserver_list':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(DomainNameServer)]),
          ) as BuiltList<DomainNameServer>;
          result.nameserverList.replace(valueDes);
          break;
        case r'registry_updatedate':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.registryUpdatedate = valueDes;
          break;
        case r'affiliate_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.affiliateId = valueDes;
          break;
        case r'expiredate':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.expiredate = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainAllInfoAttributes deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainAllInfoAttributesBuilder();
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

