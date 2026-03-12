//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_client_link.g.dart';

/// A navigation link for mail service actions in the client portal.
///
/// Properties:
/// * [label] - The label of the client link.
/// * [link] - The link URL of the client link.
/// * [icon] - The icon class of the client link.
/// * [iconText] - The text for the icon of the client link.
/// * [helpText] - Help text for the client link.
/// * [otherAttr] - Additional attributes for the client link.
@BuiltValue()
abstract class MailClientLink implements Built<MailClientLink, MailClientLinkBuilder> {
  /// The label of the client link.
  @BuiltValueField(wireName: r'label')
  String? get label;

  /// The link URL of the client link.
  @BuiltValueField(wireName: r'link')
  String? get link;

  /// The icon class of the client link.
  @BuiltValueField(wireName: r'icon')
  String? get icon;

  /// The text for the icon of the client link.
  @BuiltValueField(wireName: r'icon_text')
  String? get iconText;

  /// Help text for the client link.
  @BuiltValueField(wireName: r'help_text')
  String? get helpText;

  /// Additional attributes for the client link.
  @BuiltValueField(wireName: r'other_attr')
  String? get otherAttr;

  MailClientLink._();

  factory MailClientLink([void updates(MailClientLinkBuilder b)]) = _$MailClientLink;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailClientLinkBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailClientLink> get serializer => _$MailClientLinkSerializer();
}

class _$MailClientLinkSerializer implements PrimitiveSerializer<MailClientLink> {
  @override
  final Iterable<Type> types = const [MailClientLink, _$MailClientLink];

  @override
  final String wireName = r'MailClientLink';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailClientLink object, {
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
    if (object.otherAttr != null) {
      yield r'other_attr';
      yield serializers.serialize(
        object.otherAttr,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailClientLink object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailClientLinkBuilder result,
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
        case r'other_attr':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.otherAttr = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailClientLink deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailClientLinkBuilder();
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

