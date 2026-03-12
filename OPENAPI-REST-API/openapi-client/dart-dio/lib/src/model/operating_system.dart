//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'operating_system.g.dart';

/// An operating system option available for server provisioning.
///
/// Properties:
/// * [id] 
/// * [shortDesc] 
/// * [monthlyPrice] 
@BuiltValue()
abstract class OperatingSystem implements Built<OperatingSystem, OperatingSystemBuilder> {
  @BuiltValueField(wireName: r'id')
  int? get id;

  @BuiltValueField(wireName: r'short_desc')
  String? get shortDesc;

  @BuiltValueField(wireName: r'monthly_price')
  num? get monthlyPrice;

  OperatingSystem._();

  factory OperatingSystem([void updates(OperatingSystemBuilder b)]) = _$OperatingSystem;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(OperatingSystemBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<OperatingSystem> get serializer => _$OperatingSystemSerializer();
}

class _$OperatingSystemSerializer implements PrimitiveSerializer<OperatingSystem> {
  @override
  final Iterable<Type> types = const [OperatingSystem, _$OperatingSystem];

  @override
  final String wireName = r'OperatingSystem';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    OperatingSystem object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(int),
      );
    }
    if (object.shortDesc != null) {
      yield r'short_desc';
      yield serializers.serialize(
        object.shortDesc,
        specifiedType: const FullType(String),
      );
    }
    if (object.monthlyPrice != null) {
      yield r'monthly_price';
      yield serializers.serialize(
        object.monthlyPrice,
        specifiedType: const FullType(num),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    OperatingSystem object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required OperatingSystemBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.id = valueDes;
          break;
        case r'short_desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.shortDesc = valueDes;
          break;
        case r'monthly_price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.monthlyPrice = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  OperatingSystem deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = OperatingSystemBuilder();
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

