//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_client_link.g.dart';

/// A navigation link for QuickServer-related actions in the client portal.
///
/// Properties:
/// * [label] - Link label
/// * [link] - Link
/// * [icon] - Icon class
/// * [iconText] - Icon text
/// * [helpText] - Help text
/// * [otherAttr] - Other attribute
@BuiltValue()
abstract class QuickserverClientLink implements Built<QuickserverClientLink, QuickserverClientLinkBuilder> {
  /// Link label
  @BuiltValueField(wireName: r'label')
  String? get label;

  /// Link
  @BuiltValueField(wireName: r'link')
  String? get link;

  /// Icon class
  @BuiltValueField(wireName: r'icon')
  String? get icon;

  /// Icon text
  @BuiltValueField(wireName: r'icon_text')
  String? get iconText;

  /// Help text
  @BuiltValueField(wireName: r'help_text')
  String? get helpText;

  /// Other attribute
  @BuiltValueField(wireName: r'other_attr')
  String? get otherAttr;

  QuickserverClientLink._();

  factory QuickserverClientLink([void updates(QuickserverClientLinkBuilder b)]) = _$QuickserverClientLink;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverClientLinkBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverClientLink> get serializer => _$QuickserverClientLinkSerializer();
}

class _$QuickserverClientLinkSerializer implements PrimitiveSerializer<QuickserverClientLink> {
  @override
  final Iterable<Type> types = const [QuickserverClientLink, _$QuickserverClientLink];

  @override
  final String wireName = r'QuickserverClientLink';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverClientLink object, {
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
    QuickserverClientLink object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverClientLinkBuilder result,
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
  QuickserverClientLink deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverClientLinkBuilder();
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

