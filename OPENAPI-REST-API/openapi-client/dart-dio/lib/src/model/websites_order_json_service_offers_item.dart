//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'websites_order_json_service_offers_item.g.dart';

/// WebsitesOrderJsonServiceOffersItem
///
/// Properties:
/// * [serviceOfferId] - Service offer ID
/// * [serviceId] - Service ID
/// * [introCost] - Introductory cost
/// * [renewalCost] - Renewal cost
/// * [introFrequency] - Introductory frequency
/// * [renewalFrequency] - Renewal frequency
/// * [allowCoupon] - Allow coupon
/// * [serviceModule] - Service module
/// * [createdAt] - Creation date
/// * [updatedAt] - Update date
/// * [deletedAt] - Deletion date
/// * [currencySymbol] - Currency symbol
@BuiltValue()
abstract class WebsitesOrderJsonServiceOffersItem implements Built<WebsitesOrderJsonServiceOffersItem, WebsitesOrderJsonServiceOffersItemBuilder> {
  /// Service offer ID
  @BuiltValueField(wireName: r'service_offer_id')
  String? get serviceOfferId;

  /// Service ID
  @BuiltValueField(wireName: r'service_id')
  String? get serviceId;

  /// Introductory cost
  @BuiltValueField(wireName: r'intro_cost')
  int? get introCost;

  /// Renewal cost
  @BuiltValueField(wireName: r'renewal_cost')
  int? get renewalCost;

  /// Introductory frequency
  @BuiltValueField(wireName: r'intro_frequency')
  String? get introFrequency;

  /// Renewal frequency
  @BuiltValueField(wireName: r'renewal_frequency')
  String? get renewalFrequency;

  /// Allow coupon
  @BuiltValueField(wireName: r'allow_coupon')
  String? get allowCoupon;

  /// Service module
  @BuiltValueField(wireName: r'service_module')
  String? get serviceModule;

  /// Creation date
  @BuiltValueField(wireName: r'created_at')
  String? get createdAt;

  /// Update date
  @BuiltValueField(wireName: r'updated_at')
  String? get updatedAt;

  /// Deletion date
  @BuiltValueField(wireName: r'deleted_at')
  String? get deletedAt;

  /// Currency symbol
  @BuiltValueField(wireName: r'currencySymbol')
  String? get currencySymbol;

  WebsitesOrderJsonServiceOffersItem._();

  factory WebsitesOrderJsonServiceOffersItem([void updates(WebsitesOrderJsonServiceOffersItemBuilder b)]) = _$WebsitesOrderJsonServiceOffersItem;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsitesOrderJsonServiceOffersItemBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsitesOrderJsonServiceOffersItem> get serializer => _$WebsitesOrderJsonServiceOffersItemSerializer();
}

class _$WebsitesOrderJsonServiceOffersItemSerializer implements PrimitiveSerializer<WebsitesOrderJsonServiceOffersItem> {
  @override
  final Iterable<Type> types = const [WebsitesOrderJsonServiceOffersItem, _$WebsitesOrderJsonServiceOffersItem];

  @override
  final String wireName = r'WebsitesOrderJsonServiceOffersItem';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsitesOrderJsonServiceOffersItem object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serviceOfferId != null) {
      yield r'service_offer_id';
      yield serializers.serialize(
        object.serviceOfferId,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceId != null) {
      yield r'service_id';
      yield serializers.serialize(
        object.serviceId,
        specifiedType: const FullType(String),
      );
    }
    if (object.introCost != null) {
      yield r'intro_cost';
      yield serializers.serialize(
        object.introCost,
        specifiedType: const FullType(int),
      );
    }
    if (object.renewalCost != null) {
      yield r'renewal_cost';
      yield serializers.serialize(
        object.renewalCost,
        specifiedType: const FullType(int),
      );
    }
    if (object.introFrequency != null) {
      yield r'intro_frequency';
      yield serializers.serialize(
        object.introFrequency,
        specifiedType: const FullType(String),
      );
    }
    if (object.renewalFrequency != null) {
      yield r'renewal_frequency';
      yield serializers.serialize(
        object.renewalFrequency,
        specifiedType: const FullType(String),
      );
    }
    if (object.allowCoupon != null) {
      yield r'allow_coupon';
      yield serializers.serialize(
        object.allowCoupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceModule != null) {
      yield r'service_module';
      yield serializers.serialize(
        object.serviceModule,
        specifiedType: const FullType(String),
      );
    }
    if (object.createdAt != null) {
      yield r'created_at';
      yield serializers.serialize(
        object.createdAt,
        specifiedType: const FullType(String),
      );
    }
    if (object.updatedAt != null) {
      yield r'updated_at';
      yield serializers.serialize(
        object.updatedAt,
        specifiedType: const FullType(String),
      );
    }
    if (object.deletedAt != null) {
      yield r'deleted_at';
      yield serializers.serialize(
        object.deletedAt,
        specifiedType: const FullType(String),
      );
    }
    if (object.currencySymbol != null) {
      yield r'currencySymbol';
      yield serializers.serialize(
        object.currencySymbol,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsitesOrderJsonServiceOffersItem object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsitesOrderJsonServiceOffersItemBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'service_offer_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceOfferId = valueDes;
          break;
        case r'service_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceId = valueDes;
          break;
        case r'intro_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.introCost = valueDes;
          break;
        case r'renewal_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.renewalCost = valueDes;
          break;
        case r'intro_frequency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.introFrequency = valueDes;
          break;
        case r'renewal_frequency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.renewalFrequency = valueDes;
          break;
        case r'allow_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.allowCoupon = valueDes;
          break;
        case r'service_module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceModule = valueDes;
          break;
        case r'created_at':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.createdAt = valueDes;
          break;
        case r'updated_at':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.updatedAt = valueDes;
          break;
        case r'deleted_at':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.deletedAt = valueDes;
          break;
        case r'currencySymbol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currencySymbol = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsitesOrderJsonServiceOffersItem deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsitesOrderJsonServiceOffersItemBuilder();
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

