//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/domain_service_type.dart';
import 'package:openapi/src/model/domain_billing_details.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/domain_billing_extra.dart';
import 'package:openapi/src/model/domain_client_link.dart';
import 'package:openapi/src/model/domain_service_info.dart';
import 'package:openapi/src/model/backup_extra_info_tables.dart';
import 'package:openapi/src/model/domain_all_info.dart';
import 'package:openapi/src/model/domain_contact_details.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain.g.dart';

/// Full detail view of a domain service including billing, contacts, DNS, and configuration.
///
/// Properties:
/// * [serviceInfo] 
/// * [serviceTypes] 
/// * [clientLinks] 
/// * [billingDetails] 
/// * [custCurrency] 
/// * [custCurrencySymbol] 
/// * [serviceExtra] 
/// * [extraInfoTables] 
/// * [serviceType] 
/// * [contactDetails] 
/// * [pwarning] 
/// * [transferInfo] 
/// * [errors] 
/// * [domainLogs] 
/// * [allInfo] 
/// * [registrarStatus] 
/// * [locked] 
/// * [whoisPrivacy] 
/// * [autoRenew] 
@BuiltValue()
abstract class Domain implements Built<Domain, DomainBuilder> {
  @BuiltValueField(wireName: r'serviceInfo')
  DomainServiceInfo? get serviceInfo;

  @BuiltValueField(wireName: r'serviceTypes')
  BuiltMap<String, DomainServiceType>? get serviceTypes;

  @BuiltValueField(wireName: r'client_links')
  BuiltList<DomainClientLink>? get clientLinks;

  @BuiltValueField(wireName: r'billingDetails')
  DomainBillingDetails? get billingDetails;

  @BuiltValueField(wireName: r'custCurrency')
  String? get custCurrency;

  @BuiltValueField(wireName: r'custCurrencySymbol')
  String? get custCurrencySymbol;

  @BuiltValueField(wireName: r'serviceExtra')
  DomainBillingExtra? get serviceExtra;

  @BuiltValueField(wireName: r'extraInfoTables')
  BackupExtraInfoTables? get extraInfoTables;

  @BuiltValueField(wireName: r'serviceType')
  DomainServiceType? get serviceType;

  @BuiltValueField(wireName: r'contact_details')
  DomainContactDetails? get contactDetails;

  @BuiltValueField(wireName: r'pwarning')
  String? get pwarning;

  @BuiltValueField(wireName: r'transfer_info')
  String? get transferInfo;

  @BuiltValueField(wireName: r'errors')
  bool? get errors;

  @BuiltValueField(wireName: r'domain_logs')
  BuiltList<String>? get domainLogs;

  @BuiltValueField(wireName: r'allInfo')
  DomainAllInfo? get allInfo;

  @BuiltValueField(wireName: r'registrarStatus')
  String? get registrarStatus;

  @BuiltValueField(wireName: r'locked')
  String? get locked;

  @BuiltValueField(wireName: r'whoisPrivacy')
  String? get whoisPrivacy;

  @BuiltValueField(wireName: r'autoRenew')
  String? get autoRenew;

  Domain._();

  factory Domain([void updates(DomainBuilder b)]) = _$Domain;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Domain> get serializer => _$DomainSerializer();
}

class _$DomainSerializer implements PrimitiveSerializer<Domain> {
  @override
  final Iterable<Type> types = const [Domain, _$Domain];

  @override
  final String wireName = r'Domain';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Domain object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serviceInfo != null) {
      yield r'serviceInfo';
      yield serializers.serialize(
        object.serviceInfo,
        specifiedType: const FullType(DomainServiceInfo),
      );
    }
    if (object.serviceTypes != null) {
      yield r'serviceTypes';
      yield serializers.serialize(
        object.serviceTypes,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(DomainServiceType)]),
      );
    }
    if (object.clientLinks != null) {
      yield r'client_links';
      yield serializers.serialize(
        object.clientLinks,
        specifiedType: const FullType(BuiltList, [FullType(DomainClientLink)]),
      );
    }
    if (object.billingDetails != null) {
      yield r'billingDetails';
      yield serializers.serialize(
        object.billingDetails,
        specifiedType: const FullType(DomainBillingDetails),
      );
    }
    if (object.custCurrency != null) {
      yield r'custCurrency';
      yield serializers.serialize(
        object.custCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.custCurrencySymbol != null) {
      yield r'custCurrencySymbol';
      yield serializers.serialize(
        object.custCurrencySymbol,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceExtra != null) {
      yield r'serviceExtra';
      yield serializers.serialize(
        object.serviceExtra,
        specifiedType: const FullType(DomainBillingExtra),
      );
    }
    if (object.extraInfoTables != null) {
      yield r'extraInfoTables';
      yield serializers.serialize(
        object.extraInfoTables,
        specifiedType: const FullType(BackupExtraInfoTables),
      );
    }
    if (object.serviceType != null) {
      yield r'serviceType';
      yield serializers.serialize(
        object.serviceType,
        specifiedType: const FullType(DomainServiceType),
      );
    }
    if (object.contactDetails != null) {
      yield r'contact_details';
      yield serializers.serialize(
        object.contactDetails,
        specifiedType: const FullType(DomainContactDetails),
      );
    }
    if (object.pwarning != null) {
      yield r'pwarning';
      yield serializers.serialize(
        object.pwarning,
        specifiedType: const FullType(String),
      );
    }
    if (object.transferInfo != null) {
      yield r'transfer_info';
      yield serializers.serialize(
        object.transferInfo,
        specifiedType: const FullType(String),
      );
    }
    if (object.errors != null) {
      yield r'errors';
      yield serializers.serialize(
        object.errors,
        specifiedType: const FullType(bool),
      );
    }
    if (object.domainLogs != null) {
      yield r'domain_logs';
      yield serializers.serialize(
        object.domainLogs,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.allInfo != null) {
      yield r'allInfo';
      yield serializers.serialize(
        object.allInfo,
        specifiedType: const FullType(DomainAllInfo),
      );
    }
    if (object.registrarStatus != null) {
      yield r'registrarStatus';
      yield serializers.serialize(
        object.registrarStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.locked != null) {
      yield r'locked';
      yield serializers.serialize(
        object.locked,
        specifiedType: const FullType(String),
      );
    }
    if (object.whoisPrivacy != null) {
      yield r'whoisPrivacy';
      yield serializers.serialize(
        object.whoisPrivacy,
        specifiedType: const FullType(String),
      );
    }
    if (object.autoRenew != null) {
      yield r'autoRenew';
      yield serializers.serialize(
        object.autoRenew,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    Domain object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'serviceInfo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainServiceInfo),
          ) as DomainServiceInfo;
          result.serviceInfo.replace(valueDes);
          break;
        case r'serviceTypes':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(DomainServiceType)]),
          ) as BuiltMap<String, DomainServiceType>;
          result.serviceTypes.replace(valueDes);
          break;
        case r'client_links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(DomainClientLink)]),
          ) as BuiltList<DomainClientLink>;
          result.clientLinks.replace(valueDes);
          break;
        case r'billingDetails':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainBillingDetails),
          ) as DomainBillingDetails;
          result.billingDetails.replace(valueDes);
          break;
        case r'custCurrency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custCurrency = valueDes;
          break;
        case r'custCurrencySymbol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custCurrencySymbol = valueDes;
          break;
        case r'serviceExtra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainBillingExtra),
          ) as DomainBillingExtra;
          result.serviceExtra.replace(valueDes);
          break;
        case r'extraInfoTables':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BackupExtraInfoTables),
          ) as BackupExtraInfoTables;
          result.extraInfoTables.replace(valueDes);
          break;
        case r'serviceType':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainServiceType),
          ) as DomainServiceType;
          result.serviceType.replace(valueDes);
          break;
        case r'contact_details':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainContactDetails),
          ) as DomainContactDetails;
          result.contactDetails.replace(valueDes);
          break;
        case r'pwarning':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.pwarning = valueDes;
          break;
        case r'transfer_info':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.transferInfo = valueDes;
          break;
        case r'errors':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.errors = valueDes;
          break;
        case r'domain_logs':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.domainLogs.replace(valueDes);
          break;
        case r'allInfo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainAllInfo),
          ) as DomainAllInfo;
          result.allInfo.replace(valueDes);
          break;
        case r'registrarStatus':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.registrarStatus = valueDes;
          break;
        case r'locked':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.locked = valueDes;
          break;
        case r'whoisPrivacy':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.whoisPrivacy = valueDes;
          break;
        case r'autoRenew':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.autoRenew = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Domain deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainBuilder();
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

