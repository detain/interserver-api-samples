//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_service_types32.g.dart';

/// VpsOrderServiceTypes32
///
/// Properties:
/// * [servicesId] 
/// * [servicesName] 
/// * [servicesCost] 
/// * [servicesCategory] 
/// * [servicesBuyable] 
/// * [servicesType] 
/// * [servicesField1] 
/// * [servicesField2] 
/// * [servicesModule] 
@BuiltValue()
abstract class VpsOrderServiceTypes32 implements Built<VpsOrderServiceTypes32, VpsOrderServiceTypes32Builder> {
  @BuiltValueField(wireName: r'services_id')
  String? get servicesId;

  @BuiltValueField(wireName: r'services_name')
  String? get servicesName;

  @BuiltValueField(wireName: r'services_cost')
  String? get servicesCost;

  @BuiltValueField(wireName: r'services_category')
  String? get servicesCategory;

  @BuiltValueField(wireName: r'services_buyable')
  String? get servicesBuyable;

  @BuiltValueField(wireName: r'services_type')
  String? get servicesType;

  @BuiltValueField(wireName: r'services_field1')
  String? get servicesField1;

  @BuiltValueField(wireName: r'services_field2')
  String? get servicesField2;

  @BuiltValueField(wireName: r'services_module')
  String? get servicesModule;

  VpsOrderServiceTypes32._();

  factory VpsOrderServiceTypes32([void updates(VpsOrderServiceTypes32Builder b)]) = _$VpsOrderServiceTypes32;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderServiceTypes32Builder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderServiceTypes32> get serializer => _$VpsOrderServiceTypes32Serializer();
}

class _$VpsOrderServiceTypes32Serializer implements PrimitiveSerializer<VpsOrderServiceTypes32> {
  @override
  final Iterable<Type> types = const [VpsOrderServiceTypes32, _$VpsOrderServiceTypes32];

  @override
  final String wireName = r'VpsOrderServiceTypes32';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderServiceTypes32 object, {
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
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderServiceTypes32 object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderServiceTypes32Builder result,
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
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderServiceTypes32 deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderServiceTypes32Builder();
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

