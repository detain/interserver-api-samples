//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/websites_order_json_services.dart';
import 'package:openapi/src/model/websites_order_packges.dart';
import 'package:openapi/src/model/websites_order_service_types.dart';
import 'package:openapi/src/model/websites_order_json_service_offers.dart';
import 'package:openapi/src/model/websites_order_packages.dart';
import 'package:openapi/src/model/websites_order_service_offers.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'websites_order.g.dart';

/// Schema for the WebsitesOrder object
///
/// Properties:
/// * [step] - Step description
/// * [website] - Website description
/// * [period] - Period description
/// * [serviceOfferId] - Service offer ID description
/// * [packages] 
/// * [enableDomainRegistering] - Enable domain registering description
/// * [jsonServices] 
/// * [jsonServiceOffers] 
/// * [serviceTypes] 
/// * [serviceOffers] 
/// * [packges] 
@BuiltValue()
abstract class WebsitesOrder implements Built<WebsitesOrder, WebsitesOrderBuilder> {
  /// Step description
  @BuiltValueField(wireName: r'step')
  String get step;

  /// Website description
  @BuiltValueField(wireName: r'website')
  String get website;

  /// Period description
  @BuiltValueField(wireName: r'period')
  int get period;

  /// Service offer ID description
  @BuiltValueField(wireName: r'serviceOfferId')
  int get serviceOfferId;

  @BuiltValueField(wireName: r'packages')
  WebsitesOrderPackages get packages;

  /// Enable domain registering description
  @BuiltValueField(wireName: r'enableDomainRegistering')
  bool get enableDomainRegistering;

  @BuiltValueField(wireName: r'jsonServices')
  WebsitesOrderJsonServices get jsonServices;

  @BuiltValueField(wireName: r'jsonServiceOffers')
  WebsitesOrderJsonServiceOffers get jsonServiceOffers;

  @BuiltValueField(wireName: r'serviceTypes')
  WebsitesOrderServiceTypes get serviceTypes;

  @BuiltValueField(wireName: r'serviceOffers')
  WebsitesOrderServiceOffers get serviceOffers;

  @BuiltValueField(wireName: r'packges')
  WebsitesOrderPackges? get packges;

  WebsitesOrder._();

  factory WebsitesOrder([void updates(WebsitesOrderBuilder b)]) = _$WebsitesOrder;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsitesOrderBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsitesOrder> get serializer => _$WebsitesOrderSerializer();
}

class _$WebsitesOrderSerializer implements PrimitiveSerializer<WebsitesOrder> {
  @override
  final Iterable<Type> types = const [WebsitesOrder, _$WebsitesOrder];

  @override
  final String wireName = r'WebsitesOrder';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsitesOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'step';
    yield serializers.serialize(
      object.step,
      specifiedType: const FullType(String),
    );
    yield r'website';
    yield serializers.serialize(
      object.website,
      specifiedType: const FullType(String),
    );
    yield r'period';
    yield serializers.serialize(
      object.period,
      specifiedType: const FullType(int),
    );
    yield r'serviceOfferId';
    yield serializers.serialize(
      object.serviceOfferId,
      specifiedType: const FullType(int),
    );
    yield r'packages';
    yield serializers.serialize(
      object.packages,
      specifiedType: const FullType(WebsitesOrderPackages),
    );
    yield r'enableDomainRegistering';
    yield serializers.serialize(
      object.enableDomainRegistering,
      specifiedType: const FullType(bool),
    );
    yield r'jsonServices';
    yield serializers.serialize(
      object.jsonServices,
      specifiedType: const FullType(WebsitesOrderJsonServices),
    );
    yield r'jsonServiceOffers';
    yield serializers.serialize(
      object.jsonServiceOffers,
      specifiedType: const FullType(WebsitesOrderJsonServiceOffers),
    );
    yield r'serviceTypes';
    yield serializers.serialize(
      object.serviceTypes,
      specifiedType: const FullType(WebsitesOrderServiceTypes),
    );
    yield r'serviceOffers';
    yield serializers.serialize(
      object.serviceOffers,
      specifiedType: const FullType(WebsitesOrderServiceOffers),
    );
    if (object.packges != null) {
      yield r'packges';
      yield serializers.serialize(
        object.packges,
        specifiedType: const FullType(WebsitesOrderPackges),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsitesOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsitesOrderBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'step':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.step = valueDes;
          break;
        case r'website':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.website = valueDes;
          break;
        case r'period':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.period = valueDes;
          break;
        case r'serviceOfferId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.serviceOfferId = valueDes;
          break;
        case r'packages':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsitesOrderPackages),
          ) as WebsitesOrderPackages;
          result.packages.replace(valueDes);
          break;
        case r'enableDomainRegistering':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.enableDomainRegistering = valueDes;
          break;
        case r'jsonServices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsitesOrderJsonServices),
          ) as WebsitesOrderJsonServices;
          result.jsonServices.replace(valueDes);
          break;
        case r'jsonServiceOffers':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsitesOrderJsonServiceOffers),
          ) as WebsitesOrderJsonServiceOffers;
          result.jsonServiceOffers.replace(valueDes);
          break;
        case r'serviceTypes':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsitesOrderServiceTypes),
          ) as WebsitesOrderServiceTypes;
          result.serviceTypes.replace(valueDes);
          break;
        case r'serviceOffers':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsitesOrderServiceOffers),
          ) as WebsitesOrderServiceOffers;
          result.serviceOffers.replace(valueDes);
          break;
        case r'packges':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsitesOrderPackges),
          ) as WebsitesOrderPackges;
          result.packges.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsitesOrder deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsitesOrderBuilder();
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

