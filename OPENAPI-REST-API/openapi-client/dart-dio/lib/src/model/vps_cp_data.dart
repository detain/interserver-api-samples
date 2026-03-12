//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_cp_data.g.dart';

/// Control panel license options available for a VPS.
///
/// Properties:
/// * [name] - Control panel name (e.g., cPanel).
/// * [cost] - Monthly cost in cents for the control panel license.
@BuiltValue()
abstract class VpsCPData implements Built<VpsCPData, VpsCPDataBuilder> {
  /// Control panel name (e.g., cPanel).
  @BuiltValueField(wireName: r'name')
  String? get name;

  /// Monthly cost in cents for the control panel license.
  @BuiltValueField(wireName: r'cost')
  int? get cost;

  VpsCPData._();

  factory VpsCPData([void updates(VpsCPDataBuilder b)]) = _$VpsCPData;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsCPDataBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsCPData> get serializer => _$VpsCPDataSerializer();
}

class _$VpsCPDataSerializer implements PrimitiveSerializer<VpsCPData> {
  @override
  final Iterable<Type> types = const [VpsCPData, _$VpsCPData];

  @override
  final String wireName = r'VpsCPData';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsCPData object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
    if (object.cost != null) {
      yield r'cost';
      yield serializers.serialize(
        object.cost,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsCPData object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsCPDataBuilder result,
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
        case r'cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.cost = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsCPData deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsCPDataBuilder();
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

