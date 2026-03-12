//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_details_modules_quickservers.g.dart';

/// Dashboard module configuration for QuickServer services.
///
/// Properties:
/// * [icon] - The icon for quick servers.
/// * [viewLink] - Link to view quick servers.
/// * [heading] - Heading for quick servers.
/// * [buyLink] - Link to order quick server.
/// * [listLink] - Link to view quick servers list.
@BuiltValue()
abstract class HomeDetailsModulesQuickservers implements Built<HomeDetailsModulesQuickservers, HomeDetailsModulesQuickserversBuilder> {
  /// The icon for quick servers.
  @BuiltValueField(wireName: r'icon')
  String? get icon;

  /// Link to view quick servers.
  @BuiltValueField(wireName: r'view_link')
  String? get viewLink;

  /// Heading for quick servers.
  @BuiltValueField(wireName: r'heading')
  String? get heading;

  /// Link to order quick server.
  @BuiltValueField(wireName: r'buy_link')
  String? get buyLink;

  /// Link to view quick servers list.
  @BuiltValueField(wireName: r'list_link')
  String? get listLink;

  HomeDetailsModulesQuickservers._();

  factory HomeDetailsModulesQuickservers([void updates(HomeDetailsModulesQuickserversBuilder b)]) = _$HomeDetailsModulesQuickservers;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeDetailsModulesQuickserversBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeDetailsModulesQuickservers> get serializer => _$HomeDetailsModulesQuickserversSerializer();
}

class _$HomeDetailsModulesQuickserversSerializer implements PrimitiveSerializer<HomeDetailsModulesQuickservers> {
  @override
  final Iterable<Type> types = const [HomeDetailsModulesQuickservers, _$HomeDetailsModulesQuickservers];

  @override
  final String wireName = r'HomeDetailsModulesQuickservers';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeDetailsModulesQuickservers object, {
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
    HomeDetailsModulesQuickservers object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeDetailsModulesQuickserversBuilder result,
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
  HomeDetailsModulesQuickservers deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeDetailsModulesQuickserversBuilder();
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

