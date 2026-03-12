//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/get_scrub_ip_details200_response_billing_details.dart';
import 'package:openapi/src/model/get_scrub_ip_details200_response_extra_info_tables.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/get_scrub_ip_details200_response_client_links_inner.dart';
import 'package:openapi/src/model/get_scrub_ip_details200_response_service_info.dart';
import 'package:openapi/src/model/get_scrub_ip_details200_response_filter_firewall.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_scrub_ip_details200_response.g.dart';

/// GetScrubIpDetails200Response
///
/// Properties:
/// * [serviceInfo] 
/// * [clientLinks] 
/// * [billingDetails] 
/// * [custCurrency] 
/// * [custCurrencySymbol] 
/// * [package] 
/// * [extraInfoTables] 
/// * [filterFirewall] 
@BuiltValue()
abstract class GetScrubIpDetails200Response implements Built<GetScrubIpDetails200Response, GetScrubIpDetails200ResponseBuilder> {
  @BuiltValueField(wireName: r'serviceInfo')
  GetScrubIpDetails200ResponseServiceInfo? get serviceInfo;

  @BuiltValueField(wireName: r'client_links')
  BuiltList<GetScrubIpDetails200ResponseClientLinksInner>? get clientLinks;

  @BuiltValueField(wireName: r'billingDetails')
  GetScrubIpDetails200ResponseBillingDetails? get billingDetails;

  @BuiltValueField(wireName: r'custCurrency')
  String? get custCurrency;

  @BuiltValueField(wireName: r'custCurrencySymbol')
  String? get custCurrencySymbol;

  @BuiltValueField(wireName: r'package')
  String? get package;

  @BuiltValueField(wireName: r'extraInfoTables')
  GetScrubIpDetails200ResponseExtraInfoTables? get extraInfoTables;

  @BuiltValueField(wireName: r'filter_firewall')
  GetScrubIpDetails200ResponseFilterFirewall? get filterFirewall;

  GetScrubIpDetails200Response._();

  factory GetScrubIpDetails200Response([void updates(GetScrubIpDetails200ResponseBuilder b)]) = _$GetScrubIpDetails200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetScrubIpDetails200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetScrubIpDetails200Response> get serializer => _$GetScrubIpDetails200ResponseSerializer();
}

class _$GetScrubIpDetails200ResponseSerializer implements PrimitiveSerializer<GetScrubIpDetails200Response> {
  @override
  final Iterable<Type> types = const [GetScrubIpDetails200Response, _$GetScrubIpDetails200Response];

  @override
  final String wireName = r'GetScrubIpDetails200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetScrubIpDetails200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serviceInfo != null) {
      yield r'serviceInfo';
      yield serializers.serialize(
        object.serviceInfo,
        specifiedType: const FullType(GetScrubIpDetails200ResponseServiceInfo),
      );
    }
    if (object.clientLinks != null) {
      yield r'client_links';
      yield serializers.serialize(
        object.clientLinks,
        specifiedType: const FullType(BuiltList, [FullType(GetScrubIpDetails200ResponseClientLinksInner)]),
      );
    }
    if (object.billingDetails != null) {
      yield r'billingDetails';
      yield serializers.serialize(
        object.billingDetails,
        specifiedType: const FullType(GetScrubIpDetails200ResponseBillingDetails),
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
    if (object.package != null) {
      yield r'package';
      yield serializers.serialize(
        object.package,
        specifiedType: const FullType(String),
      );
    }
    if (object.extraInfoTables != null) {
      yield r'extraInfoTables';
      yield serializers.serialize(
        object.extraInfoTables,
        specifiedType: const FullType(GetScrubIpDetails200ResponseExtraInfoTables),
      );
    }
    if (object.filterFirewall != null) {
      yield r'filter_firewall';
      yield serializers.serialize(
        object.filterFirewall,
        specifiedType: const FullType(GetScrubIpDetails200ResponseFilterFirewall),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    GetScrubIpDetails200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetScrubIpDetails200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'serviceInfo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(GetScrubIpDetails200ResponseServiceInfo),
          ) as GetScrubIpDetails200ResponseServiceInfo;
          result.serviceInfo.replace(valueDes);
          break;
        case r'client_links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(GetScrubIpDetails200ResponseClientLinksInner)]),
          ) as BuiltList<GetScrubIpDetails200ResponseClientLinksInner>;
          result.clientLinks.replace(valueDes);
          break;
        case r'billingDetails':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(GetScrubIpDetails200ResponseBillingDetails),
          ) as GetScrubIpDetails200ResponseBillingDetails;
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
        case r'extraInfoTables':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(GetScrubIpDetails200ResponseExtraInfoTables),
          ) as GetScrubIpDetails200ResponseExtraInfoTables;
          result.extraInfoTables.replace(valueDes);
          break;
        case r'filter_firewall':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(GetScrubIpDetails200ResponseFilterFirewall),
          ) as GetScrubIpDetails200ResponseFilterFirewall;
          result.filterFirewall.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetScrubIpDetails200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetScrubIpDetails200ResponseBuilder();
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

