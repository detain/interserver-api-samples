//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_scrub_ip_details200_response_client_links_inner.g.dart';

/// GetScrubIpDetails200ResponseClientLinksInner
///
/// Properties:
/// * [label] 
/// * [link] 
/// * [icon] 
/// * [iconText] 
/// * [helpText] 
/// * [otherAttr] 
@BuiltValue()
abstract class GetScrubIpDetails200ResponseClientLinksInner implements Built<GetScrubIpDetails200ResponseClientLinksInner, GetScrubIpDetails200ResponseClientLinksInnerBuilder> {
  @BuiltValueField(wireName: r'label')
  String? get label;

  @BuiltValueField(wireName: r'link')
  String? get link;

  @BuiltValueField(wireName: r'icon')
  String? get icon;

  @BuiltValueField(wireName: r'icon_text')
  String? get iconText;

  @BuiltValueField(wireName: r'help_text')
  String? get helpText;

  @BuiltValueField(wireName: r'other_attr')
  String? get otherAttr;

  GetScrubIpDetails200ResponseClientLinksInner._();

  factory GetScrubIpDetails200ResponseClientLinksInner([void updates(GetScrubIpDetails200ResponseClientLinksInnerBuilder b)]) = _$GetScrubIpDetails200ResponseClientLinksInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetScrubIpDetails200ResponseClientLinksInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetScrubIpDetails200ResponseClientLinksInner> get serializer => _$GetScrubIpDetails200ResponseClientLinksInnerSerializer();
}

class _$GetScrubIpDetails200ResponseClientLinksInnerSerializer implements PrimitiveSerializer<GetScrubIpDetails200ResponseClientLinksInner> {
  @override
  final Iterable<Type> types = const [GetScrubIpDetails200ResponseClientLinksInner, _$GetScrubIpDetails200ResponseClientLinksInner];

  @override
  final String wireName = r'GetScrubIpDetails200ResponseClientLinksInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetScrubIpDetails200ResponseClientLinksInner object, {
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
    GetScrubIpDetails200ResponseClientLinksInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetScrubIpDetails200ResponseClientLinksInnerBuilder result,
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
  GetScrubIpDetails200ResponseClientLinksInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetScrubIpDetails200ResponseClientLinksInnerBuilder();
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

