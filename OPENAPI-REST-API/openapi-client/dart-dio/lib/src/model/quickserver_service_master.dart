//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_service_master.g.dart';

/// Information about the host node running this QuickServer, including hardware specs and resource utilization.
///
/// Properties:
/// * [qsId] - Quickserver ID
/// * [qsName] - Quickserver name
/// * [qsIp] - IP address
/// * [qsType] - Type
/// * [qsHdsize] - HDD size
/// * [qsHdfree] - Free HDD space
/// * [qsBits] - Bits
/// * [qsLoad] - Load
/// * [qsRam] - RAM information
/// * [qsCpuModel] - CPU model
/// * [qsCpuMhz] - CPU frequency
/// * [qsLocation] - Location
/// * [qsAvailable] - Available information
/// * [qsCost] - Cost
/// * [qsLastUpdate] - Last update date
/// * [qsCores] - Number of cores
/// * [qsIowait] - I/O wait
/// * [qsRaidStatus] - RAID status
/// * [qsDriveType] - Drive type
/// * [qsOrder] - Order number
/// * [qsRaidBuilding] - RAID building information
/// * [qsKernel] - Kernel version
/// * [qsIoping] - IOPing information
/// * [qsSpeed] - Speed information
/// * [qsDistro] - Distribution name
/// * [qsDistroVersion] - Distribution version
/// * [qsBytesSecIn] - Bytes/sec in
/// * [qsBytesSecOut] - Bytes/sec out
/// * [qsPacketsSecIn] - Packets/sec in
/// * [qsPacketsSecOut] - Packets/sec out
/// * [qsLastInstallTime] - Last install time (null)
/// * [qsPartitions] - Partitions information (null)
/// * [qsCpuFlags] - CPU flags
@BuiltValue()
abstract class QuickserverServiceMaster implements Built<QuickserverServiceMaster, QuickserverServiceMasterBuilder> {
  /// Quickserver ID
  @BuiltValueField(wireName: r'qs_id')
  String? get qsId;

  /// Quickserver name
  @BuiltValueField(wireName: r'qs_name')
  String? get qsName;

  /// IP address
  @BuiltValueField(wireName: r'qs_ip')
  String? get qsIp;

  /// Type
  @BuiltValueField(wireName: r'qs_type')
  String? get qsType;

  /// HDD size
  @BuiltValueField(wireName: r'qs_hdsize')
  String? get qsHdsize;

  /// Free HDD space
  @BuiltValueField(wireName: r'qs_hdfree')
  String? get qsHdfree;

  /// Bits
  @BuiltValueField(wireName: r'qs_bits')
  String? get qsBits;

  /// Load
  @BuiltValueField(wireName: r'qs_load')
  String? get qsLoad;

  /// RAM information
  @BuiltValueField(wireName: r'qs_ram')
  String? get qsRam;

  /// CPU model
  @BuiltValueField(wireName: r'qs_cpu_model')
  String? get qsCpuModel;

  /// CPU frequency
  @BuiltValueField(wireName: r'qs_cpu_mhz')
  String? get qsCpuMhz;

  /// Location
  @BuiltValueField(wireName: r'qs_location')
  String? get qsLocation;

  /// Available information
  @BuiltValueField(wireName: r'qs_available')
  String? get qsAvailable;

  /// Cost
  @BuiltValueField(wireName: r'qs_cost')
  String? get qsCost;

  /// Last update date
  @BuiltValueField(wireName: r'qs_last_update')
  String? get qsLastUpdate;

  /// Number of cores
  @BuiltValueField(wireName: r'qs_cores')
  String? get qsCores;

  /// I/O wait
  @BuiltValueField(wireName: r'qs_iowait')
  String? get qsIowait;

  /// RAID status
  @BuiltValueField(wireName: r'qs_raid_status')
  String? get qsRaidStatus;

  /// Drive type
  @BuiltValueField(wireName: r'qs_drive_type')
  String? get qsDriveType;

  /// Order number
  @BuiltValueField(wireName: r'qs_order')
  String? get qsOrder;

  /// RAID building information
  @BuiltValueField(wireName: r'qs_raid_building')
  String? get qsRaidBuilding;

  /// Kernel version
  @BuiltValueField(wireName: r'qs_kernel')
  String? get qsKernel;

  /// IOPing information
  @BuiltValueField(wireName: r'qs_ioping')
  String? get qsIoping;

  /// Speed information
  @BuiltValueField(wireName: r'qs_speed')
  String? get qsSpeed;

  /// Distribution name
  @BuiltValueField(wireName: r'qs_distro')
  String? get qsDistro;

  /// Distribution version
  @BuiltValueField(wireName: r'qs_distro_version')
  String? get qsDistroVersion;

  /// Bytes/sec in
  @BuiltValueField(wireName: r'qs_bytes_sec_in')
  String? get qsBytesSecIn;

  /// Bytes/sec out
  @BuiltValueField(wireName: r'qs_bytes_sec_out')
  String? get qsBytesSecOut;

  /// Packets/sec in
  @BuiltValueField(wireName: r'qs_packets_sec_in')
  String? get qsPacketsSecIn;

  /// Packets/sec out
  @BuiltValueField(wireName: r'qs_packets_sec_out')
  String? get qsPacketsSecOut;

  /// Last install time (null)
  @BuiltValueField(wireName: r'qs_last_install_time')
  String? get qsLastInstallTime;

  /// Partitions information (null)
  @BuiltValueField(wireName: r'qs_partitions')
  String? get qsPartitions;

  /// CPU flags
  @BuiltValueField(wireName: r'qs_cpu_flags')
  String? get qsCpuFlags;

  QuickserverServiceMaster._();

  factory QuickserverServiceMaster([void updates(QuickserverServiceMasterBuilder b)]) = _$QuickserverServiceMaster;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverServiceMasterBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverServiceMaster> get serializer => _$QuickserverServiceMasterSerializer();
}

class _$QuickserverServiceMasterSerializer implements PrimitiveSerializer<QuickserverServiceMaster> {
  @override
  final Iterable<Type> types = const [QuickserverServiceMaster, _$QuickserverServiceMaster];

  @override
  final String wireName = r'QuickserverServiceMaster';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverServiceMaster object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.qsId != null) {
      yield r'qs_id';
      yield serializers.serialize(
        object.qsId,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsName != null) {
      yield r'qs_name';
      yield serializers.serialize(
        object.qsName,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsIp != null) {
      yield r'qs_ip';
      yield serializers.serialize(
        object.qsIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsType != null) {
      yield r'qs_type';
      yield serializers.serialize(
        object.qsType,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsHdsize != null) {
      yield r'qs_hdsize';
      yield serializers.serialize(
        object.qsHdsize,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsHdfree != null) {
      yield r'qs_hdfree';
      yield serializers.serialize(
        object.qsHdfree,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsBits != null) {
      yield r'qs_bits';
      yield serializers.serialize(
        object.qsBits,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsLoad != null) {
      yield r'qs_load';
      yield serializers.serialize(
        object.qsLoad,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsRam != null) {
      yield r'qs_ram';
      yield serializers.serialize(
        object.qsRam,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsCpuModel != null) {
      yield r'qs_cpu_model';
      yield serializers.serialize(
        object.qsCpuModel,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsCpuMhz != null) {
      yield r'qs_cpu_mhz';
      yield serializers.serialize(
        object.qsCpuMhz,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsLocation != null) {
      yield r'qs_location';
      yield serializers.serialize(
        object.qsLocation,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsAvailable != null) {
      yield r'qs_available';
      yield serializers.serialize(
        object.qsAvailable,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsCost != null) {
      yield r'qs_cost';
      yield serializers.serialize(
        object.qsCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsLastUpdate != null) {
      yield r'qs_last_update';
      yield serializers.serialize(
        object.qsLastUpdate,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsCores != null) {
      yield r'qs_cores';
      yield serializers.serialize(
        object.qsCores,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsIowait != null) {
      yield r'qs_iowait';
      yield serializers.serialize(
        object.qsIowait,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsRaidStatus != null) {
      yield r'qs_raid_status';
      yield serializers.serialize(
        object.qsRaidStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsDriveType != null) {
      yield r'qs_drive_type';
      yield serializers.serialize(
        object.qsDriveType,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsOrder != null) {
      yield r'qs_order';
      yield serializers.serialize(
        object.qsOrder,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsRaidBuilding != null) {
      yield r'qs_raid_building';
      yield serializers.serialize(
        object.qsRaidBuilding,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsKernel != null) {
      yield r'qs_kernel';
      yield serializers.serialize(
        object.qsKernel,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsIoping != null) {
      yield r'qs_ioping';
      yield serializers.serialize(
        object.qsIoping,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsSpeed != null) {
      yield r'qs_speed';
      yield serializers.serialize(
        object.qsSpeed,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsDistro != null) {
      yield r'qs_distro';
      yield serializers.serialize(
        object.qsDistro,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsDistroVersion != null) {
      yield r'qs_distro_version';
      yield serializers.serialize(
        object.qsDistroVersion,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsBytesSecIn != null) {
      yield r'qs_bytes_sec_in';
      yield serializers.serialize(
        object.qsBytesSecIn,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsBytesSecOut != null) {
      yield r'qs_bytes_sec_out';
      yield serializers.serialize(
        object.qsBytesSecOut,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsPacketsSecIn != null) {
      yield r'qs_packets_sec_in';
      yield serializers.serialize(
        object.qsPacketsSecIn,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsPacketsSecOut != null) {
      yield r'qs_packets_sec_out';
      yield serializers.serialize(
        object.qsPacketsSecOut,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsLastInstallTime != null) {
      yield r'qs_last_install_time';
      yield serializers.serialize(
        object.qsLastInstallTime,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.qsPartitions != null) {
      yield r'qs_partitions';
      yield serializers.serialize(
        object.qsPartitions,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.qsCpuFlags != null) {
      yield r'qs_cpu_flags';
      yield serializers.serialize(
        object.qsCpuFlags,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverServiceMaster object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverServiceMasterBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'qs_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsId = valueDes;
          break;
        case r'qs_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsName = valueDes;
          break;
        case r'qs_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsIp = valueDes;
          break;
        case r'qs_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsType = valueDes;
          break;
        case r'qs_hdsize':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsHdsize = valueDes;
          break;
        case r'qs_hdfree':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsHdfree = valueDes;
          break;
        case r'qs_bits':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsBits = valueDes;
          break;
        case r'qs_load':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsLoad = valueDes;
          break;
        case r'qs_ram':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsRam = valueDes;
          break;
        case r'qs_cpu_model':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsCpuModel = valueDes;
          break;
        case r'qs_cpu_mhz':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsCpuMhz = valueDes;
          break;
        case r'qs_location':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsLocation = valueDes;
          break;
        case r'qs_available':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsAvailable = valueDes;
          break;
        case r'qs_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsCost = valueDes;
          break;
        case r'qs_last_update':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsLastUpdate = valueDes;
          break;
        case r'qs_cores':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsCores = valueDes;
          break;
        case r'qs_iowait':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsIowait = valueDes;
          break;
        case r'qs_raid_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsRaidStatus = valueDes;
          break;
        case r'qs_drive_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsDriveType = valueDes;
          break;
        case r'qs_order':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsOrder = valueDes;
          break;
        case r'qs_raid_building':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsRaidBuilding = valueDes;
          break;
        case r'qs_kernel':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsKernel = valueDes;
          break;
        case r'qs_ioping':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsIoping = valueDes;
          break;
        case r'qs_speed':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsSpeed = valueDes;
          break;
        case r'qs_distro':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsDistro = valueDes;
          break;
        case r'qs_distro_version':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsDistroVersion = valueDes;
          break;
        case r'qs_bytes_sec_in':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsBytesSecIn = valueDes;
          break;
        case r'qs_bytes_sec_out':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsBytesSecOut = valueDes;
          break;
        case r'qs_packets_sec_in':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsPacketsSecIn = valueDes;
          break;
        case r'qs_packets_sec_out':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsPacketsSecOut = valueDes;
          break;
        case r'qs_last_install_time':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.qsLastInstallTime = valueDes;
          break;
        case r'qs_partitions':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.qsPartitions = valueDes;
          break;
        case r'qs_cpu_flags':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsCpuFlags = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverServiceMaster deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverServiceMasterBuilder();
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

