//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'websites_order_service_offer.g.dart';

/// WebsitesOrderServiceOffer
///
/// Properties:
/// * [serviceOfferId] - The ID of the service offer.
/// * [serviceId] - The ID of the associated service.
/// * [introCost] - The introductory cost of the service offer.
/// * [renewalCost] - The renewal cost of the service offer.
/// * [introFrequency] - The introductory frequency of the service offer.
/// * [renewalFrequency] - The renewal frequency of the service offer.
/// * [allowCoupon] - Indicates if coupons are allowed (1 for yes, 0 for no).
/// * [serviceModule] - The module of the service offer.
/// * [createdAt] - The creation timestamp of the service offer.
/// * [updatedAt] - The update timestamp of the service offer.
/// * [deletedAt] - The deletion timestamp of the service offer.
@BuiltValue()
abstract class WebsitesOrderServiceOffer implements Built<WebsitesOrderServiceOffer, WebsitesOrderServiceOfferBuilder> {
  /// The ID of the service offer.
  @BuiltValueField(wireName: r'service_offer_id')
  String get serviceOfferId;

  /// The ID of the associated service.
  @BuiltValueField(wireName: r'service_id')
  String get serviceId;

  /// The introductory cost of the service offer.
  @BuiltValueField(wireName: r'intro_cost')
  String get introCost;

  /// The renewal cost of the service offer.
  @BuiltValueField(wireName: r'renewal_cost')
  String get renewalCost;

  /// The introductory frequency of the service offer.
  @BuiltValueField(wireName: r'intro_frequency')
  String get introFrequency;

  /// The renewal frequency of the service offer.
  @BuiltValueField(wireName: r'renewal_frequency')
  String get renewalFrequency;

  /// Indicates if coupons are allowed (1 for yes, 0 for no).
  @BuiltValueField(wireName: r'allow_coupon')
  String get allowCoupon;

  /// The module of the service offer.
  @BuiltValueField(wireName: r'service_module')
  String get serviceModule;

  /// The creation timestamp of the service offer.
  @BuiltValueField(wireName: r'created_at')
  String get createdAt;

  /// The update timestamp of the service offer.
  @BuiltValueField(wireName: r'updated_at')
  String? get updatedAt;

  /// The deletion timestamp of the service offer.
  @BuiltValueField(wireName: r'deleted_at')
  String? get deletedAt;

  WebsitesOrderServiceOffer._();

  factory WebsitesOrderServiceOffer([void updates(WebsitesOrderServiceOfferBuilder b)]) = _$WebsitesOrderServiceOffer;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsitesOrderServiceOfferBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsitesOrderServiceOffer> get serializer => _$WebsitesOrderServiceOfferSerializer();
}

class _$WebsitesOrderServiceOfferSerializer implements PrimitiveSerializer<WebsitesOrderServiceOffer> {
  @override
  final Iterable<Type> types = const [WebsitesOrderServiceOffer, _$WebsitesOrderServiceOffer];

  @override
  final String wireName = r'WebsitesOrderServiceOffer';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsitesOrderServiceOffer object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'service_offer_id';
    yield serializers.serialize(
      object.serviceOfferId,
      specifiedType: const FullType(String),
    );
    yield r'service_id';
    yield serializers.serialize(
      object.serviceId,
      specifiedType: const FullType(String),
    );
    yield r'intro_cost';
    yield serializers.serialize(
      object.introCost,
      specifiedType: const FullType(String),
    );
    yield r'renewal_cost';
    yield serializers.serialize(
      object.renewalCost,
      specifiedType: const FullType(String),
    );
    yield r'intro_frequency';
    yield serializers.serialize(
      object.introFrequency,
      specifiedType: const FullType(String),
    );
    yield r'renewal_frequency';
    yield serializers.serialize(
      object.renewalFrequency,
      specifiedType: const FullType(String),
    );
    yield r'allow_coupon';
    yield serializers.serialize(
      object.allowCoupon,
      specifiedType: const FullType(String),
    );
    yield r'service_module';
    yield serializers.serialize(
      object.serviceModule,
      specifiedType: const FullType(String),
    );
    yield r'created_at';
    yield serializers.serialize(
      object.createdAt,
      specifiedType: const FullType(String),
    );
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
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsitesOrderServiceOffer object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsitesOrderServiceOfferBuilder result,
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
            specifiedType: const FullType(String),
          ) as String;
          result.introCost = valueDes;
          break;
        case r'renewal_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
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
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsitesOrderServiceOffer deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsitesOrderServiceOfferBuilder();
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

