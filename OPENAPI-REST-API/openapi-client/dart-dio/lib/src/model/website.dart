//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/website_extra_info_tables.dart';
import 'package:openapi/src/model/website_service_master.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/website_service_info.dart';
import 'package:openapi/src/model/website_billing_details.dart';
import 'package:openapi/src/model/website_client_link.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'website.g.dart';

/// Full detail view of a webhosting service including billing, service configuration, and panel access links.
///
/// Properties:
/// * [serviceInfo] 
/// * [clientLinks] 
/// * [billingDetails] 
/// * [custCurrency] - Customer's currency
/// * [custCurrencySymbol] - Customer currency symbol
/// * [serviceMaster] 
/// * [package] - Package information
/// * [serviceExtra] 
/// * [extraInfoTables] 
@BuiltValue()
abstract class Website implements Built<Website, WebsiteBuilder> {
  @BuiltValueField(wireName: r'serviceInfo')
  WebsiteServiceInfo? get serviceInfo;

  @BuiltValueField(wireName: r'client_links')
  BuiltList<WebsiteClientLink>? get clientLinks;

  @BuiltValueField(wireName: r'billingDetails')
  WebsiteBillingDetails? get billingDetails;

  /// Customer's currency
  @BuiltValueField(wireName: r'custCurrency')
  String? get custCurrency;

  /// Customer currency symbol
  @BuiltValueField(wireName: r'custCurrencySymbol')
  String? get custCurrencySymbol;

  @BuiltValueField(wireName: r'serviceMaster')
  WebsiteServiceMaster? get serviceMaster;

  /// Package information
  @BuiltValueField(wireName: r'package')
  String? get package;

  @BuiltValueField(wireName: r'serviceExtra')
  BuiltList<JsonObject>? get serviceExtra;

  @BuiltValueField(wireName: r'extraInfoTables')
  WebsiteExtraInfoTables? get extraInfoTables;

  Website._();

  factory Website([void updates(WebsiteBuilder b)]) = _$Website;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsiteBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Website> get serializer => _$WebsiteSerializer();
}

class _$WebsiteSerializer implements PrimitiveSerializer<Website> {
  @override
  final Iterable<Type> types = const [Website, _$Website];

  @override
  final String wireName = r'Website';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Website object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serviceInfo != null) {
      yield r'serviceInfo';
      yield serializers.serialize(
        object.serviceInfo,
        specifiedType: const FullType(WebsiteServiceInfo),
      );
    }
    if (object.clientLinks != null) {
      yield r'client_links';
      yield serializers.serialize(
        object.clientLinks,
        specifiedType: const FullType(BuiltList, [FullType(WebsiteClientLink)]),
      );
    }
    if (object.billingDetails != null) {
      yield r'billingDetails';
      yield serializers.serialize(
        object.billingDetails,
        specifiedType: const FullType(WebsiteBillingDetails),
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
    if (object.serviceMaster != null) {
      yield r'serviceMaster';
      yield serializers.serialize(
        object.serviceMaster,
        specifiedType: const FullType(WebsiteServiceMaster),
      );
    }
    if (object.package != null) {
      yield r'package';
      yield serializers.serialize(
        object.package,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceExtra != null) {
      yield r'serviceExtra';
      yield serializers.serialize(
        object.serviceExtra,
        specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
      );
    }
    if (object.extraInfoTables != null) {
      yield r'extraInfoTables';
      yield serializers.serialize(
        object.extraInfoTables,
        specifiedType: const FullType(WebsiteExtraInfoTables),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    Website object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsiteBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'serviceInfo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsiteServiceInfo),
          ) as WebsiteServiceInfo;
          result.serviceInfo.replace(valueDes);
          break;
        case r'client_links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(WebsiteClientLink)]),
          ) as BuiltList<WebsiteClientLink>;
          result.clientLinks.replace(valueDes);
          break;
        case r'billingDetails':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsiteBillingDetails),
          ) as WebsiteBillingDetails;
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
        case r'serviceMaster':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsiteServiceMaster),
          ) as WebsiteServiceMaster;
          result.serviceMaster.replace(valueDes);
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
            specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
          ) as BuiltList<JsonObject>;
          result.serviceExtra.replace(valueDes);
          break;
        case r'extraInfoTables':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsiteExtraInfoTables),
          ) as WebsiteExtraInfoTables;
          result.extraInfoTables.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Website deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsiteBuilder();
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

