//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_service_master.g.dart';

/// BackupServiceMaster
///
/// Properties:
/// * [backupId] - Backup ID of the service master.
/// * [backupName] - Name of the backup service.
/// * [backupIp] - IP address of the backup service.
/// * [backupType] - Type of the backup service.
/// * [backupHdsize] - Size of the backup service's hard drive.
/// * [backupHdfree] - Amount of free space on the backup service's hard drive.
/// * [backupLastUpdate] - Last update timestamp of the backup service.
/// * [backupAvailable] - Availability status of the backup service.
/// * [backupIowait] - I/O wait status of the backup service.
/// * [backupOrder] - Order associated with the backup service.
@BuiltValue()
abstract class BackupServiceMaster implements Built<BackupServiceMaster, BackupServiceMasterBuilder> {
  /// Backup ID of the service master.
  @BuiltValueField(wireName: r'backup_id')
  int? get backupId;

  /// Name of the backup service.
  @BuiltValueField(wireName: r'backup_name')
  String? get backupName;

  /// IP address of the backup service.
  @BuiltValueField(wireName: r'backup_ip')
  String? get backupIp;

  /// Type of the backup service.
  @BuiltValueField(wireName: r'backup_type')
  int? get backupType;

  /// Size of the backup service's hard drive.
  @BuiltValueField(wireName: r'backup_hdsize')
  int? get backupHdsize;

  /// Amount of free space on the backup service's hard drive.
  @BuiltValueField(wireName: r'backup_hdfree')
  int? get backupHdfree;

  /// Last update timestamp of the backup service.
  @BuiltValueField(wireName: r'backup_last_update')
  String? get backupLastUpdate;

  /// Availability status of the backup service.
  @BuiltValueField(wireName: r'backup_available')
  int? get backupAvailable;

  /// I/O wait status of the backup service.
  @BuiltValueField(wireName: r'backup_iowait')
  int? get backupIowait;

  /// Order associated with the backup service.
  @BuiltValueField(wireName: r'backup_order')
  int? get backupOrder;

  BackupServiceMaster._();

  factory BackupServiceMaster([void updates(BackupServiceMasterBuilder b)]) = _$BackupServiceMaster;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupServiceMasterBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupServiceMaster> get serializer => _$BackupServiceMasterSerializer();
}

class _$BackupServiceMasterSerializer implements PrimitiveSerializer<BackupServiceMaster> {
  @override
  final Iterable<Type> types = const [BackupServiceMaster, _$BackupServiceMaster];

  @override
  final String wireName = r'BackupServiceMaster';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupServiceMaster object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.backupId != null) {
      yield r'backup_id';
      yield serializers.serialize(
        object.backupId,
        specifiedType: const FullType(int),
      );
    }
    if (object.backupName != null) {
      yield r'backup_name';
      yield serializers.serialize(
        object.backupName,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupIp != null) {
      yield r'backup_ip';
      yield serializers.serialize(
        object.backupIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupType != null) {
      yield r'backup_type';
      yield serializers.serialize(
        object.backupType,
        specifiedType: const FullType(int),
      );
    }
    if (object.backupHdsize != null) {
      yield r'backup_hdsize';
      yield serializers.serialize(
        object.backupHdsize,
        specifiedType: const FullType(int),
      );
    }
    if (object.backupHdfree != null) {
      yield r'backup_hdfree';
      yield serializers.serialize(
        object.backupHdfree,
        specifiedType: const FullType(int),
      );
    }
    if (object.backupLastUpdate != null) {
      yield r'backup_last_update';
      yield serializers.serialize(
        object.backupLastUpdate,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupAvailable != null) {
      yield r'backup_available';
      yield serializers.serialize(
        object.backupAvailable,
        specifiedType: const FullType(int),
      );
    }
    if (object.backupIowait != null) {
      yield r'backup_iowait';
      yield serializers.serialize(
        object.backupIowait,
        specifiedType: const FullType(int),
      );
    }
    if (object.backupOrder != null) {
      yield r'backup_order';
      yield serializers.serialize(
        object.backupOrder,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupServiceMaster object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupServiceMasterBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'backup_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.backupId = valueDes;
          break;
        case r'backup_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupName = valueDes;
          break;
        case r'backup_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupIp = valueDes;
          break;
        case r'backup_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.backupType = valueDes;
          break;
        case r'backup_hdsize':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.backupHdsize = valueDes;
          break;
        case r'backup_hdfree':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.backupHdfree = valueDes;
          break;
        case r'backup_last_update':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupLastUpdate = valueDes;
          break;
        case r'backup_available':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.backupAvailable = valueDes;
          break;
        case r'backup_iowait':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.backupIowait = valueDes;
          break;
        case r'backup_order':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.backupOrder = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupServiceMaster deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupServiceMasterBuilder();
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

