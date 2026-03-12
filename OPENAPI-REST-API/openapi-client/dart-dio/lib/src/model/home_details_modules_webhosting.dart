//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_details_modules_webhosting.g.dart';

/// Dashboard module configuration for webhosting services.
///
/// Properties:
/// * [icon] - The icon for web hosting.
/// * [viewLink] - Link to view website.
/// * [heading] - Heading for web hosting.
/// * [buyLink] - Link to order website.
/// * [listLink] - Link to view websites list.
@BuiltValue()
abstract class HomeDetailsModulesWebhosting implements Built<HomeDetailsModulesWebhosting, HomeDetailsModulesWebhostingBuilder> {
  /// The icon for web hosting.
  @BuiltValueField(wireName: r'icon')
  String? get icon;

  /// Link to view website.
  @BuiltValueField(wireName: r'view_link')
  String? get viewLink;

  /// Heading for web hosting.
  @BuiltValueField(wireName: r'heading')
  String? get heading;

  /// Link to order website.
  @BuiltValueField(wireName: r'buy_link')
  String? get buyLink;

  /// Link to view websites list.
  @BuiltValueField(wireName: r'list_link')
  String? get listLink;

  HomeDetailsModulesWebhosting._();

  factory HomeDetailsModulesWebhosting([void updates(HomeDetailsModulesWebhostingBuilder b)]) = _$HomeDetailsModulesWebhosting;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeDetailsModulesWebhostingBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeDetailsModulesWebhosting> get serializer => _$HomeDetailsModulesWebhostingSerializer();
}

class _$HomeDetailsModulesWebhostingSerializer implements PrimitiveSerializer<HomeDetailsModulesWebhosting> {
  @override
  final Iterable<Type> types = const [HomeDetailsModulesWebhosting, _$HomeDetailsModulesWebhosting];

  @override
  final String wireName = r'HomeDetailsModulesWebhosting';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeDetailsModulesWebhosting object, {
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
    HomeDetailsModulesWebhosting object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeDetailsModulesWebhostingBuilder result,
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
  HomeDetailsModulesWebhosting deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeDetailsModulesWebhostingBuilder();
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

