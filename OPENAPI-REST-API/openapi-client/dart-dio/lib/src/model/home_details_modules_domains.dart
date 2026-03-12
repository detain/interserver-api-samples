//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_details_modules_domains.g.dart';

/// Dashboard module configuration for domain registration services.
///
/// Properties:
/// * [icon] - The icon for domains.
/// * [viewLink] - Link to view domain.
/// * [heading] - Heading for domains.
/// * [buyLink] - Link to order domain.
/// * [listLink] - Link to view domains list.
@BuiltValue()
abstract class HomeDetailsModulesDomains implements Built<HomeDetailsModulesDomains, HomeDetailsModulesDomainsBuilder> {
  /// The icon for domains.
  @BuiltValueField(wireName: r'icon')
  String? get icon;

  /// Link to view domain.
  @BuiltValueField(wireName: r'view_link')
  String? get viewLink;

  /// Heading for domains.
  @BuiltValueField(wireName: r'heading')
  String? get heading;

  /// Link to order domain.
  @BuiltValueField(wireName: r'buy_link')
  String? get buyLink;

  /// Link to view domains list.
  @BuiltValueField(wireName: r'list_link')
  String? get listLink;

  HomeDetailsModulesDomains._();

  factory HomeDetailsModulesDomains([void updates(HomeDetailsModulesDomainsBuilder b)]) = _$HomeDetailsModulesDomains;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeDetailsModulesDomainsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeDetailsModulesDomains> get serializer => _$HomeDetailsModulesDomainsSerializer();
}

class _$HomeDetailsModulesDomainsSerializer implements PrimitiveSerializer<HomeDetailsModulesDomains> {
  @override
  final Iterable<Type> types = const [HomeDetailsModulesDomains, _$HomeDetailsModulesDomains];

  @override
  final String wireName = r'HomeDetailsModulesDomains';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeDetailsModulesDomains object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.icon != null) {
      yield r'icon';
      yield serializers.serialize(
        object.icon,
        specifiedType: const FullType(String),
      );
    }
    if (object.viewLink != null) {
      yield r'view_link';
      yield serializers.serialize(
        object.viewLink,
        specifiedType: const FullType(String),
      );
    }
    if (object.heading != null) {
      yield r'heading';
      yield serializers.serialize(
        object.heading,
        specifiedType: const FullType(String),
      );
    }
    if (object.buyLink != null) {
      yield r'buy_link';
      yield serializers.serialize(
        object.buyLink,
        specifiedType: const FullType(String),
      );
    }
    if (object.listLink != null) {
      yield r'list_link';
      yield serializers.serialize(
        object.listLink,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeDetailsModulesDomains object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeDetailsModulesDomainsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'icon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.icon = valueDes;
          break;
        case r'view_link':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.viewLink = valueDes;
          break;
        case r'heading':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.heading = valueDes;
          break;
        case r'buy_link':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.buyLink = valueDes;
          break;
        case r'list_link':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.listLink = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeDetailsModulesDomains deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeDetailsModulesDomainsBuilder();
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

