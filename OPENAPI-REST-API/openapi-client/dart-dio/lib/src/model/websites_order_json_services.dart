//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'websites_order_json_services.g.dart';

/// Schema for the jsonServices field in WebsitesOrder
///
/// Properties:
/// * [n11447] - JSON services description
@BuiltValue()
abstract class WebsitesOrderJsonServices implements Built<WebsitesOrderJsonServices, WebsitesOrderJsonServicesBuilder> {
  /// JSON services description
  @BuiltValueField(wireName: r'11447')
  String get n11447;

  WebsitesOrderJsonServices._();

  factory WebsitesOrderJsonServices([void updates(WebsitesOrderJsonServicesBuilder b)]) = _$WebsitesOrderJsonServices;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsitesOrderJsonServicesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsitesOrderJsonServices> get serializer => _$WebsitesOrderJsonServicesSerializer();
}

class _$WebsitesOrderJsonServicesSerializer implements PrimitiveSerializer<WebsitesOrderJsonServices> {
  @override
  final Iterable<Type> types = const [WebsitesOrderJsonServices, _$WebsitesOrderJsonServices];

  @override
  final String wireName = r'WebsitesOrderJsonServices';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsitesOrderJsonServices object, {
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
    WebsitesOrderJsonServices object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsitesOrderJsonServicesBuilder result,
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
  WebsitesOrderJsonServices deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsitesOrderJsonServicesBuilder();
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

