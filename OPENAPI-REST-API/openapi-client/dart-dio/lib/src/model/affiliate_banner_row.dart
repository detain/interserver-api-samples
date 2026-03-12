//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'affiliate_banner_row.g.dart';

/// An affiliate banner image details.
///
/// Properties:
/// * [image] 
/// * [width] 
/// * [height] 
@BuiltValue()
abstract class AffiliateBannerRow implements Built<AffiliateBannerRow, AffiliateBannerRowBuilder> {
  @BuiltValueField(wireName: r'image')
  String? get image;

  @BuiltValueField(wireName: r'width')
  String? get width;

  @BuiltValueField(wireName: r'height')
  String? get height;

  AffiliateBannerRow._();

  factory AffiliateBannerRow([void updates(AffiliateBannerRowBuilder b)]) = _$AffiliateBannerRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AffiliateBannerRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AffiliateBannerRow> get serializer => _$AffiliateBannerRowSerializer();
}

class _$AffiliateBannerRowSerializer implements PrimitiveSerializer<AffiliateBannerRow> {
  @override
  final Iterable<Type> types = const [AffiliateBannerRow, _$AffiliateBannerRow];

  @override
  final String wireName = r'AffiliateBannerRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AffiliateBannerRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.image != null) {
      yield r'image';
      yield serializers.serialize(
        object.image,
        specifiedType: const FullType(String),
      );
    }
    if (object.width != null) {
      yield r'width';
      yield serializers.serialize(
        object.width,
        specifiedType: const FullType(String),
      );
    }
    if (object.height != null) {
      yield r'height';
      yield serializers.serialize(
        object.height,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AffiliateBannerRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AffiliateBannerRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'image':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.image = valueDes;
          break;
        case r'width':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.width = valueDes;
          break;
        case r'height':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.height = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AffiliateBannerRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AffiliateBannerRowBuilder();
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

