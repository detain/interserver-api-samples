//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_prov_process_pending_attributes.g.dart';

/// DomainProvProcessPendingAttributes
///
/// Properties:
/// * [id] 
/// * [orderId] 
/// * [registrationExpirationDate] 
/// * [fAutoRenew] 
@BuiltValue()
abstract class DomainProvProcessPendingAttributes implements Built<DomainProvProcessPendingAttributes, DomainProvProcessPendingAttributesBuilder> {
  @BuiltValueField(wireName: r'id')
  String? get id;

  @BuiltValueField(wireName: r'order_id')
  String? get orderId;

  @BuiltValueField(wireName: r'registration expiration date')
  String? get registrationExpirationDate;

  @BuiltValueField(wireName: r'f_auto_renew')
  String? get fAutoRenew;

  DomainProvProcessPendingAttributes._();

  factory DomainProvProcessPendingAttributes([void updates(DomainProvProcessPendingAttributesBuilder b)]) = _$DomainProvProcessPendingAttributes;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainProvProcessPendingAttributesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainProvProcessPendingAttributes> get serializer => _$DomainProvProcessPendingAttributesSerializer();
}

class _$DomainProvProcessPendingAttributesSerializer implements PrimitiveSerializer<DomainProvProcessPendingAttributes> {
  @override
  final Iterable<Type> types = const [DomainProvProcessPendingAttributes, _$DomainProvProcessPendingAttributes];

  @override
  final String wireName = r'DomainProvProcessPendingAttributes';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainProvProcessPendingAttributes object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(String),
      );
    }
    if (object.orderId != null) {
      yield r'order_id';
      yield serializers.serialize(
        object.orderId,
        specifiedType: const FullType(String),
      );
    }
    if (object.registrationExpirationDate != null) {
      yield r'registration expiration date';
      yield serializers.serialize(
        object.registrationExpirationDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.fAutoRenew != null) {
      yield r'f_auto_renew';
      yield serializers.serialize(
        object.fAutoRenew,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainProvProcessPendingAttributes object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainProvProcessPendingAttributesBuilder result,
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
        case r'order_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.orderId = valueDes;
          break;
        case r'registration expiration date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.registrationExpirationDate = valueDes;
          break;
        case r'f_auto_renew':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.fAutoRenew = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainProvProcessPendingAttributes deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainProvProcessPendingAttributesBuilder();
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

