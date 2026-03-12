//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'license_client_link.g.dart';

/// LicenseClientLink
///
/// Properties:
/// * [label] - Link label
/// * [link] - Link URL
/// * [icon] - Link icon
/// * [helpText] - Help text
/// * [iconText] - Icon text
/// * [otherAttr] - Other attributes
@BuiltValue()
abstract class LicenseClientLink implements Built<LicenseClientLink, LicenseClientLinkBuilder> {
  /// Link label
  @BuiltValueField(wireName: r'label')
  String get label;

  /// Link URL
  @BuiltValueField(wireName: r'link')
  String get link;

  /// Link icon
  @BuiltValueField(wireName: r'icon')
  String get icon;

  /// Help text
  @BuiltValueField(wireName: r'help_text')
  String get helpText;

  /// Icon text
  @BuiltValueField(wireName: r'icon_text')
  String? get iconText;

  /// Other attributes
  @BuiltValueField(wireName: r'other_attr')
  String? get otherAttr;

  LicenseClientLink._();

  factory LicenseClientLink([void updates(LicenseClientLinkBuilder b)]) = _$LicenseClientLink;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicenseClientLinkBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicenseClientLink> get serializer => _$LicenseClientLinkSerializer();
}

class _$LicenseClientLinkSerializer implements PrimitiveSerializer<LicenseClientLink> {
  @override
  final Iterable<Type> types = const [LicenseClientLink, _$LicenseClientLink];

  @override
  final String wireName = r'LicenseClientLink';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicenseClientLink object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'label';
    yield serializers.serialize(
      object.label,
      specifiedType: const FullType(String),
    );
    yield r'link';
    yield serializers.serialize(
      object.link,
      specifiedType: const FullType(String),
    );
    yield r'icon';
    yield serializers.serialize(
      object.icon,
      specifiedType: const FullType(String),
    );
    yield r'help_text';
    yield serializers.serialize(
      object.helpText,
      specifiedType: const FullType(String),
    );
    if (object.iconText != null) {
      yield r'icon_text';
      yield serializers.serialize(
        object.iconText,
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
    LicenseClientLink object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicenseClientLinkBuilder result,
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
        case r'help_text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.helpText = valueDes;
          break;
        case r'icon_text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.iconText = valueDes;
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
  LicenseClientLink deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicenseClientLinkBuilder();
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

