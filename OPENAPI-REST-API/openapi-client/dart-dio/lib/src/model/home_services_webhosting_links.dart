//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_services_webhosting_links.g.dart';

/// Map of webhosting service IDs to their hostnames for the account dashboard.
///
/// Properties:
/// * [n376359] - Link to a website.
/// * [n376473] - Link to a website.
/// * [n386218] - Link to a website.
@BuiltValue()
abstract class HomeServicesWebhostingLinks implements Built<HomeServicesWebhostingLinks, HomeServicesWebhostingLinksBuilder> {
  /// Link to a website.
  @BuiltValueField(wireName: r'376359')
  String? get n376359;

  /// Link to a website.
  @BuiltValueField(wireName: r'376473')
  String? get n376473;

  /// Link to a website.
  @BuiltValueField(wireName: r'386218')
  String? get n386218;

  HomeServicesWebhostingLinks._();

  factory HomeServicesWebhostingLinks([void updates(HomeServicesWebhostingLinksBuilder b)]) = _$HomeServicesWebhostingLinks;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeServicesWebhostingLinksBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeServicesWebhostingLinks> get serializer => _$HomeServicesWebhostingLinksSerializer();
}

class _$HomeServicesWebhostingLinksSerializer implements PrimitiveSerializer<HomeServicesWebhostingLinks> {
  @override
  final Iterable<Type> types = const [HomeServicesWebhostingLinks, _$HomeServicesWebhostingLinks];

  @override
  final String wireName = r'HomeServicesWebhostingLinks';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeServicesWebhostingLinks object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n376359 != null) {
      yield r'376359';
      yield serializers.serialize(
        object.n376359,
        specifiedType: const FullType(String),
      );
    }
    if (object.n376473 != null) {
      yield r'376473';
      yield serializers.serialize(
        object.n376473,
        specifiedType: const FullType(String),
      );
    }
    if (object.n386218 != null) {
      yield r'386218';
      yield serializers.serialize(
        object.n386218,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeServicesWebhostingLinks object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeServicesWebhostingLinksBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'376359':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n376359 = valueDes;
          break;
        case r'376473':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n376473 = valueDes;
          break;
        case r'386218':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n386218 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeServicesWebhostingLinks deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeServicesWebhostingLinksBuilder();
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

