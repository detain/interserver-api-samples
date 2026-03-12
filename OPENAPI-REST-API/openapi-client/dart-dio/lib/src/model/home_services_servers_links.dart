//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_services_servers_links.g.dart';

/// Map of dedicated server service IDs to their hostnames for the account dashboard.
///
/// Properties:
/// * [n16058] - Link to a server.
@BuiltValue()
abstract class HomeServicesServersLinks implements Built<HomeServicesServersLinks, HomeServicesServersLinksBuilder> {
  /// Link to a server.
  @BuiltValueField(wireName: r'16058')
  String? get n16058;

  HomeServicesServersLinks._();

  factory HomeServicesServersLinks([void updates(HomeServicesServersLinksBuilder b)]) = _$HomeServicesServersLinks;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeServicesServersLinksBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeServicesServersLinks> get serializer => _$HomeServicesServersLinksSerializer();
}

class _$HomeServicesServersLinksSerializer implements PrimitiveSerializer<HomeServicesServersLinks> {
  @override
  final Iterable<Type> types = const [HomeServicesServersLinks, _$HomeServicesServersLinks];

  @override
  final String wireName = r'HomeServicesServersLinks';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeServicesServersLinks object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n16058 != null) {
      yield r'16058';
      yield serializers.serialize(
        object.n16058,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeServicesServersLinks object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeServicesServersLinksBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'16058':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n16058 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeServicesServersLinks deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeServicesServersLinksBuilder();
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

