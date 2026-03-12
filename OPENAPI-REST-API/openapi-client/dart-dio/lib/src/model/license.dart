//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/license_billing_details.dart';
import 'package:openapi/src/model/license_service_info.dart';
import 'package:openapi/src/model/license_service_type.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/license_extra_info_tables.dart';
import 'package:openapi/src/model/license_client_link.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'license.g.dart';

/// License
///
/// Properties:
/// * [serviceInfo] 
/// * [clientLinks] 
/// * [billingDetails] 
/// * [custCurrency] - Customer's currency
/// * [custCurrencySymbol] - Currency symbol for customer
/// * [package] - Package name
/// * [serviceExtra] - Extra service information
/// * [extraInfoTables] 
/// * [serviceOverviewExtra] - Extra service overview information
/// * [serviceType] 
/// * [licenseKey] - License key
@BuiltValue()
abstract class License implements Built<License, LicenseBuilder> {
  @BuiltValueField(wireName: r'serviceInfo')
  LicenseServiceInfo get serviceInfo;

  @BuiltValueField(wireName: r'client_links')
  BuiltList<LicenseClientLink> get clientLinks;

  @BuiltValueField(wireName: r'billingDetails')
  LicenseBillingDetails get billingDetails;

  /// Customer's currency
  @BuiltValueField(wireName: r'custCurrency')
  String get custCurrency;

  /// Currency symbol for customer
  @BuiltValueField(wireName: r'custCurrencySymbol')
  String get custCurrencySymbol;

  /// Package name
  @BuiltValueField(wireName: r'package')
  String get package;

  /// Extra service information
  @BuiltValueField(wireName: r'serviceExtra')
  BuiltList<String> get serviceExtra;

  @BuiltValueField(wireName: r'extraInfoTables')
  LicenseExtraInfoTables get extraInfoTables;

  /// Extra service overview information
  @BuiltValueField(wireName: r'service_overview_extra')
  String get serviceOverviewExtra;

  @BuiltValueField(wireName: r'serviceType')
  LicenseServiceType get serviceType;

  /// License key
  @BuiltValueField(wireName: r'license_key')
  String get licenseKey;

  License._();

  factory License([void updates(LicenseBuilder b)]) = _$License;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicenseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<License> get serializer => _$LicenseSerializer();
}

class _$LicenseSerializer implements PrimitiveSerializer<License> {
  @override
  final Iterable<Type> types = const [License, _$License];

  @override
  final String wireName = r'License';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    License object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'serviceInfo';
    yield serializers.serialize(
      object.serviceInfo,
      specifiedType: const FullType(LicenseServiceInfo),
    );
    yield r'client_links';
    yield serializers.serialize(
      object.clientLinks,
      specifiedType: const FullType(BuiltList, [FullType(LicenseClientLink)]),
    );
    yield r'billingDetails';
    yield serializers.serialize(
      object.billingDetails,
      specifiedType: const FullType(LicenseBillingDetails),
    );
    yield r'custCurrency';
    yield serializers.serialize(
      object.custCurrency,
      specifiedType: const FullType(String),
    );
    yield r'custCurrencySymbol';
    yield serializers.serialize(
      object.custCurrencySymbol,
      specifiedType: const FullType(String),
    );
    yield r'package';
    yield serializers.serialize(
      object.package,
      specifiedType: const FullType(String),
    );
    yield r'serviceExtra';
    yield serializers.serialize(
      object.serviceExtra,
      specifiedType: const FullType(BuiltList, [FullType(String)]),
    );
    yield r'extraInfoTables';
    yield serializers.serialize(
      object.extraInfoTables,
      specifiedType: const FullType(LicenseExtraInfoTables),
    );
    yield r'service_overview_extra';
    yield serializers.serialize(
      object.serviceOverviewExtra,
      specifiedType: const FullType(String),
    );
    yield r'serviceType';
    yield serializers.serialize(
      object.serviceType,
      specifiedType: const FullType(LicenseServiceType),
    );
    yield r'license_key';
    yield serializers.serialize(
      object.licenseKey,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    License object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicenseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'serviceInfo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LicenseServiceInfo),
          ) as LicenseServiceInfo;
          result.serviceInfo.replace(valueDes);
          break;
        case r'client_links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(LicenseClientLink)]),
          ) as BuiltList<LicenseClientLink>;
          result.clientLinks.replace(valueDes);
          break;
        case r'billingDetails':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LicenseBillingDetails),
          ) as LicenseBillingDetails;
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
        case r'package':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.package = valueDes;
          break;
        case r'serviceExtra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.serviceExtra.replace(valueDes);
          break;
        case r'extraInfoTables':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LicenseExtraInfoTables),
          ) as LicenseExtraInfoTables;
          result.extraInfoTables.replace(valueDes);
          break;
        case r'service_overview_extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceOverviewExtra = valueDes;
          break;
        case r'serviceType':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(LicenseServiceType),
          ) as LicenseServiceType;
          result.serviceType.replace(valueDes);
          break;
        case r'license_key':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseKey = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  License deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicenseBuilder();
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

