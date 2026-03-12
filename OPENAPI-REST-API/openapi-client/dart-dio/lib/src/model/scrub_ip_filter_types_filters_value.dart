//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'scrub_ip_filter_types_filters_value.g.dart';

/// ScrubIpFilterTypesFiltersValue
///
/// Properties:
/// * [name] 
/// * [desc] 
@BuiltValue()
abstract class ScrubIpFilterTypesFiltersValue implements Built<ScrubIpFilterTypesFiltersValue, ScrubIpFilterTypesFiltersValueBuilder> {
  @BuiltValueField(wireName: r'name')
  String? get name;

  @BuiltValueField(wireName: r'desc')
  String? get desc;

  ScrubIpFilterTypesFiltersValue._();

  factory ScrubIpFilterTypesFiltersValue([void updates(ScrubIpFilterTypesFiltersValueBuilder b)]) = _$ScrubIpFilterTypesFiltersValue;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ScrubIpFilterTypesFiltersValueBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ScrubIpFilterTypesFiltersValue> get serializer => _$ScrubIpFilterTypesFiltersValueSerializer();
}

class _$ScrubIpFilterTypesFiltersValueSerializer implements PrimitiveSerializer<ScrubIpFilterTypesFiltersValue> {
  @override
  final Iterable<Type> types = const [ScrubIpFilterTypesFiltersValue, _$ScrubIpFilterTypesFiltersValue];

  @override
  final String wireName = r'ScrubIpFilterTypesFiltersValue';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ScrubIpFilterTypesFiltersValue object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
    if (object.desc != null) {
      yield r'desc';
      yield serializers.serialize(
        object.desc,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ScrubIpFilterTypesFiltersValue object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ScrubIpFilterTypesFiltersValueBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.desc = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ScrubIpFilterTypesFiltersValue deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ScrubIpFilterTypesFiltersValueBuilder();
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

