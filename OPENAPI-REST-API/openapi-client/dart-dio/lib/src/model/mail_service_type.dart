//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_service_type.g.dart';

/// Service type definition for a mail service, including name, pricing, and category.
///
/// Properties:
/// * [servicesId] - The ID of the service type.
/// * [servicesName] - The name of the service type.
/// * [servicesCost] - The cost of the service type.
/// * [servicesCategory] - The category of the service type.
/// * [servicesBuyable] - Whether the service type is buyable.
/// * [servicesType] - The type of the service type.
/// * [servicesField1] - Additional field for the service type.
/// * [servicesField2] - Additional field for the service type.
/// * [servicesModule] - The module of the service type.
@BuiltValue()
abstract class MailServiceType implements Built<MailServiceType, MailServiceTypeBuilder> {
  /// The ID of the service type.
  @BuiltValueField(wireName: r'services_id')
  String? get servicesId;

  /// The name of the service type.
  @BuiltValueField(wireName: r'services_name')
  String? get servicesName;

  /// The cost of the service type.
  @BuiltValueField(wireName: r'services_cost')
  String? get servicesCost;

  /// The category of the service type.
  @BuiltValueField(wireName: r'services_category')
  String? get servicesCategory;

  /// Whether the service type is buyable.
  @BuiltValueField(wireName: r'services_buyable')
  String? get servicesBuyable;

  /// The type of the service type.
  @BuiltValueField(wireName: r'services_type')
  String? get servicesType;

  /// Additional field for the service type.
  @BuiltValueField(wireName: r'services_field1')
  String? get servicesField1;

  /// Additional field for the service type.
  @BuiltValueField(wireName: r'services_field2')
  String? get servicesField2;

  /// The module of the service type.
  @BuiltValueField(wireName: r'services_module')
  String? get servicesModule;

  MailServiceType._();

  factory MailServiceType([void updates(MailServiceTypeBuilder b)]) = _$MailServiceType;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailServiceTypeBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailServiceType> get serializer => _$MailServiceTypeSerializer();
}

class _$MailServiceTypeSerializer implements PrimitiveSerializer<MailServiceType> {
  @override
  final Iterable<Type> types = const [MailServiceType, _$MailServiceType];

  @override
  final String wireName = r'MailServiceType';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailServiceType object, {
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
    MailServiceType object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailServiceTypeBuilder result,
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
  MailServiceType deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailServiceTypeBuilder();
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

