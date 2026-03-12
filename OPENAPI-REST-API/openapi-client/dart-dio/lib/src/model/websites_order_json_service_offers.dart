//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/websites_order_json_service_offers_item.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'websites_order_json_service_offers.g.dart';

/// Schema for the jsonServiceOffers field in WebsitesOrder
///
/// Properties:
/// * [n1026] - Array of service offers
@BuiltValue()
abstract class WebsitesOrderJsonServiceOffers implements Built<WebsitesOrderJsonServiceOffers, WebsitesOrderJsonServiceOffersBuilder> {
  /// Array of service offers
  @BuiltValueField(wireName: r'1026')
  BuiltList<WebsitesOrderJsonServiceOffersItem> get n1026;

  WebsitesOrderJsonServiceOffers._();

  factory WebsitesOrderJsonServiceOffers([void updates(WebsitesOrderJsonServiceOffersBuilder b)]) = _$WebsitesOrderJsonServiceOffers;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsitesOrderJsonServiceOffersBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsitesOrderJsonServiceOffers> get serializer => _$WebsitesOrderJsonServiceOffersSerializer();
}

class _$WebsitesOrderJsonServiceOffersSerializer implements PrimitiveSerializer<WebsitesOrderJsonServiceOffers> {
  @override
  final Iterable<Type> types = const [WebsitesOrderJsonServiceOffers, _$WebsitesOrderJsonServiceOffers];

  @override
  final String wireName = r'WebsitesOrderJsonServiceOffers';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsitesOrderJsonServiceOffers object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'1026';
    yield serializers.serialize(
      object.n1026,
      specifiedType: const FullType(BuiltList, [FullType(WebsitesOrderJsonServiceOffersItem)]),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsitesOrderJsonServiceOffers object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsitesOrderJsonServiceOffersBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'1026':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(WebsitesOrderJsonServiceOffersItem)]),
          ) as BuiltList<WebsitesOrderJsonServiceOffersItem>;
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
  WebsitesOrderJsonServiceOffers deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsitesOrderJsonServiceOffersBuilder();
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

