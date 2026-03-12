//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/vps_backup_row.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_backup_rows.g.dart';

/// The listing of the backups for your service.
@BuiltValue()
abstract class VpsBackupRows implements Built<VpsBackupRows, VpsBackupRowsBuilder> {
  VpsBackupRows._();

  factory VpsBackupRows([void updates(VpsBackupRowsBuilder b)]) = _$VpsBackupRows;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsBackupRowsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsBackupRows> get serializer => _$VpsBackupRowsSerializer();
}

class _$VpsBackupRowsSerializer implements PrimitiveSerializer<VpsBackupRows> {
  @override
  final Iterable<Type> types = const [VpsBackupRows, _$VpsBackupRows];

  @override
  final String wireName = r'VpsBackupRows';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsBackupRows object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsBackupRows object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  VpsBackupRows deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsBackupRowsBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

