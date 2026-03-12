//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_service_master.g.dart';

/// Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
///
/// Properties:
/// * [vpsId] - VPS ID
/// * [vpsName] - VPS name
/// * [vpsIp] - IP address of the VPS
/// * [vpsType] - VPS type
/// * [vpsHdsize] - Hard drive size
/// * [vpsHdfree] - Free hard drive space
/// * [vpsBits] - Bits
/// * [vpsLoad] - CPU load
/// * [vpsRam] - RAM
/// * [vpsCpuModel] - CPU model
/// * [vpsCpuMhz] - CPU frequency in MHz
/// * [vpsLocation] - Location of the VPS
/// * [vpsLastUpdate] - Last update date
/// * [vpsRaidBuilding] - RAID building status
/// * [vpsKernel] - Kernel version
/// * [vpsAvailable] - Available
/// * [vpsCores] - Number of CPU cores
/// * [vpsIowait] - I/O wait
/// * [vpsRaidStatus] - RAID status
/// * [vpsMounts] - Mounts
/// * [vpsServerMax] - Maximum number of servers
/// * [vpsServerMaxSlices] - Maximum number of server slices
/// * [vpsDriveType] - Drive type
/// * [vpsOrder] - Order number
@BuiltValue()
abstract class VpsServiceMaster implements Built<VpsServiceMaster, VpsServiceMasterBuilder> {
  /// VPS ID
  @BuiltValueField(wireName: r'vps_id')
  String? get vpsId;

  /// VPS name
  @BuiltValueField(wireName: r'vps_name')
  String? get vpsName;

  /// IP address of the VPS
  @BuiltValueField(wireName: r'vps_ip')
  String? get vpsIp;

  /// VPS type
  @BuiltValueField(wireName: r'vps_type')
  String? get vpsType;

  /// Hard drive size
  @BuiltValueField(wireName: r'vps_hdsize')
  String? get vpsHdsize;

  /// Free hard drive space
  @BuiltValueField(wireName: r'vps_hdfree')
  String? get vpsHdfree;

  /// Bits
  @BuiltValueField(wireName: r'vps_bits')
  String? get vpsBits;

  /// CPU load
  @BuiltValueField(wireName: r'vps_load')
  String? get vpsLoad;

  /// RAM
  @BuiltValueField(wireName: r'vps_ram')
  String? get vpsRam;

  /// CPU model
  @BuiltValueField(wireName: r'vps_cpu_model')
  String? get vpsCpuModel;

  /// CPU frequency in MHz
  @BuiltValueField(wireName: r'vps_cpu_mhz')
  String? get vpsCpuMhz;

  /// Location of the VPS
  @BuiltValueField(wireName: r'vps_location')
  String? get vpsLocation;

  /// Last update date
  @BuiltValueField(wireName: r'vps_last_update')
  String? get vpsLastUpdate;

  /// RAID building status
  @BuiltValueField(wireName: r'vps_raid_building')
  String? get vpsRaidBuilding;

  /// Kernel version
  @BuiltValueField(wireName: r'vps_kernel')
  String? get vpsKernel;

  /// Available
  @BuiltValueField(wireName: r'vps_available')
  String? get vpsAvailable;

  /// Number of CPU cores
  @BuiltValueField(wireName: r'vps_cores')
  String? get vpsCores;

  /// I/O wait
  @BuiltValueField(wireName: r'vps_iowait')
  String? get vpsIowait;

  /// RAID status
  @BuiltValueField(wireName: r'vps_raid_status')
  String? get vpsRaidStatus;

  /// Mounts
  @BuiltValueField(wireName: r'vps_mounts')
  String? get vpsMounts;

  /// Maximum number of servers
  @BuiltValueField(wireName: r'vps_server_max')
  String? get vpsServerMax;

  /// Maximum number of server slices
  @BuiltValueField(wireName: r'vps_server_max_slices')
  String? get vpsServerMaxSlices;

  /// Drive type
  @BuiltValueField(wireName: r'vps_drive_type')
  String? get vpsDriveType;

  /// Order number
  @BuiltValueField(wireName: r'vps_order')
  String? get vpsOrder;

  VpsServiceMaster._();

  factory VpsServiceMaster([void updates(VpsServiceMasterBuilder b)]) = _$VpsServiceMaster;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsServiceMasterBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsServiceMaster> get serializer => _$VpsServiceMasterSerializer();
}

class _$VpsServiceMasterSerializer implements PrimitiveSerializer<VpsServiceMaster> {
  @override
  final Iterable<Type> types = const [VpsServiceMaster, _$VpsServiceMaster];

  @override
  final String wireName = r'VpsServiceMaster';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsServiceMaster object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.vpsId != null) {
      yield r'vps_id';
      yield serializers.serialize(
        object.vpsId,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsName != null) {
      yield r'vps_name';
      yield serializers.serialize(
        object.vpsName,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsIp != null) {
      yield r'vps_ip';
      yield serializers.serialize(
        object.vpsIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsType != null) {
      yield r'vps_type';
      yield serializers.serialize(
        object.vpsType,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsHdsize != null) {
      yield r'vps_hdsize';
      yield serializers.serialize(
        object.vpsHdsize,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsHdfree != null) {
      yield r'vps_hdfree';
      yield serializers.serialize(
        object.vpsHdfree,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsBits != null) {
      yield r'vps_bits';
      yield serializers.serialize(
        object.vpsBits,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsLoad != null) {
      yield r'vps_load';
      yield serializers.serialize(
        object.vpsLoad,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsRam != null) {
      yield r'vps_ram';
      yield serializers.serialize(
        object.vpsRam,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsCpuModel != null) {
      yield r'vps_cpu_model';
      yield serializers.serialize(
        object.vpsCpuModel,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsCpuMhz != null) {
      yield r'vps_cpu_mhz';
      yield serializers.serialize(
        object.vpsCpuMhz,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsLocation != null) {
      yield r'vps_location';
      yield serializers.serialize(
        object.vpsLocation,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsLastUpdate != null) {
      yield r'vps_last_update';
      yield serializers.serialize(
        object.vpsLastUpdate,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsRaidBuilding != null) {
      yield r'vps_raid_building';
      yield serializers.serialize(
        object.vpsRaidBuilding,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsKernel != null) {
      yield r'vps_kernel';
      yield serializers.serialize(
        object.vpsKernel,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsAvailable != null) {
      yield r'vps_available';
      yield serializers.serialize(
        object.vpsAvailable,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsCores != null) {
      yield r'vps_cores';
      yield serializers.serialize(
        object.vpsCores,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsIowait != null) {
      yield r'vps_iowait';
      yield serializers.serialize(
        object.vpsIowait,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsRaidStatus != null) {
      yield r'vps_raid_status';
      yield serializers.serialize(
        object.vpsRaidStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsMounts != null) {
      yield r'vps_mounts';
      yield serializers.serialize(
        object.vpsMounts,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsServerMax != null) {
      yield r'vps_server_max';
      yield serializers.serialize(
        object.vpsServerMax,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsServerMaxSlices != null) {
      yield r'vps_server_max_slices';
      yield serializers.serialize(
        object.vpsServerMaxSlices,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsDriveType != null) {
      yield r'vps_drive_type';
      yield serializers.serialize(
        object.vpsDriveType,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsOrder != null) {
      yield r'vps_order';
      yield serializers.serialize(
        object.vpsOrder,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsServiceMaster object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsServiceMasterBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'vps_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsId = valueDes;
          break;
        case r'vps_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsName = valueDes;
          break;
        case r'vps_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsIp = valueDes;
          break;
        case r'vps_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsType = valueDes;
          break;
        case r'vps_hdsize':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsHdsize = valueDes;
          break;
        case r'vps_hdfree':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsHdfree = valueDes;
          break;
        case r'vps_bits':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsBits = valueDes;
          break;
        case r'vps_load':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsLoad = valueDes;
          break;
        case r'vps_ram':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsRam = valueDes;
          break;
        case r'vps_cpu_model':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsCpuModel = valueDes;
          break;
        case r'vps_cpu_mhz':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsCpuMhz = valueDes;
          break;
        case r'vps_location':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsLocation = valueDes;
          break;
        case r'vps_last_update':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsLastUpdate = valueDes;
          break;
        case r'vps_raid_building':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsRaidBuilding = valueDes;
          break;
        case r'vps_kernel':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsKernel = valueDes;
          break;
        case r'vps_available':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsAvailable = valueDes;
          break;
        case r'vps_cores':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsCores = valueDes;
          break;
        case r'vps_iowait':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsIowait = valueDes;
          break;
        case r'vps_raid_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsRaidStatus = valueDes;
          break;
        case r'vps_mounts':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsMounts = valueDes;
          break;
        case r'vps_server_max':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsServerMax = valueDes;
          break;
        case r'vps_server_max_slices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsServerMaxSlices = valueDes;
          break;
        case r'vps_drive_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsDriveType = valueDes;
          break;
        case r'vps_order':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsOrder = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsServiceMaster deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsServiceMasterBuilder();
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

