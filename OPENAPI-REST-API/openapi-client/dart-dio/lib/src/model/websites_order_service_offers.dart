//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/websites_order_service_offer.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'websites_order_service_offers.g.dart';

/// The service offers data.
///
/// Properties:
/// * [n1026] 
@BuiltValue()
abstract class WebsitesOrderServiceOffers implements Built<WebsitesOrderServiceOffers, WebsitesOrderServiceOffersBuilder> {
  @BuiltValueField(wireName: r'1026')
  BuiltList<WebsitesOrderServiceOffer> get n1026;

  WebsitesOrderServiceOffers._();

  factory WebsitesOrderServiceOffers([void updates(WebsitesOrderServiceOffersBuilder b)]) = _$WebsitesOrderServiceOffers;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsitesOrderServiceOffersBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsitesOrderServiceOffers> get serializer => _$WebsitesOrderServiceOffersSerializer();
}

class _$WebsitesOrderServiceOffersSerializer implements PrimitiveSerializer<WebsitesOrderServiceOffers> {
  @override
  final Iterable<Type> types = const [WebsitesOrderServiceOffers, _$WebsitesOrderServiceOffers];

  @override
  final String wireName = r'WebsitesOrderServiceOffers';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsitesOrderServiceOffers object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'1026';
    yield serializers.serialize(
      object.n1026,
      specifiedType: const FullType(BuiltList, [FullType(WebsitesOrderServiceOffer)]),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsitesOrderServiceOffers object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsitesOrderServiceOffersBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'1026':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(WebsitesOrderServiceOffer)]),
          ) as BuiltList<WebsitesOrderServiceOffer>;
          result.n1026.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsitesOrderServiceOffers deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsitesOrderServiceOffersBuilder();
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

