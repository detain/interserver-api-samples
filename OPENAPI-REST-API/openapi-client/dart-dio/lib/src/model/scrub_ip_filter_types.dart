//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/scrub_ip_filter_types_filters_value.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'scrub_ip_filter_types.g.dart';

/// Available scrub filter types for building firewall rules.
///
/// Properties:
/// * [success] 
/// * [filters] 
@BuiltValue()
abstract class ScrubIpFilterTypes implements Built<ScrubIpFilterTypes, ScrubIpFilterTypesBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'filters')
  BuiltMap<String, ScrubIpFilterTypesFiltersValue>? get filters;

  ScrubIpFilterTypes._();

  factory ScrubIpFilterTypes([void updates(ScrubIpFilterTypesBuilder b)]) = _$ScrubIpFilterTypes;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ScrubIpFilterTypesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ScrubIpFilterTypes> get serializer => _$ScrubIpFilterTypesSerializer();
}

class _$ScrubIpFilterTypesSerializer implements PrimitiveSerializer<ScrubIpFilterTypes> {
  @override
  final Iterable<Type> types = const [ScrubIpFilterTypes, _$ScrubIpFilterTypes];

  @override
  final String wireName = r'ScrubIpFilterTypes';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ScrubIpFilterTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
      );
    }
    if (object.filters != null) {
      yield r'filters';
      yield serializers.serialize(
        object.filters,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(ScrubIpFilterTypesFiltersValue)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ScrubIpFilterTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ScrubIpFilterTypesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.success = valueDes;
          break;
        case r'filters':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(ScrubIpFilterTypesFiltersValue)]),
          ) as BuiltMap<String, ScrubIpFilterTypesFiltersValue>;
          result.filters.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ScrubIpFilterTypes deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ScrubIpFilterTypesBuilder();
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

