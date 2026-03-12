//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_order_services10001.g.dart';

/// Example schema for a domain service catalog entry.
///
/// Properties:
/// * [servicesId] - Service ID
/// * [servicesName] - Service Name
/// * [servicesCost] - Service Cost
/// * [servicesCurrency] - Currency of Service Cost
/// * [servicesCategory] - Service Category
/// * [servicesBuyable] - Buyable flag for Service
/// * [servicesType] - Service Type
/// * [servicesField1] - Field 1 of Service
/// * [servicesField2] - Field 2 of Service
/// * [servicesModule] - Module of Service
/// * [servicesHidden] - Hidden flag for Service
@BuiltValue()
abstract class DomainOrderServices10001 implements Built<DomainOrderServices10001, DomainOrderServices10001Builder> {
  /// Service ID
  @BuiltValueField(wireName: r'services_id')
  String? get servicesId;

  /// Service Name
  @BuiltValueField(wireName: r'services_name')
  String? get servicesName;

  /// Service Cost
  @BuiltValueField(wireName: r'services_cost')
  String? get servicesCost;

  /// Currency of Service Cost
  @BuiltValueField(wireName: r'services_currency')
  String? get servicesCurrency;

  /// Service Category
  @BuiltValueField(wireName: r'services_category')
  String? get servicesCategory;

  /// Buyable flag for Service
  @BuiltValueField(wireName: r'services_buyable')
  String? get servicesBuyable;

  /// Service Type
  @BuiltValueField(wireName: r'services_type')
  String? get servicesType;

  /// Field 1 of Service
  @BuiltValueField(wireName: r'services_field1')
  String? get servicesField1;

  /// Field 2 of Service
  @BuiltValueField(wireName: r'services_field2')
  String? get servicesField2;

  /// Module of Service
  @BuiltValueField(wireName: r'services_module')
  String? get servicesModule;

  /// Hidden flag for Service
  @BuiltValueField(wireName: r'services_hidden')
  String? get servicesHidden;

  DomainOrderServices10001._();

  factory DomainOrderServices10001([void updates(DomainOrderServices10001Builder b)]) = _$DomainOrderServices10001;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainOrderServices10001Builder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainOrderServices10001> get serializer => _$DomainOrderServices10001Serializer();
}

class _$DomainOrderServices10001Serializer implements PrimitiveSerializer<DomainOrderServices10001> {
  @override
  final Iterable<Type> types = const [DomainOrderServices10001, _$DomainOrderServices10001];

  @override
  final String wireName = r'DomainOrderServices10001';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainOrderServices10001 object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.servicesId != null) {
      yield r'services_id';
      yield serializers.serialize(
        object.servicesId,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesName != null) {
      yield r'services_name';
      yield serializers.serialize(
        object.servicesName,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesCost != null) {
      yield r'services_cost';
      yield serializers.serialize(
        object.servicesCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesCurrency != null) {
      yield r'services_currency';
      yield serializers.serialize(
        object.servicesCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesCategory != null) {
      yield r'services_category';
      yield serializers.serialize(
        object.servicesCategory,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesBuyable != null) {
      yield r'services_buyable';
      yield serializers.serialize(
        object.servicesBuyable,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesType != null) {
      yield r'services_type';
      yield serializers.serialize(
        object.servicesType,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesField1 != null) {
      yield r'services_field1';
      yield serializers.serialize(
        object.servicesField1,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesField2 != null) {
      yield r'services_field2';
      yield serializers.serialize(
        object.servicesField2,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesModule != null) {
      yield r'services_module';
      yield serializers.serialize(
        object.servicesModule,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesHidden != null) {
      yield r'services_hidden';
      yield serializers.serialize(
        object.servicesHidden,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainOrderServices10001 object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainOrderServices10001Builder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'services_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesId = valueDes;
          break;
        case r'services_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesName = valueDes;
          break;
        case r'services_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesCost = valueDes;
          break;
        case r'services_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesCurrency = valueDes;
          break;
        case r'services_category':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesCategory = valueDes;
          break;
        case r'services_buyable':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesBuyable = valueDes;
          break;
        case r'services_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesType = valueDes;
          break;
        case r'services_field1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesField1 = valueDes;
          break;
        case r'services_field2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesField2 = valueDes;
          break;
        case r'services_module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesModule = valueDes;
          break;
        case r'services_hidden':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesHidden = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainOrderServices10001 deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainOrderServices10001Builder();
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

