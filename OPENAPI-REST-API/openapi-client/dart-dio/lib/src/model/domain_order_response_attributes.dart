//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_order_response_attributes.g.dart';

/// DomainOrderResponseAttributes
///
/// Properties:
/// * [id] - Registrar order ID.
/// * [adminEmail] - Administrative contact email provided for the order.
@BuiltValue()
abstract class DomainOrderResponseAttributes implements Built<DomainOrderResponseAttributes, DomainOrderResponseAttributesBuilder> {
  /// Registrar order ID.
  @BuiltValueField(wireName: r'id')
  String? get id;

  /// Administrative contact email provided for the order.
  @BuiltValueField(wireName: r'admin_email')
  String? get adminEmail;

  DomainOrderResponseAttributes._();

  factory DomainOrderResponseAttributes([void updates(DomainOrderResponseAttributesBuilder b)]) = _$DomainOrderResponseAttributes;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainOrderResponseAttributesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainOrderResponseAttributes> get serializer => _$DomainOrderResponseAttributesSerializer();
}

class _$DomainOrderResponseAttributesSerializer implements PrimitiveSerializer<DomainOrderResponseAttributes> {
  @override
  final Iterable<Type> types = const [DomainOrderResponseAttributes, _$DomainOrderResponseAttributes];

  @override
  final String wireName = r'DomainOrderResponseAttributes';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainOrderResponseAttributes object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(String),
      );
    }
    if (object.adminEmail != null) {
      yield r'admin_email';
      yield serializers.serialize(
        object.adminEmail,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainOrderResponseAttributes object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainOrderResponseAttributesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.id = valueDes;
          break;
        case r'admin_email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.adminEmail = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainOrderResponseAttributes deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainOrderResponseAttributesBuilder();
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

