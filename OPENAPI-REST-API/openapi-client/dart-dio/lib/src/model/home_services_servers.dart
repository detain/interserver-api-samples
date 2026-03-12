//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/home_services_servers_links.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_services_servers.g.dart';

/// HomeServicesServers
///
/// Properties:
/// * [links] 
/// * [count] - Number of servers.
@BuiltValue()
abstract class HomeServicesServers implements Built<HomeServicesServers, HomeServicesServersBuilder> {
  @BuiltValueField(wireName: r'links')
  HomeServicesServersLinks? get links;

  /// Number of servers.
  @BuiltValueField(wireName: r'count')
  int? get count;

  HomeServicesServers._();

  factory HomeServicesServers([void updates(HomeServicesServersBuilder b)]) = _$HomeServicesServers;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeServicesServersBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeServicesServers> get serializer => _$HomeServicesServersSerializer();
}

class _$HomeServicesServersSerializer implements PrimitiveSerializer<HomeServicesServers> {
  @override
  final Iterable<Type> types = const [HomeServicesServers, _$HomeServicesServers];

  @override
  final String wireName = r'HomeServicesServers';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeServicesServers object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.links != null) {
      yield r'links';
      yield serializers.serialize(
        object.links,
        specifiedType: const FullType(HomeServicesServersLinks),
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
    HomeServicesServers object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeServicesServersBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(HomeServicesServersLinks),
          ) as HomeServicesServersLinks;
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
  HomeServicesServers deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeServicesServersBuilder();
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

