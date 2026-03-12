//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'service.g.dart';

/// An individual package tied to one of our services.
///
/// Properties:
/// * [servicesId] 
/// * [servicesName] 
/// * [servicesCost] 
/// * [servicesCurrency] 
/// * [servicesCategory] 
/// * [servicesBuyable] 
/// * [servicesType] 
/// * [servicesField1] 
/// * [servicesField2] 
/// * [servicesModule] 
@BuiltValue()
abstract class Service implements Built<Service, ServiceBuilder> {
  @BuiltValueField(wireName: r'services_id')
  int get servicesId;

  @BuiltValueField(wireName: r'services_name')
  String get servicesName;

  @BuiltValueField(wireName: r'services_cost')
  num get servicesCost;

  @BuiltValueField(wireName: r'services_currency')
  String get servicesCurrency;

  @BuiltValueField(wireName: r'services_category')
  int get servicesCategory;

  @BuiltValueField(wireName: r'services_buyable')
  bool get servicesBuyable;

  @BuiltValueField(wireName: r'services_type')
  int get servicesType;

  @BuiltValueField(wireName: r'services_field1')
  String get servicesField1;

  @BuiltValueField(wireName: r'services_field2')
  String get servicesField2;

  @BuiltValueField(wireName: r'services_module')
  String get servicesModule;

  Service._();

  factory Service([void updates(ServiceBuilder b)]) = _$Service;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServiceBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Service> get serializer => _$ServiceSerializer();
}

class _$ServiceSerializer implements PrimitiveSerializer<Service> {
  @override
  final Iterable<Type> types = const [Service, _$Service];

  @override
  final String wireName = r'Service';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Service object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'services_id';
    yield serializers.serialize(
      object.servicesId,
      specifiedType: const FullType(int),
    );
    yield r'services_name';
    yield serializers.serialize(
      object.servicesName,
      specifiedType: const FullType(String),
    );
    yield r'services_cost';
    yield serializers.serialize(
      object.servicesCost,
      specifiedType: const FullType(num),
    );
    yield r'services_currency';
    yield serializers.serialize(
      object.servicesCurrency,
      specifiedType: const FullType(String),
    );
    yield r'services_category';
    yield serializers.serialize(
      object.servicesCategory,
      specifiedType: const FullType(int),
    );
    yield r'services_buyable';
    yield serializers.serialize(
      object.servicesBuyable,
      specifiedType: const FullType(bool),
    );
    yield r'services_type';
    yield serializers.serialize(
      object.servicesType,
      specifiedType: const FullType(int),
    );
    yield r'services_field1';
    yield serializers.serialize(
      object.servicesField1,
      specifiedType: const FullType(String),
    );
    yield r'services_field2';
    yield serializers.serialize(
      object.servicesField2,
      specifiedType: const FullType(String),
    );
    yield r'services_module';
    yield serializers.serialize(
      object.servicesModule,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    Service object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServiceBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'services_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
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
            specifiedType: const FullType(num),
          ) as num;
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
            specifiedType: const FullType(int),
          ) as int;
          result.servicesCategory = valueDes;
          break;
        case r'services_buyable':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.servicesBuyable = valueDes;
          break;
        case r'services_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
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
  Service deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServiceBuilder();
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

