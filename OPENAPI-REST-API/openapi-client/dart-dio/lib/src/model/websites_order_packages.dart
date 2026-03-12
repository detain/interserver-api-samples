//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'websites_order_packages.g.dart';

/// Schema for the packages field in WebsitesOrder
///
/// Properties:
/// * [n11447] - Package description
@BuiltValue()
abstract class WebsitesOrderPackages implements Built<WebsitesOrderPackages, WebsitesOrderPackagesBuilder> {
  /// Package description
  @BuiltValueField(wireName: r'11447')
  String get n11447;

  WebsitesOrderPackages._();

  factory WebsitesOrderPackages([void updates(WebsitesOrderPackagesBuilder b)]) = _$WebsitesOrderPackages;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsitesOrderPackagesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsitesOrderPackages> get serializer => _$WebsitesOrderPackagesSerializer();
}

class _$WebsitesOrderPackagesSerializer implements PrimitiveSerializer<WebsitesOrderPackages> {
  @override
  final Iterable<Type> types = const [WebsitesOrderPackages, _$WebsitesOrderPackages];

  @override
  final String wireName = r'WebsitesOrderPackages';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsitesOrderPackages object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'11447';
    yield serializers.serialize(
      object.n11447,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsitesOrderPackages object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsitesOrderPackagesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'11447':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n11447 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsitesOrderPackages deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsitesOrderPackagesBuilder();
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

