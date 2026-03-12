//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_row.g.dart';

/// A result row from the `Backups` `GET` request.
///
/// Properties:
/// * [backupId] - The id of the backup.
/// * [backupName] - The name of the backup.
/// * [backupCost] - The cost of the backup.
/// * [backupUsername] - The username of the backup.
/// * [backupStatus] - The status of the backup.
/// * [servicesName] - The services name of the backup.
@BuiltValue()
abstract class BackupRow implements Built<BackupRow, BackupRowBuilder> {
  /// The id of the backup.
  @BuiltValueField(wireName: r'backup_id')
  String? get backupId;

  /// The name of the backup.
  @BuiltValueField(wireName: r'backup_name')
  String? get backupName;

  /// The cost of the backup.
  @BuiltValueField(wireName: r'backup_cost')
  String? get backupCost;

  /// The username of the backup.
  @BuiltValueField(wireName: r'backup_username')
  String? get backupUsername;

  /// The status of the backup.
  @BuiltValueField(wireName: r'backup_status')
  String? get backupStatus;

  /// The services name of the backup.
  @BuiltValueField(wireName: r'services_name')
  String? get servicesName;

  BackupRow._();

  factory BackupRow([void updates(BackupRowBuilder b)]) = _$BackupRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupRow> get serializer => _$BackupRowSerializer();
}

class _$BackupRowSerializer implements PrimitiveSerializer<BackupRow> {
  @override
  final Iterable<Type> types = const [BackupRow, _$BackupRow];

  @override
  final String wireName = r'BackupRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.backupId != null) {
      yield r'backup_id';
      yield serializers.serialize(
        object.backupId,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupName != null) {
      yield r'backup_name';
      yield serializers.serialize(
        object.backupName,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupCost != null) {
      yield r'backup_cost';
      yield serializers.serialize(
        object.backupCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupUsername != null) {
      yield r'backup_username';
      yield serializers.serialize(
        object.backupUsername,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupStatus != null) {
      yield r'backup_status';
      yield serializers.serialize(
        object.backupStatus,
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
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'backup_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupId = valueDes;
          break;
        case r'backup_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupName = valueDes;
          break;
        case r'backup_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupCost = valueDes;
          break;
        case r'backup_username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupUsername = valueDes;
          break;
        case r'backup_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupStatus = valueDes;
          break;
        case r'services_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesName = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupRowBuilder();
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

