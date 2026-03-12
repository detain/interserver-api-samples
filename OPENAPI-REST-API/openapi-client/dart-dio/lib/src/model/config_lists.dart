//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/control_panel.dart';
import 'package:openapi/src/model/operating_system.dart';
import 'package:openapi/src/model/memory_option.dart';
import 'package:openapi/src/model/raid_option.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/cpu.dart';
import 'package:openapi/src/model/hard_drive.dart';
import 'package:openapi/src/model/bandwidth.dart';
import 'package:openapi/src/model/ip_block.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'config_lists.g.dart';

/// All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
///
/// Properties:
/// * [cpuLi] 
/// * [memoryLi] 
/// * [hdLi] 
/// * [bandwidthLi] 
/// * [ipsLi] 
/// * [osLi] 
/// * [cpLi] 
/// * [raidLi] 
@BuiltValue()
abstract class ConfigLists implements Built<ConfigLists, ConfigListsBuilder> {
  @BuiltValueField(wireName: r'cpu_li')
  BuiltMap<String, Cpu>? get cpuLi;

  @BuiltValueField(wireName: r'memory_li')
  BuiltMap<String, BuiltMap<String, MemoryOption>>? get memoryLi;

  @BuiltValueField(wireName: r'hd_li')
  BuiltMap<String, BuiltMap<String, HardDrive>>? get hdLi;

  @BuiltValueField(wireName: r'bandwidth_li')
  BuiltMap<String, Bandwidth>? get bandwidthLi;

  @BuiltValueField(wireName: r'ips_li')
  BuiltMap<String, IpBlock>? get ipsLi;

  @BuiltValueField(wireName: r'os_li')
  BuiltMap<String, OperatingSystem>? get osLi;

  @BuiltValueField(wireName: r'cp_li')
  BuiltMap<String, ControlPanel>? get cpLi;

  @BuiltValueField(wireName: r'raid_li')
  BuiltList<RaidOption>? get raidLi;

  ConfigLists._();

  factory ConfigLists([void updates(ConfigListsBuilder b)]) = _$ConfigLists;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ConfigListsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ConfigLists> get serializer => _$ConfigListsSerializer();
}

class _$ConfigListsSerializer implements PrimitiveSerializer<ConfigLists> {
  @override
  final Iterable<Type> types = const [ConfigLists, _$ConfigLists];

  @override
  final String wireName = r'ConfigLists';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ConfigLists object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.cpuLi != null) {
      yield r'cpu_li';
      yield serializers.serialize(
        object.cpuLi,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(Cpu)]),
      );
    }
    if (object.memoryLi != null) {
      yield r'memory_li';
      yield serializers.serialize(
        object.memoryLi,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(BuiltMap, [FullType(String), FullType(MemoryOption)])]),
      );
    }
    if (object.hdLi != null) {
      yield r'hd_li';
      yield serializers.serialize(
        object.hdLi,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(BuiltMap, [FullType(String), FullType(HardDrive)])]),
      );
    }
    if (object.bandwidthLi != null) {
      yield r'bandwidth_li';
      yield serializers.serialize(
        object.bandwidthLi,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(Bandwidth)]),
      );
    }
    if (object.ipsLi != null) {
      yield r'ips_li';
      yield serializers.serialize(
        object.ipsLi,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(IpBlock)]),
      );
    }
    if (object.osLi != null) {
      yield r'os_li';
      yield serializers.serialize(
        object.osLi,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(OperatingSystem)]),
      );
    }
    if (object.cpLi != null) {
      yield r'cp_li';
      yield serializers.serialize(
        object.cpLi,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(ControlPanel)]),
      );
    }
    if (object.raidLi != null) {
      yield r'raid_li';
      yield serializers.serialize(
        object.raidLi,
        specifiedType: const FullType(BuiltList, [FullType(RaidOption)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ConfigLists object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ConfigListsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'cpu_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(Cpu)]),
          ) as BuiltMap<String, Cpu>;
          result.cpuLi.replace(valueDes);
          break;
        case r'memory_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(BuiltMap, [FullType(String), FullType(MemoryOption)])]),
          ) as BuiltMap<String, BuiltMap<String, MemoryOption>>;
          result.memoryLi.replace(valueDes);
          break;
        case r'hd_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(BuiltMap, [FullType(String), FullType(HardDrive)])]),
          ) as BuiltMap<String, BuiltMap<String, HardDrive>>;
          result.hdLi.replace(valueDes);
          break;
        case r'bandwidth_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(Bandwidth)]),
          ) as BuiltMap<String, Bandwidth>;
          result.bandwidthLi.replace(valueDes);
          break;
        case r'ips_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(IpBlock)]),
          ) as BuiltMap<String, IpBlock>;
          result.ipsLi.replace(valueDes);
          break;
        case r'os_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(OperatingSystem)]),
          ) as BuiltMap<String, OperatingSystem>;
          result.osLi.replace(valueDes);
          break;
        case r'cp_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(ControlPanel)]),
          ) as BuiltMap<String, ControlPanel>;
          result.cpLi.replace(valueDes);
          break;
        case r'raid_li':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(RaidOption)]),
          ) as BuiltList<RaidOption>;
          result.raidLi.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ConfigLists deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ConfigListsBuilder();
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

