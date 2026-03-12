//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/service_types.dart';
import 'package:openapi/src/model/services.dart';
import 'package:openapi/src/model/modules.dart';
import 'package:openapi/src/model/service_categories.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'services_info.g.dart';

/// Contains the complete catalog of available modules, services, service types, and service categories.
///
/// Properties:
/// * [modules] 
/// * [services] 
/// * [serviceTypes] 
/// * [serviceCategories] 
@BuiltValue()
abstract class ServicesInfo implements Built<ServicesInfo, ServicesInfoBuilder> {
  @BuiltValueField(wireName: r'modules')
  Modules get modules;

  @BuiltValueField(wireName: r'services')
  Services get services;

  @BuiltValueField(wireName: r'serviceTypes')
  ServiceTypes get serviceTypes;

  @BuiltValueField(wireName: r'serviceCategories')
  ServiceCategories get serviceCategories;

  ServicesInfo._();

  factory ServicesInfo([void updates(ServicesInfoBuilder b)]) = _$ServicesInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServicesInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServicesInfo> get serializer => _$ServicesInfoSerializer();
}

class _$ServicesInfoSerializer implements PrimitiveSerializer<ServicesInfo> {
  @override
  final Iterable<Type> types = const [ServicesInfo, _$ServicesInfo];

  @override
  final String wireName = r'ServicesInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServicesInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'modules';
    yield serializers.serialize(
      object.modules,
      specifiedType: const FullType(Modules),
    );
    yield r'services';
    yield serializers.serialize(
      object.services,
      specifiedType: const FullType(Services),
    );
    yield r'serviceTypes';
    yield serializers.serialize(
      object.serviceTypes,
      specifiedType: const FullType(ServiceTypes),
    );
    yield r'serviceCategories';
    yield serializers.serialize(
      object.serviceCategories,
      specifiedType: const FullType(ServiceCategories),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    ServicesInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServicesInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'modules':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(Modules),
          ) as Modules;
          result.modules = valueDes;
          break;
        case r'services':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(Services),
          ) as Services;
          result.services = valueDes;
          break;
        case r'serviceTypes':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServiceTypes),
          ) as ServiceTypes;
          result.serviceTypes = valueDes;
          break;
        case r'serviceCategories':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServiceCategories),
          ) as ServiceCategories;
          result.serviceCategories = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServicesInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServicesInfoBuilder();
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

