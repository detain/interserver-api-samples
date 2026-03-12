//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_client_link.g.dart';

/// A navigation link for VPS-related actions in the client portal.
///
/// Properties:
/// * [label] - Display label for the link.
/// * [link] - URL or route for the action.
/// * [icon] - Icon class for the link.
/// * [iconText] - Icon text label.
/// * [helpText] - Help tooltip text for the link.
@BuiltValue()
abstract class VpsClientLink implements Built<VpsClientLink, VpsClientLinkBuilder> {
  /// Display label for the link.
  @BuiltValueField(wireName: r'label')
  String? get label;

  /// URL or route for the action.
  @BuiltValueField(wireName: r'link')
  String? get link;

  /// Icon class for the link.
  @BuiltValueField(wireName: r'icon')
  String? get icon;

  /// Icon text label.
  @BuiltValueField(wireName: r'icon_text')
  String? get iconText;

  /// Help tooltip text for the link.
  @BuiltValueField(wireName: r'help_text')
  String? get helpText;

  VpsClientLink._();

  factory VpsClientLink([void updates(VpsClientLinkBuilder b)]) = _$VpsClientLink;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsClientLinkBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsClientLink> get serializer => _$VpsClientLinkSerializer();
}

class _$VpsClientLinkSerializer implements PrimitiveSerializer<VpsClientLink> {
  @override
  final Iterable<Type> types = const [VpsClientLink, _$VpsClientLink];

  @override
  final String wireName = r'VpsClientLink';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsClientLink object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.label != null) {
      yield r'label';
      yield serializers.serialize(
        object.label,
        specifiedType: const FullType(String),
      );
    }
    if (object.link != null) {
      yield r'link';
      yield serializers.serialize(
        object.link,
        specifiedType: const FullType(String),
      );
    }
    if (object.icon != null) {
      yield r'icon';
      yield serializers.serialize(
        object.icon,
        specifiedType: const FullType(String),
      );
    }
    if (object.iconText != null) {
      yield r'icon_text';
      yield serializers.serialize(
        object.iconText,
        specifiedType: const FullType(String),
      );
    }
    if (object.helpText != null) {
      yield r'help_text';
      yield serializers.serialize(
        object.helpText,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsClientLink object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsClientLinkBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'label':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.label = valueDes;
          break;
        case r'link':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.link = valueDes;
          break;
        case r'icon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.icon = valueDes;
          break;
        case r'icon_text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.iconText = valueDes;
          break;
        case r'help_text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.helpText = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsClientLink deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsClientLinkBuilder();
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

