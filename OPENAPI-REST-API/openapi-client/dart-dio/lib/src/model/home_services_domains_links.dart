//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_services_domains_links.g.dart';

/// Map of domain service IDs to their hostnames for the account dashboard.
///
/// Properties:
/// * [n376114] - Link to a domain.
/// * [n376503] - Link to a domain.
/// * [n592337] - Link to a domain.
@BuiltValue()
abstract class HomeServicesDomainsLinks implements Built<HomeServicesDomainsLinks, HomeServicesDomainsLinksBuilder> {
  /// Link to a domain.
  @BuiltValueField(wireName: r'376114')
  String? get n376114;

  /// Link to a domain.
  @BuiltValueField(wireName: r'376503')
  String? get n376503;

  /// Link to a domain.
  @BuiltValueField(wireName: r'592337')
  String? get n592337;

  HomeServicesDomainsLinks._();

  factory HomeServicesDomainsLinks([void updates(HomeServicesDomainsLinksBuilder b)]) = _$HomeServicesDomainsLinks;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeServicesDomainsLinksBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeServicesDomainsLinks> get serializer => _$HomeServicesDomainsLinksSerializer();
}

class _$HomeServicesDomainsLinksSerializer implements PrimitiveSerializer<HomeServicesDomainsLinks> {
  @override
  final Iterable<Type> types = const [HomeServicesDomainsLinks, _$HomeServicesDomainsLinks];

  @override
  final String wireName = r'HomeServicesDomainsLinks';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeServicesDomainsLinks object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n376114 != null) {
      yield r'376114';
      yield serializers.serialize(
        object.n376114,
        specifiedType: const FullType(String),
      );
    }
    if (object.n376503 != null) {
      yield r'376503';
      yield serializers.serialize(
        object.n376503,
        specifiedType: const FullType(String),
      );
    }
    if (object.n592337 != null) {
      yield r'592337';
      yield serializers.serialize(
        object.n592337,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeServicesDomainsLinks object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeServicesDomainsLinksBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'376114':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n376114 = valueDes;
          break;
        case r'376503':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n376503 = valueDes;
          break;
        case r'592337':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n592337 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeServicesDomainsLinks deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeServicesDomainsLinksBuilder();
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

