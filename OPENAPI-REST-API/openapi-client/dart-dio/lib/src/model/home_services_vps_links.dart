//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_services_vps_links.g.dart';

/// Map of VPS service IDs to their hostnames for the account dashboard.
///
/// Properties:
/// * [n465503] - Link to a VPS.
/// * [n2500081] - Link to a VPS.
/// * [n2578866] - Link to a VPS.
@BuiltValue()
abstract class HomeServicesVpsLinks implements Built<HomeServicesVpsLinks, HomeServicesVpsLinksBuilder> {
  /// Link to a VPS.
  @BuiltValueField(wireName: r'465503')
  String? get n465503;

  /// Link to a VPS.
  @BuiltValueField(wireName: r'2500081')
  String? get n2500081;

  /// Link to a VPS.
  @BuiltValueField(wireName: r'2578866')
  String? get n2578866;

  HomeServicesVpsLinks._();

  factory HomeServicesVpsLinks([void updates(HomeServicesVpsLinksBuilder b)]) = _$HomeServicesVpsLinks;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeServicesVpsLinksBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeServicesVpsLinks> get serializer => _$HomeServicesVpsLinksSerializer();
}

class _$HomeServicesVpsLinksSerializer implements PrimitiveSerializer<HomeServicesVpsLinks> {
  @override
  final Iterable<Type> types = const [HomeServicesVpsLinks, _$HomeServicesVpsLinks];

  @override
  final String wireName = r'HomeServicesVpsLinks';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeServicesVpsLinks object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n465503 != null) {
      yield r'465503';
      yield serializers.serialize(
        object.n465503,
        specifiedType: const FullType(String),
      );
    }
    if (object.n2500081 != null) {
      yield r'2500081';
      yield serializers.serialize(
        object.n2500081,
        specifiedType: const FullType(String),
      );
    }
    if (object.n2578866 != null) {
      yield r'2578866';
      yield serializers.serialize(
        object.n2578866,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeServicesVpsLinks object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeServicesVpsLinksBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'465503':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n465503 = valueDes;
          break;
        case r'2500081':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n2500081 = valueDes;
          break;
        case r'2578866':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n2578866 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeServicesVpsLinks deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeServicesVpsLinksBuilder();
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

