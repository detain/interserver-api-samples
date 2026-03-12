//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/home_services_domains_links.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_services_domains.g.dart';

/// HomeServicesDomains
///
/// Properties:
/// * [links] 
/// * [count] - Number of domains.
@BuiltValue()
abstract class HomeServicesDomains implements Built<HomeServicesDomains, HomeServicesDomainsBuilder> {
  @BuiltValueField(wireName: r'links')
  HomeServicesDomainsLinks? get links;

  /// Number of domains.
  @BuiltValueField(wireName: r'count')
  int? get count;

  HomeServicesDomains._();

  factory HomeServicesDomains([void updates(HomeServicesDomainsBuilder b)]) = _$HomeServicesDomains;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeServicesDomainsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeServicesDomains> get serializer => _$HomeServicesDomainsSerializer();
}

class _$HomeServicesDomainsSerializer implements PrimitiveSerializer<HomeServicesDomains> {
  @override
  final Iterable<Type> types = const [HomeServicesDomains, _$HomeServicesDomains];

  @override
  final String wireName = r'HomeServicesDomains';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeServicesDomains object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.links != null) {
      yield r'links';
      yield serializers.serialize(
        object.links,
        specifiedType: const FullType(HomeServicesDomainsLinks),
      );
    }
    if (object.count != null) {
      yield r'count';
      yield serializers.serialize(
        object.count,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeServicesDomains object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeServicesDomainsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeServicesDomainsLinks),
          ) as HomeServicesDomainsLinks;
          result.links.replace(valueDes);
          break;
        case r'count':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.count = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeServicesDomains deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeServicesDomainsBuilder();
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

