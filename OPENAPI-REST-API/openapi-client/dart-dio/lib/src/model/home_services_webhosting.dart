//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/home_services_webhosting_links.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_services_webhosting.g.dart';

/// HomeServicesWebhosting
///
/// Properties:
/// * [links] 
/// * [count] - Number of web hosting services.
@BuiltValue()
abstract class HomeServicesWebhosting implements Built<HomeServicesWebhosting, HomeServicesWebhostingBuilder> {
  @BuiltValueField(wireName: r'links')
  HomeServicesWebhostingLinks? get links;

  /// Number of web hosting services.
  @BuiltValueField(wireName: r'count')
  int? get count;

  HomeServicesWebhosting._();

  factory HomeServicesWebhosting([void updates(HomeServicesWebhostingBuilder b)]) = _$HomeServicesWebhosting;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeServicesWebhostingBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeServicesWebhosting> get serializer => _$HomeServicesWebhostingSerializer();
}

class _$HomeServicesWebhostingSerializer implements PrimitiveSerializer<HomeServicesWebhosting> {
  @override
  final Iterable<Type> types = const [HomeServicesWebhosting, _$HomeServicesWebhosting];

  @override
  final String wireName = r'HomeServicesWebhosting';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeServicesWebhosting object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.links != null) {
      yield r'links';
      yield serializers.serialize(
        object.links,
        specifiedType: const FullType(HomeServicesWebhostingLinks),
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
    HomeServicesWebhosting object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeServicesWebhostingBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeServicesWebhostingLinks),
          ) as HomeServicesWebhostingLinks;
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
  HomeServicesWebhosting deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeServicesWebhostingBuilder();
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

