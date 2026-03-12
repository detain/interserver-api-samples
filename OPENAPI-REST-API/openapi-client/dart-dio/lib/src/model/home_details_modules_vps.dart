//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_details_modules_vps.g.dart';

/// Dashboard module configuration for VPS services.
///
/// Properties:
/// * [icon] - The icon for VPS.
/// * [viewLink] - Link to view VPS.
/// * [heading] - Heading for VPS.
/// * [buyLink] - Link to order VPS.
/// * [listLink] - Link to view VPS list.
@BuiltValue()
abstract class HomeDetailsModulesVps implements Built<HomeDetailsModulesVps, HomeDetailsModulesVpsBuilder> {
  /// The icon for VPS.
  @BuiltValueField(wireName: r'icon')
  String? get icon;

  /// Link to view VPS.
  @BuiltValueField(wireName: r'view_link')
  String? get viewLink;

  /// Heading for VPS.
  @BuiltValueField(wireName: r'heading')
  String? get heading;

  /// Link to order VPS.
  @BuiltValueField(wireName: r'buy_link')
  String? get buyLink;

  /// Link to view VPS list.
  @BuiltValueField(wireName: r'list_link')
  String? get listLink;

  HomeDetailsModulesVps._();

  factory HomeDetailsModulesVps([void updates(HomeDetailsModulesVpsBuilder b)]) = _$HomeDetailsModulesVps;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeDetailsModulesVpsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeDetailsModulesVps> get serializer => _$HomeDetailsModulesVpsSerializer();
}

class _$HomeDetailsModulesVpsSerializer implements PrimitiveSerializer<HomeDetailsModulesVps> {
  @override
  final Iterable<Type> types = const [HomeDetailsModulesVps, _$HomeDetailsModulesVps];

  @override
  final String wireName = r'HomeDetailsModulesVps';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeDetailsModulesVps object, {
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
    HomeDetailsModulesVps object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeDetailsModulesVpsBuilder result,
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
  HomeDetailsModulesVps deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeDetailsModulesVpsBuilder();
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

