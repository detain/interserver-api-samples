//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/websites_order_packages_info.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'websites_order_packges.g.dart';

/// The packages data.
///
/// Properties:
/// * [n11440] 
@BuiltValue()
abstract class WebsitesOrderPackges implements Built<WebsitesOrderPackges, WebsitesOrderPackgesBuilder> {
  @BuiltValueField(wireName: r'11440')
  WebsitesOrderPackagesInfo get n11440;

  WebsitesOrderPackges._();

  factory WebsitesOrderPackges([void updates(WebsitesOrderPackgesBuilder b)]) = _$WebsitesOrderPackges;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsitesOrderPackgesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsitesOrderPackges> get serializer => _$WebsitesOrderPackgesSerializer();
}

class _$WebsitesOrderPackgesSerializer implements PrimitiveSerializer<WebsitesOrderPackges> {
  @override
  final Iterable<Type> types = const [WebsitesOrderPackges, _$WebsitesOrderPackges];

  @override
  final String wireName = r'WebsitesOrderPackges';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsitesOrderPackges object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'11440';
    yield serializers.serialize(
      object.n11440,
      specifiedType: const FullType(WebsitesOrderPackagesInfo),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsitesOrderPackges object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsitesOrderPackgesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'11440':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsitesOrderPackagesInfo),
          ) as WebsitesOrderPackagesInfo;
          result.n11440.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsitesOrderPackges deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsitesOrderPackgesBuilder();
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

