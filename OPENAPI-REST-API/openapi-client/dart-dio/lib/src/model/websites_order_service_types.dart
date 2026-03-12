//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'websites_order_service_types.g.dart';

/// The service types data.
///
/// Properties:
/// * [n11447] 
@BuiltValue()
abstract class WebsitesOrderServiceTypes implements Built<WebsitesOrderServiceTypes, WebsitesOrderServiceTypesBuilder> {
  @BuiltValueField(wireName: r'11447')
  WebsitesOrderServiceTypes get n11447;

  WebsitesOrderServiceTypes._();

  factory WebsitesOrderServiceTypes([void updates(WebsitesOrderServiceTypesBuilder b)]) = _$WebsitesOrderServiceTypes;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsitesOrderServiceTypesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsitesOrderServiceTypes> get serializer => _$WebsitesOrderServiceTypesSerializer();
}

class _$WebsitesOrderServiceTypesSerializer implements PrimitiveSerializer<WebsitesOrderServiceTypes> {
  @override
  final Iterable<Type> types = const [WebsitesOrderServiceTypes, _$WebsitesOrderServiceTypes];

  @override
  final String wireName = r'WebsitesOrderServiceTypes';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsitesOrderServiceTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'11447';
    yield serializers.serialize(
      object.n11447,
      specifiedType: const FullType(WebsitesOrderServiceTypes),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsitesOrderServiceTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsitesOrderServiceTypesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'11447':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(WebsitesOrderServiceTypes),
          ) as WebsitesOrderServiceTypes;
          result.n11447.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsitesOrderServiceTypes deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsitesOrderServiceTypesBuilder();
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

