//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'license_ip_info_row.g.dart';

/// A single row in the license IP information table.
///
/// Properties:
/// * [desc] - Row description
/// * [value] - Row value
@BuiltValue()
abstract class LicenseIpInfoRow implements Built<LicenseIpInfoRow, LicenseIpInfoRowBuilder> {
  /// Row description
  @BuiltValueField(wireName: r'desc')
  String? get desc;

  /// Row value
  @BuiltValueField(wireName: r'value')
  String? get value;

  LicenseIpInfoRow._();

  factory LicenseIpInfoRow([void updates(LicenseIpInfoRowBuilder b)]) = _$LicenseIpInfoRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicenseIpInfoRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicenseIpInfoRow> get serializer => _$LicenseIpInfoRowSerializer();
}

class _$LicenseIpInfoRowSerializer implements PrimitiveSerializer<LicenseIpInfoRow> {
  @override
  final Iterable<Type> types = const [LicenseIpInfoRow, _$LicenseIpInfoRow];

  @override
  final String wireName = r'LicenseIpInfoRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicenseIpInfoRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.desc != null) {
      yield r'desc';
      yield serializers.serialize(
        object.desc,
        specifiedType: const FullType(String),
      );
    }
    if (object.value != null) {
      yield r'value';
      yield serializers.serialize(
        object.value,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LicenseIpInfoRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicenseIpInfoRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.desc = valueDes;
          break;
        case r'value':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.value = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LicenseIpInfoRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicenseIpInfoRowBuilder();
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

