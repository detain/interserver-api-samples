//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_backup_row.g.dart';

/// A single backed-up item and information about it.
///
/// Properties:
/// * [type] - Backup Type
/// * [service] - The service id such as vps  id.
/// * [name] - The name of the backup.
/// * [size] - Size of the file in bytes
/// * [date] - The creation date of the backup in a unix timestamp.
@BuiltValue()
abstract class VpsBackupRow implements Built<VpsBackupRow, VpsBackupRowBuilder> {
  /// Backup Type
  @BuiltValueField(wireName: r'type')
  String get type;

  /// The service id such as vps  id.
  @BuiltValueField(wireName: r'service')
  int get service;

  /// The name of the backup.
  @BuiltValueField(wireName: r'name')
  String get name;

  /// Size of the file in bytes
  @BuiltValueField(wireName: r'size')
  int get size;

  /// The creation date of the backup in a unix timestamp.
  @BuiltValueField(wireName: r'date')
  int get date;

  VpsBackupRow._();

  factory VpsBackupRow([void updates(VpsBackupRowBuilder b)]) = _$VpsBackupRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsBackupRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsBackupRow> get serializer => _$VpsBackupRowSerializer();
}

class _$VpsBackupRowSerializer implements PrimitiveSerializer<VpsBackupRow> {
  @override
  final Iterable<Type> types = const [VpsBackupRow, _$VpsBackupRow];

  @override
  final String wireName = r'VpsBackupRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsBackupRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'type';
    yield serializers.serialize(
      object.type,
      specifiedType: const FullType(String),
    );
    yield r'service';
    yield serializers.serialize(
      object.service,
      specifiedType: const FullType(int),
    );
    yield r'name';
    yield serializers.serialize(
      object.name,
      specifiedType: const FullType(String),
    );
    yield r'size';
    yield serializers.serialize(
      object.size,
      specifiedType: const FullType(int),
    );
    yield r'date';
    yield serializers.serialize(
      object.date,
      specifiedType: const FullType(int),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsBackupRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsBackupRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.type = valueDes;
          break;
        case r'service':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.service = valueDes;
          break;
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'size':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.size = valueDes;
          break;
        case r'date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.date = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsBackupRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsBackupRowBuilder();
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

