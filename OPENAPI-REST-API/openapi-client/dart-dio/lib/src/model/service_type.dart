//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'service_type.g.dart';

/// A general grouping of services within a category.
///
/// Properties:
/// * [stId] 
/// * [stName] 
/// * [stCategory] 
/// * [stModule] 
@BuiltValue()
abstract class ServiceType implements Built<ServiceType, ServiceTypeBuilder> {
  @BuiltValueField(wireName: r'st_id')
  int get stId;

  @BuiltValueField(wireName: r'st_name')
  String get stName;

  @BuiltValueField(wireName: r'st_category')
  int get stCategory;

  @BuiltValueField(wireName: r'st_module')
  String get stModule;

  ServiceType._();

  factory ServiceType([void updates(ServiceTypeBuilder b)]) = _$ServiceType;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServiceTypeBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServiceType> get serializer => _$ServiceTypeSerializer();
}

class _$ServiceTypeSerializer implements PrimitiveSerializer<ServiceType> {
  @override
  final Iterable<Type> types = const [ServiceType, _$ServiceType];

  @override
  final String wireName = r'ServiceType';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServiceType object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'st_id';
    yield serializers.serialize(
      object.stId,
      specifiedType: const FullType(int),
    );
    yield r'st_name';
    yield serializers.serialize(
      object.stName,
      specifiedType: const FullType(String),
    );
    yield r'st_category';
    yield serializers.serialize(
      object.stCategory,
      specifiedType: const FullType(int),
    );
    yield r'st_module';
    yield serializers.serialize(
      object.stModule,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    ServiceType object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServiceTypeBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'st_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.stId = valueDes;
          break;
        case r'st_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.stName = valueDes;
          break;
        case r'st_category':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.stCategory = valueDes;
          break;
        case r'st_module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.stModule = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServiceType deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServiceTypeBuilder();
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

